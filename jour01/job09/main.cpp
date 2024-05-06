#include <iostream>

int highest_number(int nb1, int nb2, int nb3) {
    int max = nb1;

    if (nb2 > max)
    {
        max = nb2;
    }
    
    if (nb3 > max)
    {
        max = nb3;
    }

    return max;
}
    

int main() {
    int num1, num2, num3;

    std::cout << "Entrez le premier nombre :";
    std::cin >> num1;
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> num2;
    std::cout << "Entrez le troisieme nombre : ";
    std::cin >> num3;

    int max_number = highest_number(num1, num2, num3);

    std::cout << "Le plus grand nombre est : " << max_number << std::endl;    
}