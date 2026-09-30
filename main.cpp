//
//  main.cpp
//  time expression
//
//  Created by Gong Sophie on 2026/9/29.
//

#include <iostream>

using namespace std;

int main() {
    int sec = 1999473 ;
    int min = sec / 60 ;
    sec %= 60;
    int hour = min / 60 ;
    min %= 60;
    int day = hour / 24 ;
    hour %= 24;
    cout << day <<" days, "<< hour <<" hours, "<< min <<" minutes, "<< sec<< " seconds"<< endl;
    
    return 0;
}
