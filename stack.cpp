#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> st;
	st.push(2);
	st.push(5);
	st.push(10);
	cout << st.size() << endl;
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	cout << st.size();
	return 0;
}
