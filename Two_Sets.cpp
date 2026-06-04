#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve(){
ll n;
cin>>n;
ll sum;
sum = (n*(n+1))/2;
if(sum % 2){
    cout<<"NO"<<endl;
    return;
}else{
    cout<<"YES"<<endl;
}
ll tgt = sum/2;
unordered_set<int>st;
for(ll i=n;i>0;i--){
    if(i<=tgt){
        st.insert(i);
        tgt -=  i;
    }    
}
cout<<st.size()<<endl;
for(int x : st) cout<< x <<' ';
cout<<endl;

cout<<n - st.size()<<endl;
for(int i=1;i<=n;i++){
    if(st.find(i) == st.end()){
        cout<< i <<' ';
    }
}
cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while(t--){
         solve();
    //}
    return 0;
}