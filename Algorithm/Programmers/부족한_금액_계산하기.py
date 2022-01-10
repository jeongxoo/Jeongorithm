def solution(price, money, count):
    x = sum([price * i for i in range(1, count + 1)])
    return x - money if x > money else 0