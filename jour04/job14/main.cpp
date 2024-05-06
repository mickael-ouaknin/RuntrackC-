#include <iostream>
#pragma once

using namespace std;
int main(){
    int x = 12;

    cout << "La variable x est egal a = " << x << endl;

    int& reference_x = x;
    reference_x = 42;
    
    cout << "La reference de x est egal a = " << reference_x << endl;
}