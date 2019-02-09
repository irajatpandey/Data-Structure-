#include<bits/stdc++.h>
using namespace std;
void infixToPostfix(string s);
int main()
{
string exp= "a+(b*c-(d/e^f)*g)*h";
infixToPostfix(exp);

}
void infixToPostfix(string s)
{
 string ns
 stack<char> st;
 st.push('N');
 for(int i=0;i<s.size();i++)
 {
     if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
		ns+=s[i];
     if(s[i]=='(')
        s.push('(');
     else if(s[i]==')')
     {
        while(st.top() != 'N' && st.top() != '(')
			{
				char c = st.top();
				st.pop();
                ns += c;
			}
             if(st.top() == '(')
			{
				char c = st.top();
				st.pop();
			}

     }
     else{
			while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
			{
				char c = st.top();
				st.pop();
				ns += c;
			}
			st.push(s[i]);
		}

	}
	while(st.top() != 'N')
	{
		char c = st.top();
		st.pop();
		ns += c;
	}

	cout << ns << endl;



 }


int prec(char c)
{
    if(c == '^')
	return 3;
	else if(c == '*' || c == '/')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else
	return -1
}
