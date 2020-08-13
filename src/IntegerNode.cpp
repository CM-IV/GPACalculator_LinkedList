/*
   Program Created By : Charlie Mathis IV with Mathis Computing Co
   Check out my website!--->https://dogtowncs.netlify.com/
   My email is on that website.


   Copyright Mathis Computing 2020 --> Whenever

   Please leave this notice here.
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

