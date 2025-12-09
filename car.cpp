#include <iostream>
#include <string>
using namespace std;
class Car {
private:
string modelName;
string features;
string uses;
int topSpeed; 
public:
Car(string model, string feats, string useCases, int speed) {
modelName = model;
features = feats;
uses = useCases;
topSpeed = speed;
}
void displayCarInfo() {
cout << "---------------- Car Details ----------------" << endl;
cout << "Model Name: " << modelName << endl;
cout << "Top Speed: " << topSpeed << " km/h" << endl;
cout << "Features: " << features << endl;
cout << "Primary Uses: " << uses << endl;
cout << "-------------------------------------------" << endl;
}
};
int main() {
Car myCar("Ford Mustang Mach-E", 
"Electric, AWD, advanced safety tech", 
"Daily commuting, family transport", 
200); 
myCar.displayCarInfo();
return 0;
}
