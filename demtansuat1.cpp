#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int> >v;
    for(int i=0; i<n;i++)
    {
        int x; cin >> x;
        bool check = false;
        for(int j=0;j < v.size();j++)
        {
            if(v[j].first == x)
            {
                check = true;
                v[j].second++;
            }
        }
        if(check == false) v.push_back({x, 1});
    }
    for(pair<int,int> x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
}
