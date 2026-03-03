import tkinter as tk

ventana = tk.Tk()
ventana.wm_minsize(300,300)

boton = tk.Button(ventana, text="1")
boton.grid(row=0, column=0)

boton2 = tk.Button(ventana, text="2")
boton2.grid(row=0, column=1)

boton3 = tk.Button(ventana, text="3")
boton3.grid(row=1, column=0)

boton4 = tk.Button(ventana, text="4")
boton4.grid(row=1, column=1)
ventana.mainloop()