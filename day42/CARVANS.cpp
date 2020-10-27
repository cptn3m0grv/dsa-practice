#include <iostream>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        ll arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        int maxSpeed = arr[0];
        int count = 0;
        for(int i=0; i<N; i++){
            if(arr[i]<=maxSpeed){
                maxSpeed = arr[i];
                count += 1;
            } 
        }
        printf("%d\n", count);
    }
    return 0;
}