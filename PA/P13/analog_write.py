import simplecontroller as sc
import time

esp32 = sc.Board('/dev/cu.usbserial-110')

esp32.pinMode(15, sc.INPUT)
esp32.pinMode(2, sc.OUTPUT)
while True:
    esp32.analogWrite(2, esp32.analogRead(15))
    #time.sleep(0.1)
    

esp32.close()