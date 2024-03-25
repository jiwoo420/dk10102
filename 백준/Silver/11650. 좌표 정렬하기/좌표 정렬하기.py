n=int(input())
ppap=[]
for i in range(n):
    [a, b] = map(int, input().split())
    ppap.append([a, b])
ppap.sort()
for i in ppap:
    print(i[0], i[1])
