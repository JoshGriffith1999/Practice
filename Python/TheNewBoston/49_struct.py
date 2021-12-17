from struct import *

#store as bytes data
packedData = pack('iif', 6, 19, 4.73)
print("packed data:", packedData)

#See size of transmitted data
print("Size interger:", calcsize('i'))
print("Size float:", calcsize('f'))
print("Size iif:", calcsize('iif'))

#Unpack byte data
unpackedData = unpack('iif', packedData)
print("Unpacked: ", unpackedData)

#Unpacking the actual bytes
unpackedData2 = unpack('iif', b'\x06\x00\x00\x00\x13\x00\x00\x00)\\\x97@')
print("Unpacked 2: ", unpackedData2)