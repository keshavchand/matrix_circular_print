import random

size = 100

print("int matrix[{}][{}] = ".format(size, size))
print("{")
for i in range(size):
    if i != 0 :
        print(",", end="")
    print("{", end="");
    for j in range(size):
        if j != 0 :
            print(",", end="")
        print(random.randint(1, 100), end = " ")
    print("}")
print("};")

print("const int STRIDE = {};".format(size))
