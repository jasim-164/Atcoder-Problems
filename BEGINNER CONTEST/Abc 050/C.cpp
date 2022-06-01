#pragma GCC optimize("O3")

#define all(obj) (obj).begin(),(obj).end()
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define reps(i,a,n) for(long long i=(a);i<(long long)(n);++i)
#define rep(i,n) reps(i,0,n)
#define rrep(i,a,n) for(long long i=(a);i>=(long long)(n);--i)
#define fore(i,a) for(auto &i:(a))

template<class T> inline bool chmin(T& a, T b) {if(a>b){a=b;return(true);}return(false);}
template<class T> inline bool chmax(T& a, T b) {if(a<b){a=b;return(true);}return(false);}

using ll=long long;
using ull=unsigned long long;
using ld=long double;
using vi=vector<int>;
using vll=vector<long long>;
using vld=vector<long double>;
using vs=vector<string>;
using vb=vector<bool>;
using vp=vector<pair<int,int>>;
using graph=vector<vector<int>>;
const int inf=1e9+10;
const int mod=1e9+7;
const long long INF=1e18;
const long double EPS=1e-10;


int	main(void)
{
  /* ---------- ---------- ---------- */
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  /* ---------- ---------- ---------- */

  int n; cin>>n;
  vi a(n); rep(i,n) cin>>a[i];
  bool ok=true;
  int ans=0;

  sort(all(a));
  rep(i,n) {
    if((n%2==1 && a[i]!=(i+1)/2*2)
      || (n%2==0 && a[i]!=i/2*2+1)) {
      ok=false;
      break;
    }
  }
  if(ok) {
    ans=1;
    rep(i,n/2) (ans*=2)%=mod;
  }

  cout<<ans<<endl;
}
