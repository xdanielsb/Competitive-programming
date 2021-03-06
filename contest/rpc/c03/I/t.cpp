#include <bits/stdc++.h>
#define endl '\n'
#define debug1( x ) cout << #x << " = " <<  x << endl;
#define debug2( x, y) cout <<#x << " = " << x << " , " <<#y << " = " << y <<endl;
#define F first
#define S second
#define PB push_back
#define size( x )   int( ( x ).size( ) )
#define endl '\n'
#define rep(i, a, b) for( __typeof(a) i =(a); i<(b);i++)
#define rept(i, a, b) for( __typeof(a) i =(a); i<=(b);i++)
#define all(x) x.begin(),x.end()

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main(){
  ios::sync_with_stdio( false );
  cin.tie( nullptr );
#ifdef LOCAL
  if(!freopen("in", "r" , stdin))
    cerr << "no file..."<<endl;
#endif
  int n;
  while(cin >> n){
    long double ans=1e18;
    bool can = true;
    vi A(n);
    rep(i, 0, n) cin >> A[i];
    sort(all(A));
    rep(i, 0, n){
      if( A[i] > (i+1)){
        can = false;
        break;
      }
      ans = min( ans, (long double)A[i]/(i+1));
    }

    if(can){
      cout << fixed << setprecision(7) << ans <<endl;
    }else{
      cout << "impossible" <<endl;
    }

  }

  return 0;
}
