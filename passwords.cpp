#include <iostream>
#include <cctype>

int main(){
    std::string password = "";
    int length = 0;
    bool bigLetter = false;
    bool smalLetter = false;
    bool numbers = false;
    bool otherSymbols = false;

    int summ = 0;

    std::cin >> password;

    for(char letter: password){
        ++length;
        if(letter < 33 || letter > 126){
            length = 0;
            break;
        }
        if(islower(letter)){
            smalLetter = true;
        }
        else if(isupper(letter)){
            bigLetter = true;
        }
        else if(isdigit(letter)){
            numbers = true;
        }
        else{
            otherSymbols = true;
        }
    }
    summ = bigLetter + smalLetter + numbers + otherSymbols;
    if(length < 8 || length > 14){
        std::cout << "NO";
    }
    else if(summ < 3){
        std::cout << "NO";
    }
    else{
        std::cout << "YES";
    }
    return 0;
}