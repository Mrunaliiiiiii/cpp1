#include <iostream>
using namespace std;
struct Student {
    string first_name;
    string last_name;
    int age;
    float grade;
};
int main() 
{
    Student student1;
    student1.first_name = "Nancy";
    student1.last_name = "Ali";
    student1.age = 40;
    student1.grade = 90.5;
    cout << "The First Name is: " << student1.first_name << endl;
    cout << "The Last Name is: " << student1.last_name << endl;
    cout << "Age is: " << student1.age << endl;
    cout << "The Grade is: " << student1.grade << endl;
    return 0;
}