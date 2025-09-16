

 //Ankush Jha
 //PRN:24070123016

#include <iostream>
using namespace std;

class grandparent {
    public:
    void grandfather() {
        cout << "Tarakant" << endl;
    }
};
class parent : public grandparent {
    public:
    void father() {
        cout << "Ashish" << endl;
    }
};
class child : public parent {
    public:
    void Child() {
        cout << "Ankushv" << endl;
    }
};
int main() {
    child myChild;
    myChild.grandfather();
    myChild.father();
    myChild.Child();
    return 0;
}
/*OUTPUT:
Tarakant
Jha
Ankush
*/
