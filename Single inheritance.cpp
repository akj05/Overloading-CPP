//Single inheritance in C++
//Ankush Jha
//PRN:24070123016

#include <iostream>
using namespace std;

class vehicle {
    public:
string brand = "Ford";
void color() {
cout << "The vehicle is red in color" << endl;
}
};

class car : public vehicle {
    public:
string model = "Mustang";
};
int main() {
    car myCar;
    myCar.color(); 
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}
/* OUTPUT:
The vehicle is red in color
Ford Mustang
*/
