#include <iostream>

int main(){
    int place = 0;
    std::cin >> place;
    double result = 1;
    double change = 1;
    for(int i = 1; i < place; ++i){
        result -= change / (i + 1);
        change *= (-1);
    }
    std::cout << result;
    return 0;
}