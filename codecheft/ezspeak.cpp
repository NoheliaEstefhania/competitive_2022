#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n;
  char s[n];
  for(int i=0; i<n; i++){
    cin>>s[i];
  }
  int consonants=0;
  for(int i=0; i<n; i++)
    if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
      consonants=0;
    }
    else{
      consonants++;
      if (consonants == 4){
        cout<<"NO"<<endl;
      }
    }
  cout<<"YES"<<endl;
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

