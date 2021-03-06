/* * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 8, 2017
 * Purpose: To define, for the compiler, the class data for the ITreeNode class. 
 * * * * * * * * * * * * * */

#ifndef _ITREENODE_H_INCLUDED_

#define _ITREENODE_H_INCLUDED_

#include <iostream>

class ITreeNode
{
 private:
  int value;
  ITreeNode *left, *right; 
 public:
  ITreeNode(int value);
  void SetRight(ITreeNode& treeNode);
  void SetLeft(ITreeNode& treeNode); 
  ITreeNode* GetLeft();
  ITreeNode* GetRight(); 
  int GetValue();
};

#endif
