def paranthesis_checker():
    t = int(input())
    while t>0:
        s = input()
        n = len(s)
        ob = []
        ans = 'balanced'
        for i in range(n):
            if s[i] == '(' or s[i] == '{' or s[i] == '[':
                ob.append(s[i])
            elif s[i] == ')' or s[i] == '}' or s[i] == ']':
                if not ob:
                    ans = 'not balanced'
                    break
                else:
                    p = ob[-1]
                    if (p == '(' and s[i] == ')') or (p == '{' and s[i] == '}') or (p == '[' and s[i] == ']'):
                        ob.pop()
                    else:
                        ans = 'not balanced'
                        break
        if ob:
            ans = 'not balanced'
        print(ans)
        t-=1

if __name__ == "__main__":
    paranthesis_checker()
