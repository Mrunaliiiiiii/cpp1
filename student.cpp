

#include <iostream>
using namespace std ;
class Student {
    public:
    int id ;
    string name ;

};
int main (){
    Student s1;
    s1.id = 101;
    s1.name = "Tanu";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;

Student s2;
    s2.id=102;
    s2.name = "Krish";
    cout<<s2.id<<endl;
    cout<<s2.name<<endl;

}