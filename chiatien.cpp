#include<iostream>
using namespace std;
int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    long long tong = a + b + c + n;
    int e = tong / 3;
    if(tong % 3 ==0)
    {
        if(e >=a && e >=b && e >=c){
        cout << "YES";
    } else cout << "NO"
    }
    else cout << "NO";
}
