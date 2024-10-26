#include <iostream>
#include <vector>
#include "SFML/Graphics.hpp"

#include "gof.h"

int main(){

    
    //keep length an odd number
    int length{351};
    std::vector<int> vec = makeGrid(length);
    vec[(length+1)/2]=1;
   

    std::vector<int> new_vec(length,0);

    // for (int i=0; i<=length-1;i++){
    //     int neighNo{0};


    //     neighNo = neighbourCount(vec, length, i);
    //     // std::cout<<neighNo<<',';
    //     if (neighNo==1){
    //         new_vec[i]=1;
    //     }
    //     else if (neighNo==2)
    //     {
    //         new_vec[i]=0;
    //     }
    //     else{
    //         new_vec[i]=0;
    //     }
        
    //     std::cout<< new_vec[i]<<',';
        
    // }
    for(int i:vec){
        if(i==0){
            std::cout<<'.';
        }
        else{
            std::cout<<'X';
        }
        // std::cout<<i<<',';
    }
    for (int i=0;i<200;i++){

    
    for (int i=1; i<length-1;i++){
        int a{vec[i-1]};
        int b{vec[i]};
        int c{vec[i+1]};

        new_vec[i] = rule(a,b,c);
    }

    std::cout<<"\n\n";
    for(int i:new_vec){
        if(i==0){
            std::cout<<'_';
        }
        else{
            std::cout<<'O';
        }
        // std::cout<<i<<',';
    }
    vec = new_vec;
    }
    return 0;
}