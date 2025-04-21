import sys
from collections import defaultdict

def main():
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    a = list(map(int, data[1:n+1]))

    m = defaultdict(int)
    for num in a:
        m[num] += 1

    f = 0

    for i in range(1, n):
        if m[i] == 0 or m[i] == i:
            continue
        elif m[i] < i:
            print(m[i])
            f += 1
            break
        elif m[i] > i:
            print(m[i] - i)
            f += 1
            break

    if f == 0:
        print("0")

if __name__ == "__main__":
    main()
