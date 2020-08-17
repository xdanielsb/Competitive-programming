#include <bits/stdc++.h>
#define endl '\n'
#define d(x) cout <<#x << " = " << x << ", ";
#define d1( x ) d(x); cout <<endl;
#define d2( x, y ) d(x); d(y); cout <<endl;
#define d3( x, y, z ) d(x); d(y); d(z); cout <<endl;
#define F first
#define S second
#define PB push_back
#define size( x )   int( ( x ).size( ) )
#define endl '\n'
#define all(x) x.begin(),x.end()

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int maxn = 100+10;
char ma[maxn][maxn];
int vis[maxn][maxn];


int main(){
  ios::sync_with_stdio( false );
  cin.tie( nullptr );
#ifdef LOCAL
  freopen("in", "r" , stdin);
#endif
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int ans =0;
    for(int i = 1; i <= n; i++){
      for( int j = 1; j <= m; j++){
        cin >> ma[i][j];
        if( i==n && ma[i][j] =='D') ans++;
        if( j==m && ma[i][j] =='R') ans++;
      }
    }
    cout << ans <<endl;

  }
  return 0;
}
