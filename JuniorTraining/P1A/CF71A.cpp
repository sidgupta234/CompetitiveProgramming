// http://codeforces.com/problemset/problem/71/A

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
   lli t;
   cin>>t;
   while(t--){
   	string x;
   	cin>>x;
   	string ans="";
   	
   	
   	if(x.length()>10)
   	cout<<x[0]<<x.length()-2<<x[x.length()-1]<<endl;
   	else 
   		cout<<x<<endl;
   }

   return 0;
}
