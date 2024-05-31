#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    long long sum =0;
    cin >> n;
    while(n--)
    {
        cin >> t;
            if(t%2==0)
            {
                sum+=t;
            }
    }
    cout << sum;
}
