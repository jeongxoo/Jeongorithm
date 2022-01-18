n = int(input())
ans = n
cnt = 0

while 1:
    cnt += 1
    ans = int(str(ans % 10) + str(((ans // 10) + (ans % 10)) % 10))
    if n == ans: break
        
print(cnt)