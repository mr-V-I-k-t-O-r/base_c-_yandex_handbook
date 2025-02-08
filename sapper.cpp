#include <iostream>
#include <vector>
#include <string>

int main(){
    int height = 0;
    int width = 0;
    int minCount = 0;
    std::cin >> height >> width >> minCount;
    std::string row = "";
    for(int i = 0; i < width; ++i){
        row += " ";
    }
    std::vector<std::string> field;
    field.reserve(height);
    for(int i = 0 ; i < height; ++i){
        field.push_back(row);
    }


    int minHeight = 0;
    int minWidth = 0;
    for(int i = 0; i < minCount; ++i){
        std::cin >> minHeight >> minWidth;
        field[minHeight - 1][minWidth - 1] = '*';

    }
    int num = 0;
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            num = 0;
            if(field[i][j] == '*'){
                continue;
            }
            if(i > 0){
                if(j > 0){
                    if(field[i - 1][j - 1] == '*'){
                        ++num;
                    }
                }
                if(field[i - 1][j] == '*'){
                    ++num;
                }
                if(j + 1 < width){
                    if(field[i - 1][j + 1] == '*'){
                        ++num;
                    }
                }
            }
            if(j > 0){
                if(field[i][j - 1] == '*'){
                    ++num;
                }
            }
            if(j + 1 < width){
                if(field[i][j + 1] == '*'){
                    ++num;
                }
            }
            if(i + 1 < height){
                if(j > 0){
                    if(field[i + 1][j - 1] == '*'){
                        ++num;
                    }
                }
                if(field[i + 1][j] == '*'){
                    ++num;
                }
                if(j + 1 < width){
                    if(field[i + 1][j + 1] == '*'){
                        ++num;
                    }
                }
            }
            field[i][j] = std::to_string(num)[0];
        }
    }
    for(auto i : field){
        for(char j : i){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}