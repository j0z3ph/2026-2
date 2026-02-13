
def funcion():
    a = 5
    def funcion2():
        nonlocal a
        a = 6
        print(a)
    funcion2()
    print(a)
    
funcion()