#include "../include/IntegerNode.h"

IntegerNode::IntegerNode()
{
   gpa = 0;
   next = nullptr;

}


IntegerNode::IntegerNode(int p)
{
   gpa = p;
   next = nullptr;

}

IntegerNode::~IntegerNode()
{
}

int IntegerNode::get_gpa() const
{
   return gpa;
}

IntegerNode* IntegerNode::get_next() const
{
   return next;
}

void IntegerNode::set_gpa(int new_gpa)
{
   gpa = new_gpa;
}

void IntegerNode::set_next(IntegerNode* new_next)
{
   next = new_next;
}
