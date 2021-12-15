#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int main(){
    int t,n,arr[200005];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<2*n;i++)scanf("%d",&arr[i]);
        qsort(arr,n*2,sizeof(arr[0]),cmp);
        printf("%d\n",arr[n-1]);
    }
}
