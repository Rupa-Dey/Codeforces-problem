       //Name:Rup
       //Date: 7 july 2020
#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES\n"<<endl
#define no cout<<"NO\n"<<endl
#define test cin>>t; while(t--)
#define for(i,a,n) for(i=a;i<n;i++)
#define e endl
#define nd &&
#define r ||
using namespace std;
int main()
{
   int n,i,print,cnt=0,pos=0,neg=0;
   cin>>n;
   int a[n];
   for(i,0,n){
    cin>>a[i];
    if(a[i]>0)
    pos++;
    else if(a[i]<0)
        neg++;

   }
    // cout<<pos<<" "<<neg<<e;
    print = (n/2)+(n%2);
    if(pos==print) cout<<"1"<<e;
    else if(pos>print)
        cout<<(n+1)/2+1<<e;
    else if(neg>=print)
        cout<<"-1"<<endl;
    else
        cout<<"0"<<endl;

}
//hare krishna...

