def solution(N, stages):
    counts = [stages.count(i+1) for i in range(N+1)]
    failure = {i+1:c / sum(counts[i:]) if sum(counts[i:]) != 0 else 0 for i,c in enumerate(counts) if i != len(counts) - 1}
    return sorted(failure, key = lambda x : failure[x], reverse = True)