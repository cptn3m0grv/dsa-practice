#include <bits/stdc++.h>
using namespace std;

int main(){

    // set maintains the ascending order internally
    // each operation is O(logn) time
    // sets are powerful than vectors

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(-10);
    s.insert(-1);

    for(int x: s){
        cout << x << " ";
    }
    cout << endl;

    // -10 -1 1 2 3

    auto iter = s.find(-1);
    // if the -1 is present, then iter will be pointing to -1 position or else it will point to s.end()

    if(iter == s.end()){
        cout << "Not present";
    }else{
        cout << "present\n";
        cout << *iter << endl;
    }

    auto iter2 = s.lower_bound(-1); // >=
    auto iter3 = s.upper_bound(-1); // >

    cout << *iter2 << " " << *iter3 << endl;

    auto iter4 = s.upper_bound(3);
    if(iter4 == s.end()){
        cout << "Upper bound of 3 not found" << endl;
    }

    // erasing a number is set taken o(logn) time only
    s.erase(-1);
    for(int x: s){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}