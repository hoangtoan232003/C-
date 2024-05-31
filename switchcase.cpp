#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b; char X;
    cin >> a >> b >> X;
    switch(X)
    {
        case '+':
            cout << a << " + " << b << " = " << a+b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a-b << endl;
            break;
        case'*':
            cout << a << " * " << b << " = " << a*b << endl;
            break;
        case'/':
            cout << fixed << setprecision(2) << a << " / " << b << " = " << (double)a/b << endl;
            break;
        case'%':
            cout << a << " % " << b << " = " << a%b << endl;
            break;
        default:
            cout << "PHEP TINH KHONG HOP LE";
            break;
    }
}
