#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

//=======================
void solve() {
    ll n, m;
    cin>>n>>m;
    vector<pair<int,int>>vp;
    for (int i=0; i < m; i++)
    {
      ll x, y;
      cin>>x>>y;
      vp.pb({x,y});
    }
    sort(vp.begin(), vp.end(), greater<pair<int,int>>());
    
    ll lcm=1;
    ll rem=n;
    ll res=0;
    
    for (int i=0; i<m && rem>0; i++){
        ll a= vp[i].first,b=vp[i].second;
        lcm = lcm*b/__gcd(lcm,b);
        res += (rem-n/lcm)*a;
        rem= n/lcm;
    }
    cout <<res<<endl;
}

//=======================
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
  int T;
  cin >> T;
  while(T--) {
    solve();
  }
  return 0;
}