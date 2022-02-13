import re

def solution(str1, str2):
    str1 = re.sub(r"[^a-zA-Z]", " ", str1).lower().split(" ")
    str2 = re.sub(r"[^a-zA-Z]", " ", str2).lower().split(" ")
    
    a = [v[i:i+2] for v in str1 for i, _v in enumerate(v)]
    a = list(filter(lambda x: len(x) > 1, a))
    b = [v[i:i+2] for v in str2 for i, _v in enumerate(v)]
    b = list(filter(lambda x: len(x) > 1, b))

    if not a and not b:
        return 65536

    interaction = []
    add = interaction.append
    aa = a.copy()
    for _a in aa:
        if _a in b:
            b.remove(_a)
            a.remove(_a)
            add(_a)
            
    union = a + b + interaction

    return int((len(interaction) / len(union)) * 65536)