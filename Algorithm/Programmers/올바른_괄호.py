from collections import deque

def solution(s):
    answer = deque()
    for a in s:
        if a == "(": answer.append(a)
        else: 
            try: answer.pop()
            except: return False

    return len(answer) == 0