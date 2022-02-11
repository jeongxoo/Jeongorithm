from collections import deque

def make_matrix(rows, columns):
    matrix = [[i+1 + (j*columns) for i in range(columns)] for j in range(rows)]
    return matrix

def solution(rows, columns, queries):
    result = []
    add = result.append
    matrix = make_matrix(rows, columns)
    queries = [list(map(lambda x: x-1, q)) for q in queries]
    for q in queries:
        f = q[:2]
        s = [q[0], q[3]] 
        t = q[2:]
        ft = [q[2], q[1]]
        
        order = [[f[0], i] for i in range(f[1], s[1])] +\
                [[i, s[1]] for i in range(s[0], t[0])] +\
                [[t[0], i] for i in range(s[1], f[1], -1)] +\
                [[i, ft[1]] for i in range(t[0], s[0], -1)]
        
        _array = [matrix[o[0]][o[1]] for o in order]    
        array = deque(_array)
        array.appendleft(array.pop())
        add(min(array))        
        
        for o in order:
            matrix[o[0]][o[1]] = array.popleft()
            
    return result