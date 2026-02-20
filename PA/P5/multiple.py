class Mama:
    def metodo(self):
        print("Soy la mama")

class Papa:
    def metodo(self):
        print("Soy el papa")

class Lechero:
    def metodo(self):
        print("Soy el lechero")


class Hije(Lechero, Papa, Mama):
    pass

hije = Hije()

hije.metodo()