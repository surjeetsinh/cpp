#include<iostream>
using namespace std;

class Animal {
public:
    void MakeSound1() {
        cout << "The animal makes a sound.\n";
    }
};

class Cat : public Animal {
public:
    void MakeSound2() {
       cout << "The cat says: Meow!\n";
    }
};

class Dog : public Animal {
public:
    void MakeSound3() {
       cout << "The dog says: Woof!\n";
    }
};

int main() {
    Cat obj1;
    Dog obj2;
    
    obj1.MakeSound2();
    obj2.MakeSound3();
    
    return 0;
}
