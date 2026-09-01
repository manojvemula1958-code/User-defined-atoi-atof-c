#include<stdio.h>
 float my_atof(const char *p)
 {
     float res=0.0;
     float fract=0.1;
     int sign=1;
     
     if(*p== '-')
     {
         sign= -1;
         p++;
     }
     else if(*p=='+')
     {
         p++;
     }
     
     while(*p>='0' && *p<='9')
     {
         res=res*10+(*p-'0');
         p++;
     }
     if(*p =='.')
     {
         p++;
         
         while(*p >='0' && *p <='9')
         {
             res=res+(*p-'0')*fract;
             fract=fract/10;
             p++;
         }
     }
     return res*sign;
 }
 
 int main()
 {
     char str[30];
     
     printf("Enter float:\n");
     scanf("%s",str);
     
     printf("Floating num= %.3f\n",my_atof(str));
     return 0;
 }