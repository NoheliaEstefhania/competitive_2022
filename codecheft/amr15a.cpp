#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n, a;
  cin>>n;
  int odd=0, even=0;
  while(n--){
    cin>>a;
    if((a%2)==0)
      even++;
    else
      odd++;
  }
  if(even>odd)
    cout<<"READY FOR BATTLE"<<endl;
  else
    cout<<"NOT READY"<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

