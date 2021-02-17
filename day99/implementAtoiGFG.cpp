// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int size = str.size();
    int countD = 0;
    int i = 0;
    
    int flag = 1;
    if(str[i]=='-'){
        i=1;
        flag = -1;
    }
    
    for(auto c: str){
        if(c>='0'&&c<='9'){
            ++countD;
        }
    }
    
    if(countD!=size&&flag==1){
        return -1;
    }
    
    if(countD!=size-1&&flag==-1){
        return -1;
    }
    
    long long res = 0;
    
    while(i<size){
        if(str[i]>='0'&&str[i]<='9'){
            res = (res*10) + (str[i]-'0');
            if(res > INT_MAX){
                break;
            }
        }
        ++i;
    }
    
    res = res*flag;
    
    if(res>INT_MAX){
        return INT_MAX;
    }
    
    if(res<INT_MIN){
        return INT_MIN;
    }
    
    return (int)res;
}
