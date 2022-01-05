import heapq

def solution(scoville, K):
    cnt = 0
    heapq.heapify(scoville)
    
    while scoville[0] < K:
        fst = heapq.heappop(scoville)
        try: sec = heapq.heappop(scoville)
        except: return -1
        _n = fst + (sec * 2)
        heapq.heappush(scoville, _n)
        cnt += 1
        
    return cnt