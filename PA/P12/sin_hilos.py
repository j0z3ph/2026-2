from PySide6.QtWidgets import QMainWindow 
from PySide6 import QtWidgets
from ventana_ui import *
import sys
import time

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.btnIniciar.clicked.connect(self.proceso)
        
    def proceso(self):
        for i in range(100):
            self.progressBar.setValue(i)
            time.sleep(0.5)
    
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
