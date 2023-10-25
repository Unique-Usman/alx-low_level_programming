a, b = 0, 1

c = int(input("Input the number"))

i = 0
while i <= c:
    print(a)
    a, b = b, a + b
    i += 1
