def cal(n):
    if n == 0: return 0
    start = 0
    counts = 0
    while start != n + 1:
        start += 1
        if n % start == 0: counts += start
    return counts
    
def solution(n): return cal(n)