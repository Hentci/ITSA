t = int(input())

while True:
    if t == 0:
        break
    t -= 1
    arr = list(map(int, input().split()))
    arr.sort()
    ans = 100000000000000
    Len = len(arr)
    for i in range(1,Len - 1):
        ans = min(ans,arr[i] - arr[i - 1])
    print(ans)

