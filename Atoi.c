#include<stdio.h>
int my_atoi(const char *p)
{
    int op=0,res=0;
    int sign=1;
    while(*p == ' ' || *p == '\t')
    p++;
    
    if(*p== '-')
    {
        sign=-1;
        p++;
    }
    else if(*p=='+')
    p++;
    while(*p)
    {
        
    if(*p>='0'&&*p<='9')
    {
        res= *p-'0';
        op=op*10+res;
        p++;
    }
    else 
    break;
    }
    return op*sign;
}

int main()
{
    char str[50];
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    printf("Int Num=%d\n",my_atoi(str));
    return 0;
}