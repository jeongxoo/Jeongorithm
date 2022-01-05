def solution(absolutes, signs):
    return sum([1 * absolutes[s] if v else -1 * absolutes[s] for s,v in enumerate(signs)])
