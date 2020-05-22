import math


def solution():
    a = int(input())
    print(abs(int(math.pow((a * (a + 1) // 2), 2)) - (a * (a + 1) * (2 * a + 1) // 6)))


if __name__ == '__main__':
    for _ in range(int(input())):
        solution()
