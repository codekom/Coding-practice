def reverse_words():
    t = int(input())
    while t>0:
        s = input()
        l = s.split(".")
        l = l[::-1]
        rs = ".".join(l)
        print(rs)
        t-=1

if __name__ == "__main__":
    reverse_words()
