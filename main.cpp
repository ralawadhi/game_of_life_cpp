#include <iostream>
#include <vector>

#include "gof.h"

int main(){

    
    //keep length an odd number
    int length{351};
    // Initialise the first grid. It is empty(cells are all zero).
    std::vector<int> vec = makeGrid(length);
    // Here I am choosing the middle cell to be "alive".
    vec[(length+1)/2]=1;
   
    // This is a new empty grid which will be updates according to the rules applied to vec. So, new_vec = rule(vec).
    std::vector<int> new_vec(length,0);

    // I am simply printing out the first grid
    for(int i:vec){
        if(i==0){
            std::cout<<'.';
        }
        else{
            std::cout<<'X';
        }
        // std::cout<<i<<',';
    }

    // The first loop goes through each generation of the initial grid.

    for (int generation=0; generation<200; generation++){

        

    // This loop goes through the cells of the grid and applies the ruleset. Then finally updates new_vec with the next generation's values.
    for (int i=1; i<length-1;i++){
        int a{vec[i-1]};
        int b{vec[i]};
        int c{vec[i+1]};

        new_vec[i] = rule(a,b,c);
    }

    // This loop prints out the cells of the newly computed grid, new_vec, and then updates the values of vec = new_vec for the next generation.
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