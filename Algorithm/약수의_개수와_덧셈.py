def cal(num):
    start = 0
    count = 0
    while start != num + 1:
        start += 1
        if num % start == 0: count += 1
            
    if count % 2 == 0: return 1
    else: return -1

def solution(left, right):
    return sum([cal(i) * i for i in range(left, right + 1)])