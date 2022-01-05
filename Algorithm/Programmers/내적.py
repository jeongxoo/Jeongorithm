def solution(a, b):
    return sum([v * b[n] for n, v in enumerate(a)])