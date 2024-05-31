#include <iostream>
using namespace std;

bool check(long long n){
    long long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}

int main(){
    long long x; cin >> x;
    if(check(x) == true){
        cout << "28tech\n";
    }
    else{
        cout << "29tech\n";
    }
    return 0;
}

