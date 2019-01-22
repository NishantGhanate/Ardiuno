import serial
import time
import sys

ser = serial.Serial('COM4',9600)
ser.write('1'.encode())
print(ser.readline())


#while True:
    #ser.write('300,400'.encode())
    #sys.stdout.write(ser.readline())
    #sys.stdout.flush()

    
