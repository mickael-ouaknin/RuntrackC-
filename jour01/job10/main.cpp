#include <iostream>

double price_ttc(int price, int kg_carrot, int tva) {
    double price_ht = price * kg_carrot;
    double tva_amount = price_ht * (tva / 100.0);
    double result_price = price_ht + tva_amount;
    return result_price;
}


int main(){
    int price;
    int kg_carrot;
    int tva;

    std::cout << "Veuillez taper le prix HT d'un kilo de carotte : ";
    std::cin >> price;

    std::cout << "Combien de kilo ? : ";
    std::cin >> kg_carrot;

    std::cout << "Choisissez un taux de TVA : ";
    std::cin >> tva;

    double total_price = price_ttc(price, kg_carrot, tva);

    std::cout << " Le prix TTC pour " << kg_carrot << " kilos de carrottes est de " << total_price << " euros." << std::endl;



}