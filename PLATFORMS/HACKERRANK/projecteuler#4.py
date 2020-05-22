palin_list = []
for i in range(100, 1000):
    for j in range(100, 1000):
        a = i * j
        if str(a) == str(a)[::-1]:
            palin_list.append(a)
palin_list.sort(reverse=True)


def solution(num):
    for j in palin_list:
        if j < num:
            print(j)
            return


if __name__ == '__main__':
    for i in range(int(input())):
        a = int(input())
        solution(a)
