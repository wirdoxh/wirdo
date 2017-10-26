#include<stdio.h>
#include<string.h>
int main()
{
        char a[64]="sss*.bai*du.com*ggg";
        char s[64];
        char *start=NULL;
        char *end=NULL;
        start=a;
        int len;
        memset(s,0x0,sizeof(s));
        while(  (end=strchr(start,'*'))!=NULL)
        {
                *end='\0';
                printf("start=%s\n",start);
                start=end;
                start++;
                printf("start1=%s\n",start);
        }
        return 0;
}
