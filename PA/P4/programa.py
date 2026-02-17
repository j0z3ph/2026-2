class Persona:
    #nombre = ''
    #edad = 0
    
    def __init__(self, nombre:str, edad:int) -> None:
        '''
        Constructor de la clase Persona
        
        :param self: Yo mismo
        :param nombre: El nombre de la persona
        :type nombre: str
        :param edad: La edad de la persona
        :type edad: int
        '''
        self.__nombre = nombre
        self.__edad = edad
      
    @property    
    def nombre(self) -> str:
        return self.__nombre
        
    @nombre.setter
    def nombre(self, nombre:str) -> None:
        self.__nombre = nombre
    
    def __str__(self):
        return f'Hola, mi nombre es {self.__nombre} 💩'
    
    def habla(self) -> None:
        '''
        Docstring for habla
        
        :param self: Description
        '''
        print(f'Hola, mi nombre es {self.__nombre} 💩')
        
    @classmethod
    def metodo_de_clase(cls):
        print('Clase')
    
    @staticmethod
    def metodo_estatico():
        print("Holis")

persona1 = Persona("Matusalen", 1000)

Persona.metodo_de_clase()
Persona.metodo_estatico()

persona1.habla()
persona1.nombre = 'Hola'
print(persona1)
print(persona1.nombre)