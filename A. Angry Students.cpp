       //Name:Rupa Dey
       //Date: 29 june 2020
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
    int t;
    test{
  int n,i,j,cnt=0,ma=0;
  cin>>n;
  string s;
  cin>>s;
  for(i,0,s.size())
  {
      if(s[i]=='A')
      {
          while(i<(s.size()-1) && s[i+1]=='P'){
            cnt++;
            i+=1;}
      }
     ma = max(cnt,ma);
     cnt=0;
  }
  cout<<ma<<endl;


    }
}
//hare krishna...


