#include <iostream>
using namespace std;

class baseClass final{
    public:
        virtual void perkenalan(){
            cout << "Hallo nama saya Function dari base class";
        }
};

class baseClass1{
    public:
        virtual void perkenalan(){
            cout << "Hallo nama saya Function dari base class";
        }
};

class deriverClass : public baseClass1{
    public:
        void perkenalan(){
            cout << "Hallo saya Function dari deriver class";
        }
};

int main(){
    deriverClass a;
    a.perkenalan();
    return 0;   
}