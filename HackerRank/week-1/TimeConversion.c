#include<stdio.h>
#include<string.h>

void timeconversion(char * t)
{
    int h = (t[0] - '0') * 10 + (t[1] - '0');
    if(t[8] == 'A')
    {
        if(h == 12)
        {
            t[0] = '0';
            t[1] = '0';
            
        }
    }
    else
    {
        if(h != 12)
        {
            h += 12;
            t[0] = (h/10) + '0';
            t[1] = (h % 10) + '0';
        }
    }
    t[8] = '\0';
    printf("%s\n",t);
}
int main()
{
    char time[11];
    scanf("%s",time);
    timeconversion(time);
    return 0;
}