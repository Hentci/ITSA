# a,b = int(input().split())
a = int(input())
b = int(input())

dp = {}
dp[0] = 1
dp[1] = 1
for i in range(2,500):
    dp[i] = dp[i - 1] + dp[i - 2]

cnt = 0
for i in range(0,500):
    if(a <= dp[i] <= b):
        # print(dp[i])
        cnt+= 1

print(cnt)
