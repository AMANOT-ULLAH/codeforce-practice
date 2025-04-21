t = int(input()) 
for _ in range(t):
    n, k, x = map(int, input().split())

    if x == 1:
        if n % 2 == 1:
            print("NO")
        else:
            print("YES")
    elif k == x and k == 1:
        print("NO")
    else:
        print("YES")
