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


  ll x;
  while( cin >> x){
    unordered_set< ll > cnt;
    cnt.insert( x);
    while(1){
      x++;
      while( (x % 10) == 0 && x>0){
        x/= 10;
      }
      if(cnt.find(x) != cnt.end()) break;
      cnt.insert(x);
    }
    cout << size(cnt) <<endl;
  }


  return 0;
}
