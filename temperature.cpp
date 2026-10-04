//
//  main.cpp
//  temperature
//
//  Created by Gong Sophie on 2026/10/1.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    
    double T;
    cin >> T;
    
    if (T== 68.8){
        
        cout <<"Just right"<< endl;
    }
        
    else if (T > 68.8){
        
        cout <<"Too hot"<< endl;
    }
    
    else if (T < 68.8){
        
        cout <<"Too cold"<< endl;
    }
}
