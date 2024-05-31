#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
		if(n<2) return false;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n % i == 0) return false;
        }
    return true;    
}

int main(){
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n>=4)
        {
            for(int i=3; i<= n/2; i++)
            {
                if(snt(i) && snt(n-i))
                {
                    cout << i << " " << n-i << endl;
                }
            } 
        }
    } 
}
