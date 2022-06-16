from smbus import SMBus 

address= 0x8 
bus = SMBus(1)

print("LED ON - press 1, LED OFF - press 0")

while 1: 
    Led_State = input(">>>>>>  ") 
    if Led_State == "1":
        bus.write_byte(address, 0x1) 
    elif Led_State == "0":
        bus.write_byte(address, 0x0)
    else:
        break  
