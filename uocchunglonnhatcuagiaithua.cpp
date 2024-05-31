#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    long long ans=1, sum = min(a, b);
   	for(int i=1;i<=sum;i++)
   	{
   		ans *=i;
	}
    cout << ans;
    return 0;
}
