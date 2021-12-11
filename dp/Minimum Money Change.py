arr = [int(item) for item in input().split()]
LEN = len(arr)
dp = [9999999999999999999999999 for i in range(10001)]
dp[0] = 0

for i in range(1,10000):
    for j in range(0,LEN):
        if i - arr[j] >= 0:
            dp[i] = min(dp[i],dp[i - arr[j]] + 1)


try:
    while True:
        x = int(input())
        print(dp[x])
except EOFError:
    pass