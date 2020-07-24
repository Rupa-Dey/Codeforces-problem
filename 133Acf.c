#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char p[100];
    scanf("%s",p);
    len=strlen(p);
    for(i=0;i<len;i++){
            if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){

                printf("YES\n");
                return 0;}}


            printf("NO\n");


    return 0;

}
