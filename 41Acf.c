#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,l1,k;
    char s[101],r_s[101],t[101];
    scanf("%s",s);
     scanf("%s",t);
    l=strlen(s);
    for(i=0,j=l-1;i<l;i++,j--){

            r_s[i]=s[j];

        }

    r_s[i]='\0';
   // printf("%s",r_s);
    if((strcmp(r_s,t))==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
