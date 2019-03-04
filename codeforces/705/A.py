n = int(input())
print("I hate", end=" ")
for x in range(1, n):
    print("that I", end=" ")
    if x % 2 == 0:
        print("hate", end=" ")
    else:
        print("love", end=" ")

print("it")
