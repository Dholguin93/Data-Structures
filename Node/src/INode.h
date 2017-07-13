/* * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 7, 2017
 * Purpose: To define, for the compiler, the class data of the INode class. 
 * * * * * * * * * * * * * */

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
