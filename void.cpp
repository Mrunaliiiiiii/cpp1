#include <iostream>
using namespace std ;
class Gamers {
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
 Gamers g1;
    g1.insert(24,"jhonathan");
    g1.show();
 Gamers g2;
    g2.insert(28,"regeltos");
    g2.show();

}