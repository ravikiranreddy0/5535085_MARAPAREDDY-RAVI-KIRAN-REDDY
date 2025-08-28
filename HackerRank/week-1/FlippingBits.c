#include<stdio.h>
unsigned int flip(unsigned int num)
{
    return num ^ 0xFFFFFFFF;
}
int main()
{
    int count;
    scanf("%d",&count);
    
    while(count--)
    {
        unsigned int x;
        scanf("%u",&x);
        printf("%u\n",flip(x));
    }
    return 0;
}