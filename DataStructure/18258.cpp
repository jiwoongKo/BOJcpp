#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef long long ll;


int main(){
    fastio;

    ll n; cin >> n;
    queue<ll> q;
    for(int i=0; i<n; i++){
        string s; cin >> s;

        if(s == "push"){
            ll x;
            cin >> x;
            q.push(x);
        }
        
        if(s == "pop"){
            if(q.empty()){
                cout << "-1" << "\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        }

        if(s == "size"){
            cout << q.size() << "\n";
        }

        if(s == "empty"){
            if(q.empty()){
                cout << "1" << "\n";
            } else {
                cout << "0" << "\n";
            }
        }
        if(s == "front"){
            if(q.empty()){
                cout << "-1" << "\n";
            } else {
                cout << q.front() << "\n";
            }
        }
        if(s == "back"){
            if(q.empty()){
                cout << "-1" << "\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}
