from collections import deque

def solution(board, moves):
    temp = []
    add = temp.append
    for i in range(len(board)):
        t = deque(v[i] for v in board if v[i] != 0)
        add(t)
                
    box = deque([])
    count = 0
    for m in moves:
        try:
            new = temp[m - 1].popleft()
        except:
            continue
            
        if box:
            before = box.pop()
            if new == before:
                count += 2
            else:
                box.append(before)
                box.append(new)
        else:
            box.append(new)

    return count