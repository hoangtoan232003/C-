#include <iostream>
using namespace std;

const int MAX_n = 1001;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    bool check[MAX_n] = {false};
    for(int i=0;i<n;i++){
    	if(!check[a[i]])
    	{
    		cout << a[i] << " ";
    		check[a[i]] = true;
		}
	}
    return 0;
}

