#include<stdio.h>
int main()
{
    int n,x,y,z,sum=0,s1=0,s2=0,i,m=0;
    scanf("%d",&n);
     //i=n;
    while(n--)
    {
        scanf("%d %d %d",&x,&y,&z);
        sum+=x;
        s1+=y;
        s2+=z;
       //i--;
    }

    //printf("%d",sum);
    if(sum==0 && s1==0 && s2==0) // x==0 || y==0 ||z==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
