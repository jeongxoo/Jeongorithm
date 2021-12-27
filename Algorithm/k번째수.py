def solution(array, commands):
    answer = []
    for c in commands:
        _temp = array[c[0] - 1:c[1]]
        _temp.sort()
        answer.append(_temp[c[2] - 1])
    return answer