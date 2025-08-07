#include<stdio.h>

int main()
{
    int n,result=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        result ^= arr[i];   
    }
    printf("%d",result);
    return 0;
    
}