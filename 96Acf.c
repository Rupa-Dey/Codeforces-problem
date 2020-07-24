#include<stdio.h>
#include<string.h>

int main()
{
    int i,len,c=0,c1=0;
    char st[100];
    scanf("%s",st);
    len=strlen(st);
    //printf("%d",len);
     for(i=0;i<len;i++){
        if((st[i])=='1'){
           c++;
           c1=0;}
           else{
            c1++;
            c=0;}
            if(c>=7 || c1>=7)
                break;
        }
           if(c>=7 || c1>=7)
        printf("YES\n");
        //break;}
    else{
        printf("NO\n");}
        //break;}}
        return 0;
}
