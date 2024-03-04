#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	 cin >> a;
    for (int i = 0; i < 5; ++i)
        cin.ignore();
    cin >> b;
    
    int remainder = a % b;
    cout << remainder << endl;
    return 0;
}
