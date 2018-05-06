import numpy as np

def recurse(x,y):
    for i in range(n):
        for j in range(m):
            if i==x and j==y:
                p = arr[i,j]
                arr[i,j]=k
                if x-1>=0 and arr[x-1,y]==p:
                    recurse(x-1,y)
                if x+1<n and arr[x+1,y]==p:
                    recurse(x+1,y)
                if y-1>=0 and arr[x,y-1]==p:
                    recurse(x,y-1)
                if y+1<m and arr[x,y+1]==p:
                    recurse(x,y+1)


t = int(input())
while t>0:
    n,m = map(int,input().split())
    arr = np.array(list(map(int,input().split()))).reshape(n,m)
    x,y,k = map(int,input().split())
    recurse(x,y)
    b = arr.flatten()
    c = b.size
    for i in range(c):
        print(b[i],end = ' ')
    print()
    t-=1
