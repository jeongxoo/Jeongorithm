import numpy as np
import math

def solution(answers):
    answer = []
    member = {1:[1,2,3,4,5], 2:[2, 1, 2, 3, 2, 4, 2, 5], 3:[3, 3, 1, 1, 2, 2, 4, 4, 5, 5]}
    n = len(answers)
    answers = np.array(answers)
    for k,v in member.items():
        v = np.array(v * math.ceil(n / len(v)))
        
        ans = answers
        if len(v) != n:
            ans = np.hstack([answers, np.array([6 for _ in range(len(v) - n)])])
            
        answer.append((ans - v).tolist().count(0))
    
    answer = [i+1 for i, v in enumerate(answer) if v == max(answer)]
    return answer