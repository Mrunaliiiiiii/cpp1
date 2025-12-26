#include<iostream>
using namespace std;

class Area{
    public:
    void shape(int a){
        cout<<"Area Of Square:"<<a*a<<endl;
    } 
    void shape(int a,int b){
        cout<<"Area Of Rectangle:"<<a*b<<endl;
    } 
    void shape(int a,int b,int c){
        cout<<"Volume Of Cuboid:"<<a*b*c<<endl;
    } 
    void shape(float a){
        cout<<"Area Of Circle:"<<3.14*a*a<<endl;
    } 
};
int main(){
    Area a;

    a.shape(10,20);
    a.shape(10,20,4);
    a.shape(10);
    a.shape(10.5f);
}





