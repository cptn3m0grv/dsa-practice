#include<iostream>
using namespace std;

template<typename Type, typename Type2>

class Gaurav{
    public:
        Type age;
        Type2 name;

        Gaurav(Type age, Type2 name){
            this->age = age;
            this->name = name;
        }

        void display(){
            cout << "Name of the person is " << name << " and the age is " << age;
        }
        
};

int main(){
    Gaurav<int, char> obj1(23, 'g');
    obj1.display();
    return 0;
}