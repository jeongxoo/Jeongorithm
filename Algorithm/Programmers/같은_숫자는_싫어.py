def solution(arr):
    answer = "".join([str(n) for n in arr])
    for i in range(10):
        s = str(i)*2
        while s in answer: answer = answer.replace(s, str(i))

    return [int(s) for s in answer]