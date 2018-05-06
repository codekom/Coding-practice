def combinations(arr,b,subset=[]):
    s = sum(subset)
    if s==b:
        y = tuple(subset)
        fl.add(y)
    if s>=b:
        return
    for i in range(len(arr)):
        x=arr[i]
        barr=arr[i+1:] 
        combinations(barr,b,subset + [x])

t = int(input())
while t>0:
    n = int(input())
    l = list(map(int,input().split()))
    st = int(input())
    l.sort()
    fl = set()
    combinations(l,st)
    if fl:
        ul = [p for p in fl]
        ul.sort()
        for tp in ul:
            print('(',end='')
            for i in range(len(tp)):
                if i == len(tp)-1:
                    print(tp[i],end='')
                else:
                    print(tp[i],end=' ')
            print(')',end='')
        print()
    else:
        print('Empty')
    t-=1

