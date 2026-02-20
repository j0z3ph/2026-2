from multimethod import multimethod
from abc import ABCMeta, abstractmethod

class Figura(metaclass=ABCMeta): 
    def __init__(self, base:float, altura:float):
        if base < 1.0 or altura < 1.0:
            raise TypeError("Tonto")
        self._base = base
        self._altura = altura
    
    @property
    def base(self) -> float:
        return self._base
    
    @base.setter
    def base(self, base:float):
        self._base = base
        
    @property
    def altura(self) -> float:
        return self._altura
    
    @altura.setter
    def altura(self, altura:float):
        self._altura = altura
       
    @abstractmethod
    def area(self) -> float:
        pass

class Rectangulo(Figura):
    @multimethod
    def area(self):
        return self._altura * self._base
    
    @multimethod
    def area(self, base:int, altura:int) -> int:
        return base * altura
    
class Triangulo(Figura):
    def area(self):
        return self._altura * self._base * 0.5

rect = Rectangulo(-4.5, 6.7)
tri = Triangulo(4.5, 6.7)
#fig = Figura(5,6)

print(rect.area(4,5))
print(tri.area())

