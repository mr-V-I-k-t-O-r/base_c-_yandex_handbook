#include <iostream>
#include <vector>

int main(){
    int number = 0;
    std::vector<int> seats = {};
    int place = 0;
    
    std::cin >> number;
    seats.resize(number);
    for(int i = 1; i <= number; ++i){
        std::cin >> place;
        seats[place - 1] = i;
    }
    for(int i: seats){
        std::cout << i << ' ';
    }
    return 0;
}