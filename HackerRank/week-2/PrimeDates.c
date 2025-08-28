#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int d1,m1,y1;
    int d2,m2,y2;
    scanf("%d-%d-%d" , &d1,&m1,&y1);
    scanf("%d-%d-%d" , &d2,&m2,&y2);
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int ans =0;
    while(1)
    {
        long num = d1 * 1000000L + m1 * 10000L + y1;
        if(num % d1 == 0 || num % m1 == 0) ans++;
        if(d1 == d2 && m1 == m2 && y1==y2)break;
        d1++;
        if((m1==2 &&((y1 % 400 ==0) || (y1%4==0 && y1 % 100 !=0)) && d1 > 29)|| (m1 ==2 && !((y1 % 400 == 0) || (y1 % 4 == 0 && y1 % 100 != 0)) && d1 > 28) || (m1 != 2 && d1 > month[m1 -1]))
        {
            d1 = 1 ;
            m1++;
            if(m1 > 12)
            {
                m1 = 1;
                y1++;
            }
            
        }
    }
    
     printf("%d\n",ans);
    return 0;
}
