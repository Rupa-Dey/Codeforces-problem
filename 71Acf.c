#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i,len,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);

    len=strlen(ch);
     if(len>10){
            //for(i=0;i<len;i++)
    printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
    }
    else
        printf("%s\n",ch);}
    return 0;
}
