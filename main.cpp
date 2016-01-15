// my first program in C++

// THIS IS MY CHANGE!!
#include <iostream>
#include "tree_system\Tree.h"
#include <vector>


int main()
{
  std::cout << "Strudel Time! Kitty";
  
  Tree tree1(100, 200);
  std::vector<Apple*> apple_bag = tree1.shake_tree();
  
  int count_apples =apple_bag.size();
  std::cout << "\n" << "Number of Apples Dropped: " << count_apples;
}
