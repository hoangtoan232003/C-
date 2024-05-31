#include<bits/stdc++.h>
using namespace std;

vector<char> convert_number(long long n){
    vector<char> v;
    while(n)
    {
        v.push_back(n % 2 + '0');
        n/=2;
    }
    reverse(v.begin(), v.end());
    int k = v.size();
    for(int i=1; i <= 64 - k;i++)
    {
        v.insert(v.begin(), '0');
    }
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}