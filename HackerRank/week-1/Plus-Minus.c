#include<stdio.h>
int main()
{
    int n,i;
    int pos=0,neg=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    if (arr[i] > 0)
        pos++;
    else if (arr[i] < 0)
        neg++;
    else
     zero++;  
    }
    float a = (float)pos/n;
    float b = (float) neg/n;
    float c = (float) zero/n;
    printf("%.6f\n%.6f\n%.6f",a,b,c);
}
