#include <iostream>

int main() {
    int N;
    
    do {
        std::cout << "Entrez un nombre (0 pour quitter) : ";
        std::cin >> N;
        
        for (int i = 0; i < N; ++i) {
            std::cout << "Hello World" << std::endl;
        }
        
    } while (N != 0);

    return 0;
}
