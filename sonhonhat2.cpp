#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int min = a[0], tmp=0, res=0;
    for(int i=1;i<n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
    	if(a[i] == min) res++;
	}
    cout << res << endl;
    return 0;
}
