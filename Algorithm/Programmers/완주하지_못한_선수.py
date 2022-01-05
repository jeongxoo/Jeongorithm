def solution(participant, completion):
    part = {}
    for p in participant:
        try: part[p] += 1
        except: part[p] = 1

    for c in completion:
        try: part[c] -= 1
        except: part[c] = -1

    for p in participant:
        if part[p] == -1 or part[p] != 0: return p