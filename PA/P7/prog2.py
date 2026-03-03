import tkinter as tk

ventana = tk.Tk()
ventana.wm_minsize(300,300)

boton = tk.Button(ventana, text="Holi")
boton.place(x= 50, y=50)

boton2 = tk.Button(ventana, text="Adios")
boton2.place(x=50, y=100)
ventana.mainloop()