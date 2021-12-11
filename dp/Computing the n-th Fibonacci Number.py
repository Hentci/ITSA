# a,b = int(input().split())
t = int(input())


dp = {}
dp[0] = 0
dp[1] = 1
for i in range(2,1001):
    dp[i] = dp[i - 1] + dp[i - 2]

while True:
    if(t == 0):
        break
    t-= 1
    a = int(input())
    print(dp[a])


