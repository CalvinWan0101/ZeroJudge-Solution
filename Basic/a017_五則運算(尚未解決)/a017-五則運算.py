import sys
for s in sys.stdin:
    s = s.replace("/", "//")
    ans = eval(s)
    print(int(ans))
