#include "INode.h"
#include <iostream>

INode::INode(int newValue)
{
  value = newValue;
  next = NULL;
}

int INode::GetValue() { return value; } 
