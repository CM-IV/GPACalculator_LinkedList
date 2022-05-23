/*
   Program Created By : Charlie with Occident Tech Software
   Check out my website!--->https://home.civdev.xyz
*/


#include <cstddef>
#include "IntegerNode.h"


IntegerNode::IntegerNode()
{
   gpa = 0;
   next = NULL;

}


IntegerNode::IntegerNode(int p)
{
   gpa = p;
   next = NULL;

}

IntegerNode::~IntegerNode()
{
}

