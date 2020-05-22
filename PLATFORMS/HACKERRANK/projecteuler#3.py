import math


def create_prime_list(n):
    maxprime = -1
    while n % 2 == 0:
        maxprime = 2
        n >>= 1

    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            maxprime = i
            n //= i

    print(n if n > 2 else maxprime)


if __name__ == '__main__':
    for t in range(int(input())):
        create_prime_list(int(input()))
