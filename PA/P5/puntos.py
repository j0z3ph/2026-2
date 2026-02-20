class Punto:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __add__(self, other):
        punto = Punto(self.x + other.x, self.y + other.y)
        return punto
    
    def __str__(self):
        return f"({self.x},{self.y})"
        
        
        
p1 = Punto(5,6)
p2 = Punto(6,7)

p3 = p1 + p2

print(p3)