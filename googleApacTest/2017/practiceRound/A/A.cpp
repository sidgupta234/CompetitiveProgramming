// https://code.google.com/codejam/contest/5254486/dashboard#s=p0

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
   freopen("A-large-practice.in","r",stdin);
   freopen("output_file_name.out","w",stdout);
    lli t;
    cin>>t;

    for(long long int k=1;k<=t;k++){
        string a;
        cin>>a;
        long long int ans = 1;
        
        rep(i,a.length()){
            long long int multi=1;
            
            if(a.length()==1)
                break;

            if(i==a.length()-1){
                if(a[i]!=a[i-1])
                    multi++;
            }

            else if(i==0){
                
                if(a[i]!=a[i+1])
                    multi++;
            }


            else{
                if(a[i]!=a[i-1])
                    multi++;
                if(a[i]!=a[i+1] &&a[i+1]!=a[i-1])
                    multi++;
            }
            
            if(ans*multi > MOD)
                ans=(ans * multi )%MOD;
            
            else
                ans = ans*multi;
        }

        printf("Case #%lld: %lld \n",k,ans);
    }

    return 0;
  
}
