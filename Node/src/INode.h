#ifndef _INODE_H_INCLUDED_

#define _INODE_H_INCLUDED_

#include <iostream>

class INode
{
 private:
  int value;
 public:
  INode* next; 
  INode(int value);
  int GetValue();
};

#endif
