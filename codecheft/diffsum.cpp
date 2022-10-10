#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int x, y;
  cin>>x>>y;
  if(x>y)
    cout<<x-y<<endl;
  else
    cout<<x+y<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t=1;
  while(t--){
    solve();
  }
  return 0;
}

