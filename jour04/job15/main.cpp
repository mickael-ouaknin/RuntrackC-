#include <iostream>
#pragma once

int main(){
    int taille_T = 5;
    int T[taille_T] = {1, 2, 3, 4, 5};
    int& reference_T = T[taille_T];

    for (int i = 0; i < taille_T; i++) {
        std::cout << "T[" << i << "] = " << T[i] << std::endl;
    }
}