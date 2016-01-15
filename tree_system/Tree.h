#ifndef TREE_H
#define TREE_H
#include <vector>

class Apple;
 
class Tree
{
    private:
        int num_apples;
    
    public:
        Tree(int min_apples, int max_apples);

        std::vector<Apple*> shake_tree(void);
};
 
#endif