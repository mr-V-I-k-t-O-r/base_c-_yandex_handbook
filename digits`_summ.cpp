#include <iostream>

int main(){
    std::string num = "";
    std::cin >> num;
    int total = 0;
    for(char number : num){
        total += number - '0';
    }
    std::cout << total;
    return 0;
}