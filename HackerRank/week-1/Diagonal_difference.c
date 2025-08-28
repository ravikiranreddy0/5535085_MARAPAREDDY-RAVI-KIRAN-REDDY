#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int x = 0;
    int y = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          scanf("%d",&arr[i][j]);   
          if(i==j)
          {
            x += arr[i][j];
          }
          if(i+j == n-1)
          {
            y += arr[i][j];
          }
        }
    }
    int diff = abs(x-y);
    printf("%d",diff);
    
    
    
    
    
    
}
