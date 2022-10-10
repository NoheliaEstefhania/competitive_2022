#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n, m, k;
  cin>>n>>m>>k;
  int cupos = m-k;
  if(cupos>=n)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

