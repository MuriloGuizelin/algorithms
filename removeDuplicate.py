array = list(map(int, input("Entre os valores do array: ").split()))
remove = int(input())

for i in range(len(array)-1, -1, -1):
    if array[i] == remove:
        array.pop(i)

print(len(array))

