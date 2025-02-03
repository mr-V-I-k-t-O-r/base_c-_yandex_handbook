#include <iostream>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    if((a > b + c) || (b > a + c) || (c > a + b)){
        std::cout << "UNDEFINED";
    }
    else if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (a * a + b * b == c * c)){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}