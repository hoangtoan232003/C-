#include<bits/stdc++.h>
using namespace std;

void check(int a[], int n, int x)
{
    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == x) cnt++;
        else
        {
            if(cnt)
            {
                cout << cnt << " ";
                cnt = 0;
            }
        }
    }
    if(cnt) cout << cnt << " ";
    cout << endl;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    check(a, n, 1);
    check(a, n, 0);
    return 0;
}
