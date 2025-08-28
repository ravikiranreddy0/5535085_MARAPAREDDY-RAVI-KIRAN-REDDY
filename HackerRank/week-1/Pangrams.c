#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    
    char s[1000];
    
    fgets(s,sizeof(s),stdin);
    
    int letters[26] = {0};
    for(int i=0;s[i] != '\0';i++)
    {
        if(isalpha(s[i]))
        {
            char lower = tolower(s[i]);
            letters[lower - 'a'] = 1;
        }
    }
    int is_pangram = 1 ;
    for(int i=0;i<26;i++)
    {
        if(letters[i] == 0)
        {
            is_pangram = 0;
            break;
        }
    }
    if(is_pangram)
    printf("pangram\n");
    else
     printf("not pangram\n");
     return 0;
    
}
