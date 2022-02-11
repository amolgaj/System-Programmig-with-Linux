from email.message import _PayloadType
from http import client
import socket
sockdf = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sockdf.bind ('0.0.0.0',3707)
print("my echo service is listing on port : 3707")
while True:
    _payload,client_address = sockdf.recvfrom(1024)
    sockdf.sendto(_payload, client_address)