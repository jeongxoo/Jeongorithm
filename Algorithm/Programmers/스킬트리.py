def solution(skill, skill_trees):
    find = [sk.find(s) if s in sk else 30 for sk in skill_trees for s in skill]
    find = [find[i:i+len(skill)] for i in range(0, len(find), len(skill))]
    answer = sum([1 for f in find if f == sorted(f)])
    return answer