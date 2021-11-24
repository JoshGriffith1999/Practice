import numpy

def hamming_distance(a, b):
    a = vector(GF(2), a)
    b = vector(GF(2), b)
    d = 0
    for x in range(a - b):
        d += int(x)
    return d

#############################################

print("Hamming distance(1011101, 1001111) = ", hamming_distance(1011101, 1001111))
print("Hamming distance(1011101, 1110100) = ", hamming_distance(1011101, 1110100))