import serial
import time

ser = serial.Serial('COM4',9600)

while True:
    print(ser.readline().decode())
    ser.write('Data sent from python'.encode())

    
