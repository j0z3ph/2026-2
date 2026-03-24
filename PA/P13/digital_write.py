import simplecontroller as sc
import time

esp32 = sc.Board('/dev/cu.usbserial-110')

esp32.pinMode(2, sc.OUTPUT)
while True:
    esp32.digitalWrite(2, True)
    time.sleep(0.5)
    esp32.digitalWrite(2, False)
    time.sleep(0.5)

esp32.close()