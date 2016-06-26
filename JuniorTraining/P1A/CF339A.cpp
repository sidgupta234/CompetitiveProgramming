// http://codeforces.com/problemset/problem/339/A

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
  string a,b;
  cin>>a;
  int arr[4]={0,0,0,0};
  
  for(int i=0;i<a.size();i+=2){
    arr[a[i]-'0']++;
  }

  int count=0;
  
  for(int i=1;i<=3;i++){
    while(arr[i]!=0){
      count++;
      cout<<i;
      if(count!=(a.size()+1)/2)
        cout<<'+';
      arr[i]--;
    }
  }
  
  cout<<endl;

  return 0; 	
}
