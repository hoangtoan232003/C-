#include<bits/stdc++.h>
using namespace std;

bool d[10000001];

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin >> a[i];
        d[a[i]] = 1; 
    }
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        if(d[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
