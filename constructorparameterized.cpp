#include <iostream>    
using namespace std;    
class Employee {  
   public:    
       int id;       
       string name;    
       float salary;    
       Employee(int i, string n, float s)      
        {      
            id = i;      
            name = n;      
            salary = s;    
        }      
       void show()      
        {      
            cout<<id<<"  "<<name<<"  "<<salary<<endl;      
        }      
};    
int main(void)  
{    
    Employee emp1 =Employee(201, "Sara", 650000);    
    Employee emp2=Employee(202, "Amar", 750000);     
    emp1.show();      
    emp2.show();      
    return 0;    
} 