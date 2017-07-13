/* * * * * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 9, 2017
 * Purpose: To define, for the compiler, the class data for the IBinaryTree class. 
 * * * * * * * * * * * * * * * * * * */

#ifndef _IBINARYTREE_H_INCLUDED

#define _IBINARYTREE_H_INCLUDED

#include "../../TreeNode/src/ITreeNode.h"
#include <stdlib.h>
#include <stdio.h>
#include <string> 
class IBinaryTree
{
 private:
  int treeCount, treeDepth;
  ITreeNode* top; 
 public:
  IBinaryTree();
  void Insert(ITreeNode& treeNode);
  ITreeNode* InsertRecursively(ITreeNode& newNode, ITreeNode& iterator);
  int GetTreeDepth();
  int GetTreeCount(); 
  void InorderSearch();
  void InorderSearchRecursively(std::string& string, ITreeNode& node); 
  void PreorderSearch();
  void PostorderSearch();  
};


#endif
