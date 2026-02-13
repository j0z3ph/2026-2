g = 0

def funcion(a):
    global g
    g = a
    print(g)

if __name__ == "__main__":    
    funcion(5)
    print(g)

