def solution(lottos, win_nums):
    answer = []
    zero_count = lottos.count(0)
    match_count = 0
    
    for num in lottos: 
        if num in win_nums: match_count += 1
    
    if zero_count == 0: return [6 if match_count <= 1 else 7 - match_count, 6 if match_count <= 1 else 7 - match_count]
    else: return [7 - (match_count + zero_count), 6 if match_count <= 1 else 7 - match_count]
    
    return answer