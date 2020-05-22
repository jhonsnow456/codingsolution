def sumAP(n, d):
    n = int(n / d)
    return (n * (n + 1) * d) >> 1  # same as [ n * (n + 1) // 2 ] * d


def sumMultiples(n):
    n -= 1
    print(int(sumAP(n, 3) + sumAP(n, 5) - sumAP(n, 15)))


if __name__ == '__main__':
    for i in range(int(input())):
        n = int(input())
        sumMultiples(n)
