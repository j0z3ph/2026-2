import tkinter as tk

ventana = tk.Tk()
ventana.wm_minsize(300,300)

boton = tk.Button(ventana, text="Holi")
boton.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)

boton2 = tk.Button(ventana, text="Adios")
boton2.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)
ventana.mainloop()