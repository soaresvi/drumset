import serial
import time
import simpleaudio as sa

hh_obj = sa.WaveObject.from_wave_file('HiHat.wav')

ser = serial.Serial('/dev/ttyUSB0', 115200)
print('Serial connected\n')
while True:

    rd = ser.readline()
    if rd == b'11\r\n':
        play_obj = hh_obj.play()
        play_obj.wait_done()
    if rd == b'21':
        print('sna')
    if rd == b'31':
        print('b')
    time.sleep(0.1)
    print(rd, '\n')
