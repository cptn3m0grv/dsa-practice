#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[2121321] = 1;

    map<char, int> cnt;
    string x = "gaurav goyal";

    for(char c: x){
        cnt[c]++;
    }

    // all these operations are done in o(logn) time

    cout << cnt['a'] << " " << cnt['g'] << " " << cnt['z'] << endl;


    return 0;
}