#include <iostream>  
using namespace std;   //using standard namespace
namespace First {    
    void sayHello() {   
        cout<<"Hello First Namespace"<<endl;          
    }    
}
namespace Second  {    
       void sayHello() {   
           cout<<"Hello Second Namespace"<<endl;   
       }    
}   
int main()    //Main Function
{  
 First::sayHello();  
 Second::sayHello();  //Accessing Members using scope resolution operator
return 0;  
}