#include<iostream>
#include<string>
using namespace std;
bool isUnique(string str);
int main(){

    string str;
    bool isIt;
    while(true){
        getline(cin, str);
        isIt = isUnique(str);
        cout<< isIt;
    }
}
bool isUnique(string str){
    if(str.length() > 128) return false;
    bool arr[128] = {false};
    for(int i =0; i < str.length() - 1; i++){
        // cout<< str[i];
        int value = str[i];
        // cout<<arr[value];
        if(arr[value]) return false;
        arr[value] = true;  
    }
    return true;
}