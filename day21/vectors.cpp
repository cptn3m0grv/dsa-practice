#include<bits/stdc++.h>
using namespace std;

// comparator functions return true or false

bool comp(int x, int y){
    return x > y;
}

int main(){
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl; //same as array
    sort(A.begin(), A.end()); // O(nlogn)

    bool present = binary_search(A.begin(), A.end(), 3); //true
    cout << present;
    cout << endl;
    present = binary_search(A.begin(), A.end(), 4);
    cout << present << endl;

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100);
    cout << present << endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    vector<int>::iterator iter = lower_bound(A.begin(), A.end(), 100); // gives >=

    // iterators are pointers to value 100 in this case

    vector<int>::iterator iter2 = upper_bound(A.begin(), A.end(), 100); // >
    
    //bounds taken o(logn) time to do so

    cout << *iter << "  " << *iter2 <<endl;
    cout << iter2 - iter << endl;

    // sorting the vector in descenting order
    sort(A.begin(), A.end(), comp);
    vector<int>::iterator iter3;
    for(iter3 = A.begin(); iter3 != A.end(); iter3++){
        cout << *iter3 << " ";
    }
    cout << endl;

    auto iter4 = lower_bound(A.begin(), A.end(), 100);

    for(int &x: A){
        x++; // change the value as well
    }
    for(int x: A){
        cout << x << " ";
    }

    cout << endl;


}