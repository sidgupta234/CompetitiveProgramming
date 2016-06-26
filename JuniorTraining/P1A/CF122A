// http://codeforces.com/problemset/problem/122/A
// aliter := one can iterate from i to n, if i is a lucky number, divide and check for it.
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define rep(i,n) for(lli i=0;i<(lli)(n);i++)
#define rep1(i,n) for(lli i=1;i<=(lli)(n);i++)
#define repa(i,a,n) for(lli i=a;i<(lli)(n);i++)
#define repa1(i,a,n) for(lli i=a;i<=(lli)(n);i++)

#define dec(i,n) for(lli i=n-1;i>=0;i--)

#define pu push
#define fr first
#define sc second
#define pb push_back
#define mp make_pair
#define pii pair<lli,lli>
#define vi vector<lli>
#define MOD 1000000007
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pd(n) printf("%lf ",n)
#define pdl(n) printf("%lf\n",n)
#define pl(n) printf("%lld\n ",n)
#define pll(n) printf("%lld\n",n)
#define scan(v,n) rep(i,n){ lli j;sl(j);v.pb(j);}
#define fill(x,v) memset(x,v,sizeof(x))
#define cases lli t;cin>>t;while(t--)

int main(){
    // freopen("input_file_name.in","r",stdin);
    // freopen("output_file_name.out","w",stdout);
    int A[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int x,size=sizeof(A)/sizeof(A[0]);
    cin>>x;

    bool isLucky=false;
    
    rep(i,size){
    	if(x%A[i]==0){
    		isLucky=true;
    	}
    }

    if(isLucky)
    	cout<<"YES"<<endl;
    
    else
    	cout<<"NO"<<endl;
    return 0;
  
}
