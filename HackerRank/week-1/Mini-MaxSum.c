#include <stdio.h>

int main() {
    int arr[5];
    long long sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
            
        
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }}
    }
    int l = arr[0];
    int h = arr[4];
    long long min_sum= sum-h;
    long long max_sum = sum-l;
    printf("%lld %lld",min_sum,max_sum);
    return 0;
}

