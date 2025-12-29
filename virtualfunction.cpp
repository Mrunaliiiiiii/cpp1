#include <iostream>  
using namespace std; //using standard namespace  
class baseClass {  
public: //Access Modifier  
    virtual void display() //declaring Virtual function  
    {   
        cout << "It is the print base class method\n";   
          
    }  
    void show()   
    {   
        cout << "It is the show base class method\n";   
          
    }  
};  
class derived : public baseClass {  
public:  
    void display()   
    {   
        cout << "It is the print derived class method\n";   
          
    }  
    void show()   
    {  
        cout << "It is the show derived class method\n";   
          
    }  
  
};  
int main() //Main Function  
{  
    baseClass* bptr;  
    derived d1;  
    bptr = &d1;  
    // The Virtual function at the runtime  
    bptr->display();  
    // Non-virtual function at the compile time  
    bptr->show();  
    return 0;  
}  