#
# Created by Kelly Cuna on 10-Mar-24.
# https://omegaup.com/arena/problem/El-Mayor-Impar/#problems

def main():
    li = []

    for x in range(5):
        li.append(int(input()))

    li.sort(reverse = True)

    for x in li:
        if x % 2 == 1:
            print(x)
            break

main()
