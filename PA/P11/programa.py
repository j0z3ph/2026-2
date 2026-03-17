from PySide6.QtWidgets import QMainWindow, QDialog, QMessageBox
from PySide6 import QtWidgets
from ventana_ui import *
from dialogo_ui import *
import sys

class Usuario():
    def __init__(self, nombre:str, correo: str, tipo: str):
        self.__nombre = nombre
        self.__correo = correo
        self.__tipo = tipo
    
    @property
    def nombre(self):
        return self.__nombre
    
    @property
    def correo(self):
        return self.__correo
    
    @property
    def tipo(self):
        return self.__tipo
    

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.actionSalir.triggered.connect(self.close)
        self.actionNuevo.triggered.connect(self.nuevo_usuario)
        
        self.__lista = []
        
    
    def nuevo_usuario(self):
        dialogoNuevo = NuevoUsuario(self)
        if dialogoNuevo.exec() == 1:
            if len(dialogoNuevo.txtNombre.text()) == 0:
                QMessageBox.critical(self, "Error", "No se ingreso nombre")
            elif len(dialogoNuevo.txtCorreo.text()) == 0:
                QMessageBox.critical(self, "Error", "No se ingreso correo")
            else:
                usr = Usuario(dialogoNuevo.txtNombre.text(),
                              dialogoNuevo.txtCorreo.text(),
                              dialogoNuevo.comboTipo.currentText())
                self.__lista.append(usr)
                self.muestra_lista()
                
    def muestra_lista(self):
        self.tabla.clear()
        self.tabla.setColumnCount(3)
        self.tabla.setRowCount(len(self.__lista))
        self.tabla.setHorizontalHeaderLabels(["Nombre", "E-Mail", "Tipo"])
        cont = 0
        for usuario in self.__lista:
            self.tabla.setItem(cont, 0, QTableWidgetItem(usuario.nombre))
            self.tabla.setItem(cont, 1, QTableWidgetItem(usuario.correo))
            self.tabla.setItem(cont, 2, QTableWidgetItem(usuario.tipo))
            cont+=1


class NuevoUsuario(QDialog, Ui_Dialog):
    def __init__(self, parent):
        super().__init__(parent)
        self.setupUi(self)
        self.comboTipo.addItems(["Normal","Therian","Therian't", "Diego", "Tripoide"])
    
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
