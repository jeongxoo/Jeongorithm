from collections import deque

def solution(s):
    s = s.replace("}", " ")
    s = s.replace("{", " ")
    s = s.split()
    s = [list(map(int, _s.split(","))) for _s in s if _s != ","]
    s.sort(key = lambda x: len(x))
    s = deque(s)

    ans = []
    add = ans.append
    
    cur = s.popleft()[0]
    add(cur)
    
    while s:
        cur = s.popleft()
        for x in ans:
            cur.remove(x)
        add(cur[0])
        
        
    return ans