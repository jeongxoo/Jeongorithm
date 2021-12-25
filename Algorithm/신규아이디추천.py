def solution(new_id):
    answer = ''
    _new_id = ""
    
    # 1
    new_id = new_id.lower()
    
    # 2
    _a = ["-", ".", "_"]
    for n in new_id:
        if n.isalnum(): _new_id += n
        else: 
            if n in _a: _new_id += n
    new_id = _new_id
    
    # 3
    _new_id = new_id.split(".")
    _new_id = ["." + n for n in _new_id if n != ""]
    new_id = "".join(_new_id)
    
    # 4
    try:
        if new_id[0] == ".": new_id = new_id[1:]
    except:
        new_id = "a"
        
    # 5
    if len(new_id) >= 16: 
        new_id = new_id[:15]
        # 6
        if new_id[14] == ".": new_id = new_id[:14]
    
    # 7
    while len(new_id) < 3:
        new_id += new_id[-1]
    
        
    answer = new_id
    return answer
