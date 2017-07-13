/* * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 7, 2017
 * Purpose: To define the implementation of the INode class. 
 * * * * * * * * * * * * * * */

#include "INode.h"
#include <iostream>

INode::INode(int newValue)
{
  value = newValue;
  next = NULL;
}

int INode::GetValue() { return value; } 
