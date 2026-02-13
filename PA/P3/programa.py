import math

def suma(a=1, b=1):
    return a+b

def la_suma(*valores):
    s = 0
    for v in valores:
        s += v
    return s

print(la_suma(1,2,3,4,5,6,7,8))