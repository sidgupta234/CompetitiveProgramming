// http://codeforces.com/problemset/problem/112/A

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
    string a, b;
    cin>>a>>b;
    
	rep(i,a.length())
  		a[i]=tolower(a[i]);
  
  	rep(i,b.length())
  		b[i]=tolower(b[i]);

  	if(a==b)
  		cout<<0<<endl;

  	else if(a.compare(b)<0)
  		cout<<-1<<endl;

  	else
  	    cout<<1<<endl;

return 0;
}
