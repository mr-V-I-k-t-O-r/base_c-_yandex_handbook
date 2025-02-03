#include <iostream>

int main(){
    int week_day = 0;
    int num_days = 0;
    std::cin >> week_day >> num_days;
    int cur_day = 1;
    for(int i = 0; i < week_day - 1; ++i){
        std::cout << "   ";
    }
    while(1){
        if(week_day == 8){
            std::cout << '\n';
            week_day = 1;
        }
        std::string day = std::to_string(cur_day);
        if(day.length() == 1){
            std::cout << ' ';
        }
        std::cout << cur_day << ' ';
        if(cur_day == num_days){
            break;
        }
        ++cur_day;
        ++week_day;
    }
}