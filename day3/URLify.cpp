#include<iostream>
using namespace std;
void replaceSpaces(char str[], int trueLength){
    cout<<"Function called";
    int spaceCount = 0;
    int i;
    for(i =0; i<trueLength; i++){
        if(str[i] == ' '){
            spaceCount++;
        }
    }
    int index = trueLength + (spaceCount*2);
    if(trueLength < index){
        str[trueLength] = '\0';
    }
    for(i = trueLength - 1; i >= 0; i--){
        if(str[i] == ' '){
            str[index-1] = '0';
            str[index-2] = '2';
            str[index-3] = '%';
            index -= 3;
        }else{
            str[index-1] = str[i];
            index--;
        }
    }

    for(i = 0; i<index; i++){
        cout<<str[i];
    }
}
int main(){
    char str[] = {'M','r',' ','J','o', 'h', 'n',' ','S','m','i','t','h',' ',' ',' ',' '};
    int trueLength  = 13;
    replaceSpaces(str , trueLength);
    return 0;
}
