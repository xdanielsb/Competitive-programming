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
  ll a, b;
  while( cin >> a >> b){
    if(a <= b){
      cout << (b-a) <<endl;
      continue;
    }
    int ans  =0;
    while(a!=b){
      if(a > b ){
        if( a % 2){
          ans++;
          a++;
        }else{
          a/=2;
          ans++;
        }
      }else{
        ans += (b-a);
        a = b;
      }
    }
    cout << ans <<endl;
  }

  return 0;
}
