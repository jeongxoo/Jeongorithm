def solution(numbers):
    numbers.sort()
    answer = {(numbers[i] + numbers[j]) for i in range(len(numbers)) for j in range(i+1, len(numbers))}
    answer = list(answer)
    answer.sort()
    return answer