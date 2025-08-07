#include<stdio.h>
#include<string.h>

int main()
{
    int n,q;
    char str[1000][101];
    char que[1000][101];
    int counts[1000] = {0};
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s", str[i]);
        
    }
    
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%s",que[i]);
    }
    
    for (int i=0;i<q;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
         if(strcmp(que[i],str[j]) == 0)
         {
            count ++;
         }   
        }
        counts[i] = count;
    }
    for(int i=0;i<q;i++)
    {
        printf("%d\n",counts[i]);
    }
    return 0;
}
