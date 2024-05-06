#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Avant l'echange :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    int* ptrA = &a;
    int* ptrB = &b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "Apres l'echange :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    return 0;
}
