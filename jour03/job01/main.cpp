#include <iostream>
#include <string>
using namespace std;

int main() {
    string carac = "vive la plateforme !";    
    cout << carac << endl;
    
    for (char &c : carac) {
        c = toupper(c);
    }
    cout << carac << endl;

    return 0;
}
