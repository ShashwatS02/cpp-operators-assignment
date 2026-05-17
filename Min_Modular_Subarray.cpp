#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

long long pw(long long a,long long e){
    long long r=1;
    for(;e;e>>=1,a=a*a%MOD) if(e&1) r=r*a%MOD;
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; if(!(cin>>T)) return 0;
    vector<int> Mv(T); int mx=0;
    for(int i=0;i<T;i++){ cin>>Mv[i]; mx=max(mx,Mv[i]); }

    vector<long long> f(mx+1), invf(mx+1);
    f[0]=1;
    for(int i=1;i<=mx;i++) f[i]=f[i-1]*i%MOD;
    invf[mx]=pw(f[mx], MOD-2);
    for(int i=mx;i>0;i--) invf[i-1]=invf[i]*i%MOD;

    auto C = [&](int n,int k)->long long{
        if(k<0||k>n||n<0) return 0;
        return f[n]*invf[k]%MOD*invf[n-k]%MOD;
    };

    for(int M: Mv){
        for(int N=1; N<=M; N++){
            long long s=0;
            for(int j=M-1; j>=N; j-=N+1) s = (s + C(j,N)) % MOD;
            long long ans = s * f[N] % MOD;
            if(N>1) cout<<' ';
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}
