import ctypes

cops = ctypes.CDLL('./100-operations.so')

a = 10
b = 20

result = cops.add(a, b)

print(result)
