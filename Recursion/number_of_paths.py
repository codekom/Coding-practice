def paths(x,y):
    if x==1 or y==1:
        return 1
    return paths(x-1,y) + paths(x,y-1)

t = int(input())
while t>0:
    m,n = map(int,input().split())
    ans = paths(m,n)
    print(ans)
    t-=1
