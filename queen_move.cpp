#include <iostream>

int main(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    std::cin >> y1 >> x1 >> y2 >> x2;

    if(std::abs(x2 - x1)  == std::abs(y2 - y1)){
        std::cout << "YES";
    }
    else if(x2 == x1 || y2 == y1){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}