#include<iostream>
#include<stack>
using namespace std;

Priority(char a){
	if(a=='+' || a=='-') return 1;
	if(a == '*' || a== '/') return 2;
	if(a=='^') return 3;
	return -1;
}

void Trungto_Hauto(string s){
	stack <char> st;
	string out = " ";
	for(int i=0;i< s.length();i++)
	{
		if(s[i]== '(') st.push(s[i]);
		else if(isalnum(s[i])) out += s[i];
		else if(s[i] == ')'){
			while(!st.empty() && st.top()!='('){
				char c = st.top();
				st.pop();
				out += c;
			} 
			st.pop();
		}else{
			while(!st.empty() && Priority(s[i] <= Priority(st.top())))
			char c = st.top();
			st.pop();
			out+=c;
		}
		st.push(s[i]);
	}
	while(!st.empty())
	{
		char c = st.top();
		if(c!='(') out +=c;
		st.pop();
	}
	cout << out;
}
int main()
{
	string s; cin >> s;
	Trungto_Hauto(s);
	return 0;
}
