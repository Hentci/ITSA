def solve(A):
        ans = 2       
        n= len(A)
        if n<=2 :
            return n
        llap = [2]*n
        A.sort()
   
        for j in range(n-2, -1, -1):
            i= j-1
            k= j+1
            while(i>=0 and k<n):
                if A[i]+A[k] == 2*A[j]:
                    llap[j] = max(llap[k]+1,llap[j])
                    ans = max(ans, llap[j])
                    i-=1
                    k+=1
                elif A[i]+A[k] < 2*A[j]:
                    k += 1
                else:
                    i -= 1
   
        return ans 
t = 5
while True:
    if t == 0:
        break
    t -= 1
    arr = [int(ele) for ele in input().split()]
    print(solve(arr))

