def solution(n):
    return min([i if n % i == 1 else n for i in range (1, n)])