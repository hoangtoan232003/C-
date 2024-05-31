#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int maxx=0;
    int res = 0;
    for(int i=0;i<n;i++)
    {
        cnt[a[i]]++;
    }
    for(int i=0;i < n;i++)
    {
        if(cnt[a[i]] > maxx)
        {
            maxx = cnt[a[i]];
            res = a[i];
        }
    }
    cout << res << " " << maxx;
}
