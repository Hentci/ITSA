a,b = input().split()

results = 0
sub_len = len(a)
for i in range(len(b)):
    if b[i:i+sub_len] == a:
        results += 1
print(results)