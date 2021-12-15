arr = list(map(int, input().split()))

curr = arr[0]
ans = arr[0]
for i in range(1, len(arr)):
    curr = max(arr[i], curr + arr[i])
    ans = max(ans, curr)

if (ans < 0):
    ans = 0
print(ans)
