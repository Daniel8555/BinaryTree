#include "BinaryTree.hpp"
using namespace ariel;

#include "doctest.h"
#include <iostream>
TEST_CASE("check")
{
BinaryTree<int> tree;
CHECK_NOTHROW(tree.add_root(1));
CHECK_NOTHROW(tree.add_left(1, 2));
CHECK_NOTHROW(tree.add_left(2,3 ));
CHECK_NOTHROW(tree.add_left(3, 4));
CHECK_NOTHROW(tree.add_left(4,5));
CHECK_NOTHROW(tree.add_left(5, 6));
CHECK_NOTHROW(tree.add_left(6, 7));
CHECK_NOTHROW(tree.add_left(7, 8));
CHECK_NOTHROW(tree.add_left(8, 9));
CHECK_NOTHROW(tree.add_left(9, 10));
CHECK_NOTHROW(tree.add_left(10, 11));
CHECK_NOTHROW(tree.add_left(11, 12));
BinaryTree<int> tree2;
CHECK_NOTHROW(tree2.add_root(1));
CHECK_NOTHROW(tree2.add_left(1, 2));
CHECK_NOTHROW(tree2.add_left(2,3 ));
CHECK_NOTHROW(tree2.add_left(3, 4));
CHECK_NOTHROW(tree2.add_left(4,5));
CHECK_NOTHROW(tree2.add_left(5, 6));
CHECK_NOTHROW(tree2.add_left(6, 7));
CHECK_NOTHROW(tree2.add_left(7, 8));
CHECK_NOTHROW(tree2.add_left(8, 9));
CHECK_NOTHROW(tree2.add_left(9, 10));
CHECK_NOTHROW(tree2.add_left(10, 11));
CHECK_NOTHROW(tree2.add_left(11, 12));


}