#include<bits/stdc++.h>
using namespace std;

bool check(long long n) {
       if(n<=1) return false;
       for(int i=2;i<sqrt(n);i++)
       {
           if(n%i == 0) return false;
    }
    return true;
}

int main(){
    long long n; 
    cin >> n;
    for(long long i=2;i < log2(n);i++)
    {
        long long res = pow(2, i) - 1;
        if(check(i) && check(res) && pow(2, i - 1) * res == n )
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
