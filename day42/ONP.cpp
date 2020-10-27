#include<iostream>
#include<stack>
using namespace std;
int print(stack<char>st)
{
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}

int main()
{
    int t,i,co=0;
    cin>>t;
    char s[10000],ch;
    stack<char>st;
    stack<char>sol;
    while(t--)
    {
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
                ++co;
            else if(s[i]=='-'||s[i]=='*'||s[i]=='+'||s[i]=='/'||s[i]=='^')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                --co;
                ch=st.top();
                sol.push(ch);
                st.pop();
            }
            else{
                sol.push(s[i]);
            }
        }
        stack<char>ne;
       while(!sol.empty())
       {
           ne.push(sol.top());
           sol.pop();
       }
       print(ne);
       cout<<"\n";
    }

}