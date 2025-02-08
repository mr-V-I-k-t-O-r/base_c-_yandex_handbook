#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

int main(){
    std::ifstream file ("./input.txt");
    std::string line = "";
    std::vector<std::string> strings;
    if(file.is_open()){
        while(std::getline(file, line)){            
            strings.push_back(line);
        }
        std::sort(strings.rbegin(), strings.rend());
        for(auto i : strings){
            std::cout << i << '\n';
        }
    }
    return 0;
}