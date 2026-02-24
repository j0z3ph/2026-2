import tkinter as tk

def cliqueado(event):
    print("Auch!! 🤬")
    
def pushiado():
    print("Yiauch!! 🫦")


ventana = tk.Tk()
ventana.wm_minsize(400, 400)
ventana.wm_maxsize(400,400)
ventana.wm_title("Ventana 😱")

etiqueta = tk.Label(ventana, text="Hola Mundo 😍")
etiqueta.pack()

entrada = tk.Entry(ventana, width=30)
entrada.pack()

boton = tk.Button(ventana, text="Pushme 🥵")
boton.pack()
boton.bind("<1>", cliqueado)

boton2 = tk.Button(ventana, text="Presioname 😈", command=pushiado)
boton2.pack()


ventana.mainloop()