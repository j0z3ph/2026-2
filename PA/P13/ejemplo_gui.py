from PySide6.QtWidgets import QMainWindow 
from PySide6 import QtWidgets
from PySide6.QtCore import QThread, Signal
from analog_gui_ui import *
import simplecontroller as sc
import sys

class AnalogReadThread(QThread):
    lectura = Signal(float)

    def __init__(self, esp32: sc.Board, port: int):
        super().__init__(None)
        self.esp32 = esp32
        self.port = port
        self.bandera = True

    def run(self):
        while self.bandera:
            analog_value = self.esp32.analogRead(self.port)
            self.lectura.emit(analog_value)
            
    def stop(self):
        self.bandera = False
        self.wait()

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.esp32 = sc.Board('/dev/cu.SimpleController-BT')
        self.esp32.pinMode(15, sc.INPUT)
        self.hilo = AnalogReadThread(self.esp32, 15)
        self.hilo.lectura.connect(self.imprime_analog)
        self.hilo.start()
        
    def imprime_analog(self, value:float):
        self.progressBar.setValue(int(value * 100))
        
    def closeEvent(self, event):
        self.hilo.stop()
        self.esp32.close()
        return super().closeEvent(event)
    
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
