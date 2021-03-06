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

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main(){
  ios::sync_with_stdio( false );
  cin.tie( nullptr );
#ifdef LOCAL
  freopen("in", "r" , stdin);
#endif

  int n;
  string s;
  while( cin >> n ){
    vector < int > ans( 30, 0);
    rep( i, 0, n){
      cin >>s;
      int code = s[0]-'a';
      ans[code]++;
    }
    int res = 0;
    rep( i, 0, 30){
      int a = ans[i]/2, b = ans[i]/2 +ans[i]%2;
      if( a > 1)
        res += a*(a-1)/2;
      if( b > 1)
        res += b*(b-1)/2;
    }
    cout << res <<endl;

  }



  return 0;
}
