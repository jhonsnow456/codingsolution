def Even_Fibonacci_Sum(limit):
    if limit < 2:
        print(0)
    e1 = 0
    e2 = 2
    sm = e1 + e2

    while e2 < limit:
        e3 = 4 * e2 + e1  # This line is important since in series the gap between each even number 1 1 2 3 5 8 13 21 34
        if e3 > limit:
            break
        e1 = e2
        e2 = e3
        sm += e2

    print(sm)


if __name__ == '__main__':
    for i in range(int(input())):
        Even_Fibonacci_Sum(int(input()))
