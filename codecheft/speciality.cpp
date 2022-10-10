#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int x, y, z;
  cin>>x>>y>>z;
  if(x>y && x>z)
    cout<<"Setter"<<endl;
  else if(y>z)
    cout<<"Tester"<<endl;
  else
    cout<<"Editorialist"<<endl;
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

