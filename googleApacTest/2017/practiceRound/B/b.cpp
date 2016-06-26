// https://code.google.com/codejam/contest/5254486/dashboard#s=p1

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
    freopen("B-large-practice.in","r",stdin);
    freopen("output_file_name.out","w",stdout);

    lli t,n,k;
    cin>>t;
    lli a[1111], b[1111], c[1111], d[1111];
    
    rep1(r,t){
    	map <lli, lli> M;
    	cin>>n>>k;
    	lli ans=0;

    	rep(i,n)
    		cin>>a[i];
    	
    	rep(i,n)
    		cin>>b[i];
    	
    	rep(i,n)
    		cin>>c[i];
    	
    	rep(i,n)
    		cin>>d[i];
    	
    	

    	rep(i,n){
	    	rep(j,n){
	    		M[a[i]^b[j]]++;
	    	}
	    }

	    rep(i,n){
	    	rep(j,n){
	    		lli temp = c[i]^d[j]^k; 
	    		ans += M[temp];
	    	}
	    }

	    printf("Case #%lld: %lld\n", r, ans);

    }
    
    return 0;
  
}
