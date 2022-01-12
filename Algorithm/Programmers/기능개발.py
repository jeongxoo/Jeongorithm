from collections import deque

def solution(progresses, speeds):
    progress = [((100 - (v)) // speeds[i]) \
            if (100 - (v)) % speeds[i] == 0 else ((100 - (v)) // speeds[i]) + 1 \
            for i, v in enumerate(progresses)]
    
    answer = deque()
    while (progress):
        cnt = 0
        for i in progress:
            if progress[0] >= i: cnt += 1
            else: break
        progress = progress[cnt:]
        answer.append(cnt) 
        
    return list(answer)