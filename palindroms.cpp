#include <iostream>
int main(){
    std::string stringV = "";
    std::getline(std::cin, stringV);
    int start = 0;
    int end = stringV.length() - 1;
     while(start <= end){
        while(stringV[start] == ' '){
            ++start;
        }
        while(stringV[end] == ' '){
            --end;
        }
        if(stringV[start] != stringV[end]){
            std::cout <<  "NO";
            return 0;
        }
        ++start;
        --end;
    }
    std::cout << "YES";
    return 0;
}