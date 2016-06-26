// http://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int lli;
#define rep(i,n) for(int i=0;i<(lli)(n);i++)
#define rep1(i,n) for(int i=1;i<=(lli)(n);i++)
#define repa(i,a,b) for(int i=a;i<(lli)(b);i++)
#define repa1(i,a,b) for(int i=a;i<=(lli)(b);i++)
#define pb push_back
#define fs first
#define sc second
#define MOD 1000000007
//freopen("input_file_name.in""","r""","stdin);
//freopen("output_file_name.out""","w""","stdout);


int main(){
  lli n;
  cin>>n;
  int sum=0;
  vector<lli> v;
  
  rep(i,n){
    int temp;
    cin>>temp;
    sum+=temp;
    v.pb(temp);
  }

  sort(v.begin(),v.end(), greater<int>());
  int ans=0;
  int sum2=0;
  int i=0;
  
  while(i<v.size() ){
    ans+=1;
    sum2+=v[i];
    i++;
    if(sum2 > sum/2)
      break;
  }

  cout<<ans<<endl;
  
  return 0; 	
}
