#include <iostream>

int main(){
    int month = 0;
    int year = 0;
    bool vis = false;
    std::cin >> month >> year;
    if(year % 400 == 0){
        vis = true;
    }
    else if(year % 100 == 0){
        vis = false;
    }
    else if(year % 4 == 0){
        vis = true;
    }

    switch(month){
        case 1:{
            std::cout << "31";
            break;
        }
        case 2:{
            if(vis){
                std::cout << "29";
            }
            else{
                std::cout << "28";
            }
            break;
        }
        case 3:{
            std::cout << "31";
            break;
        }
        case 4:{
            std::cout << "30";
            break;
        }
        case 5:{
            std::cout << "31";
            break;
        }
        case 6:{
            std::cout << "30";
            break;
        }
        case 7:{
            std::cout << "31";
            break;
        }
        case 8:{
            std::cout << "31";
            break;
        }
        case 9:{
            std::cout << "30";
            break;
        }
        case 10:{
            std::cout << "31";
            break;
        }
        case 11:{
            std::cout << "30";
            break;
        }
        case 12:{
            std::cout << "31";
            break;
        }
    }
    return 0;
}