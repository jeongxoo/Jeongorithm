def solution(n, lost, reserve):
    _lost = set(lost) - set(reserve)
    _reserve = set(reserve) - set(lost)

    lost = list(_lost)
    reserve = list(_reserve)
    for l in _lost:
        if l - 1 in reserve:
            reserve.remove(l-1)
            lost.remove(l)
        elif l + 1 in reserve:
            reserve.remove(l+1)
            lost.remove(l)

    answer = n - len(lost)
    return answer