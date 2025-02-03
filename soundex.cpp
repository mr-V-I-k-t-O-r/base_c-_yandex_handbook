#include <iostream>

int main(){
    std::string word = "";
    std::string result = "";
    std::cin >> word;
    result += word[0];
    for(unsigned i = 1; i < word.length(); ++i){
        switch (word[i])
        {
        case 'b':
        case 'f':
        case 'p':
        case 'v':{
            result += '1';
            break;
        }
        case 'c':
        case 'g':
        case 'j':
        case 'k':
        case 'q':
        case 's':
        case 'x':
        case 'z':{
            result += '2';
            break;
        }
        case 'd':
        case 't':{
            result += '3';
            break;
        }
        case 'l':{
            result += '4';
            break;
        }
        case 'm':
        case 'n':{
            result += '5';
            break;
        }
        case 'r':{
            result += '6';
            break;
        }
        
        default:
            break;
        }
    }
    char prev = ' ';
    word = "";
    for(auto i : result){
        if(prev != i){
            word += i;
            prev = i;
        }
    }
    result = "";
    if(word.length() > 4){
        for(int i = 0; i < 4; ++i){
            result += word[i];
        }
    }
    else{
        result = word;
        for(int i = result.length(); i < 4; ++i){
            result += '0';
        }
    }
    std::cout << result << '\n';
    return 0;
}