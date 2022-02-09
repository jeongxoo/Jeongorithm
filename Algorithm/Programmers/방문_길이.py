from collections import deque
def solution(dirs):
    visited = deque([[0,0,0,0]])
    answer = 0

    for dir in dirs:
        cur = visited[0][2:]
        if dir == "U":
            nxt = [cur[0], cur[1] + 1]
        elif dir == "D":
            nxt = [cur[0], cur[1] - 1]
        elif dir == "R":
            nxt = [cur[0] + 1, cur[1]]
        else:
            nxt = [cur[0] - 1, cur[1]]
            
        if -5 <= nxt[0] <= 5 and -5 <= nxt[1] <= 5:
            pos = cur + nxt
            _pos = nxt + cur
            if pos not in visited and _pos not in visited:
                answer += 1
            visited.appendleft(pos)
        else:
            continue    
    
    return answer