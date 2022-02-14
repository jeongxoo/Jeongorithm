from functools import reduce
from collections import deque
import itertools

def solution(id_list, report, k):
    info = {}    
    apply = lambda x,y: info[x].add(y)
    
    for r in report:
        _r = r.split()
        try:
            apply(_r[1], _r[0])
        except:
            info[_r[1]] = set([_r[0]])
    
    info = {key:list(val) for key, val in info.items() if len(val) >= k}
    info = list(itertools.chain(*info.values()))
    result = [info.count(id) for id in id_list]
    return result