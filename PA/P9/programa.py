from PySide6.QtWidgets import QMainWindow 
from PySide6 import QtWidgets
from untitled_ui import *
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.btnAceptar.clicked.connect(self.pushado)
        
    def pushado(self):
        print(self.txtNombre.text())
        self.txtNombre.setText('')
    
    
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
