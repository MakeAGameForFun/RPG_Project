#include "tree.h"
#include "apple.h"
#include <cstdlib>

// Tree constructor
Tree::Tree(int min_apples, int max_apples)
{
    num_apples = rand() % max_apples + min_apples;
}
 
// Tree member function
std::vector<Apple*> Tree::shake_tree(void)
{
    int apples_to_return = num_apples*.3;
    num_apples -= apples_to_return;
    
    std::vector<Apple*> apple_vector;
    
    
    
    for (int i =0; i<apples_to_return; i++)
    {
        Apple* newApple = new Apple();
        apple_vector.push_back(newApple);
    }
    
    return apple_vector;
}

int Tree::get_num_apples(void)
{
    return num_apples;
}
