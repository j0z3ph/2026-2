from PySide6.QtWidgets import QMainWindow 
from PySide6 import QtWidgets
from PySide6.QtGui import QKeyEvent
from ui_maizoro_ui import *
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.pantalla.setText("0")
        
        self.btn0.clicked.connect(self.numero_presionado)
        self.btn1.clicked.connect(self.numero_presionado)
        self.btn2.clicked.connect(self.numero_presionado)
        self.btn3.clicked.connect(self.numero_presionado)
        self.btn4.clicked.connect(self.numero_presionado)
        self.btn5.clicked.connect(self.numero_presionado)
        self.btn6.clicked.connect(self.numero_presionado)
        self.btn7.clicked.connect(self.numero_presionado)
        self.btn8.clicked.connect(self.numero_presionado)
        self.btn9.clicked.connect(self.numero_presionado)
        
        self.btnAC.clicked.connect(self.limpia)

    def keyPressEvent(self, event: QKeyEvent):
        print(event.key())
        if event.key() >= 48 and event.key() <= 57:
            if self.pantalla.text() == "0":
                self.pantalla.setText(str(event.key() - 48))
            else:
                self.pantalla.setText(self.pantalla.text() + str(event.key() - 48))
        return super().keyPressEvent(event)

    def limpia(self):
        self.pantalla.setText("0")    
        self.move(self.pos().x() + 10, self.pos().y() + 10)    
        
    def numero_presionado(self):
        if self.pantalla.text() == "0":
            self.pantalla.setText(self.sender().text())
        else:
            self.pantalla.setText(self.pantalla.text() + self.sender().text())
    
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
