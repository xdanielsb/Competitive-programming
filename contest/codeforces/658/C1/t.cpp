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
  int t; cin >> t;

  while(t--){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    vector< int > ans;
    for( int i = 0; i < n; i++){
      if( a[i] != b[i]){
        if( i > 0) ans.push_back(i+1);
        ans.push_back(1);
        if( i > 0) ans.push_back(i+1);
      }
    }
    cout << size(ans)<< " ";
    for( int x: ans) cout << x << " "; cout <<endl;
  }
   
  return 0;
}
