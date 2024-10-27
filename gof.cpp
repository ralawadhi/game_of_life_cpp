#include "gof.h"
#include <vector>

std::vector<int> ruleset = {0, 1, 0, 1, 1, 0, 1, 0};

// initialises the initial grid
std::vector<int> makeGrid(int length){
    //vector of length 'length' and all elements are zero
    std::vector<int>  x(length, 0);
    
    return x;
}

// This function counts the number of "alive" neighbours around the cell at index = position. Currently not used in the program.
int neighbourCount(std::vector<int> grid, int length, int position){
    int neighCount{0};
    neighCount = grid[(position - 1)%length] + grid[(position + 1)%length];
    return neighCount;
}
// This function enforces the rules.
int rule(int a, int b, int c){
    if (a == 1 && b == 1 && c == 1)
    { return ruleset[0];}

    else if (a == 1 && b == 1 && c == 0) 
    {return ruleset[1];}

    else if (a == 1 && b == 0 && c == 1) 
    {return ruleset[2];}

    else if (a == 1 && b == 0 && c == 0) 
    {return ruleset[3];}
    
    else if (a == 0 && b == 1 && c == 1) 
    {return ruleset[4];}

    else if (a == 0 && b == 1 && c == 0) 
    {return ruleset[5];}

    else if (a == 0 && b == 0 && c == 1) 
    {return ruleset[6];}

    else if (a == 0 && b == 0 && c == 0) 
    {return ruleset[7];}

    return 0;
}