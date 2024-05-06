#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    std::cout << "Valeurs initiales des variables :" << std::endl;
    std::cout << "a : " << *ptrA << std::endl;
    std::cout << "b : " << *ptrB << std::endl;
    std::cout << "c : " << *ptrC << std::endl;

    *ptrA = 15;
    *ptrB = 20;
    *ptrC = 25;

    std::cout << "\nNouvelles valeurs des variables :" << std::endl;
    std::cout << "a : " << *ptrA << std::endl;
    std::cout << "b : " << *ptrB << std::endl;
    std::cout << "c : " << *ptrC << std::endl;

    return 0;
}
