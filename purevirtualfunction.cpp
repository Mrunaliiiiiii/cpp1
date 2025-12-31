#include <iostream>    
using namespace std;  //using standard namespace  
class Base  //Abstract base class  
{    
    public:  //Access modifier  
    virtual void show() = 0;   //Pure Virtual function  
};    
class Derived : public Base    
{    
    public:    
    void show()    
    {    
        std::cout << "Derived class is derived from the base class." << std::endl;    
    }    
};    
int main()  //Main Function  
{    
    Base *bptr;  //base class pointer  
    //Base b;    
    Derived d;    
    bptr = &d;    
    bptr->show();    
    return 0;    
}

