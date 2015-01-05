#include<stdio.h>

float value(char s[],int*pi)
{    int i,m,j,f;
     float t;
     for (i=*pi; (s[i]<'0'||'9') && s[i]!='-';i++);
         m=1;
         if(s[i]=='-')
             { m=-1; i++; }
             for(j=0;s[i]>='0'&&s[i]<'9';i++)
                 j=10*j+s[i]-'0';
                  if(s[i]!='.')
                   {*pi=i; return(m*j); }
                  else
                   {i++; t=0;
                   for(;s[i]>='0'&&s[i]<='9';i++)
             		{t=t*10+s[i]-'0';
                        f++;
                        }
                   for(;f>0;f--)
                   t=t/10;
                   *pi=i;
                   return(m*(j+t));
                   }
}
main()
{    char s[]="-233.33 22.1 aaa 22 11";
     int i=0;
     while(s[i])
     printf("%f\n",value(s,&i));
}
    
     
         
