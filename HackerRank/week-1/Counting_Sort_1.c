#include<stdio.h>

#define MAX_VALUE 100

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int freq[MAX_VALUE] = {0};
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i=0;i<MAX_VALUE;i++)
    {
        printf("%d",freq[i]);
        if(i<MAX_VALUE - 1)
        {
        printf(" ");
        
            }
            
}
printf("\n");
return 0;
}
