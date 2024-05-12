N = int(input())
A = 0
B = 0
valor = 0

for i in range(N):
    valor = int(input())
    if valor == 1:
        if A == 0:
            A = 1
        else:
            A = 0
    elif valor == 2:
        if A == 0:
            A = 1
        else:
            A = 0
        if B == 0:
            B = 1
        else:
            B = 0

print(A)
print(B)
