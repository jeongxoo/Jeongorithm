def status(command):
    if command[0] != "Leave": return {command[1] : command[2]}

def print_stats(command):
    if command[0] == "Enter": return "님이 들어왔습니다."
    elif command[0] == "Leave": return "님이 나갔습니다."
    
def solution(record):
    answer = []
    record = [r.split() for r in record]
    
    nid = {}
    for a in record:
        if status(a): nid.update(status(a))

    for cmd in record: 
        if print_stats(cmd): answer.append(nid[cmd[1]] + print_stats(cmd))
    
    return answer