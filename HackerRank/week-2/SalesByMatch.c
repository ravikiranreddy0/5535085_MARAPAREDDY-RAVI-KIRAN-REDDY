#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int counts[101] = {0};
    int pairs = 0;
    for(int i=0;i<n;i++)
    {
        counts[ar[i]]++;
    }
    
    
    for(int i=0;i<101;i++)
    {
        pairs += counts[i] / 2;
    }
    
    printf("%d\n",pairs);
    return 0;
}
