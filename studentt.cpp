#include <iostream>
using namespace std ;
class Student {
    public:
    int id ;
    string name ;

    void insert(int i,string n){
        id=i;
        name=n;
    }


    void show(){
        cout<<"ID :"<<id<<endl;
        cout<<"Name : "<<name<<endl;
    }

};
int main (){
    Student s1;
    s1.insert(101,"jhon");
    s1.show();

Student s2;
    s2.insert(102,"jane");
    s2.show();

}
#include <iostream>
using namespace std ;
class Student {
    public :
    int id ;
    string name ;
    void insert (int i , string n){
        id=i;
        name=n;
    }
    void show (){
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main (){
    Student s1;
    s1.insert(101,"keemo");
    s1.show();
    Student 
}
