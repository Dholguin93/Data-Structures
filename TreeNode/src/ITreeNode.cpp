/* * * * * * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 8, 2017
 * Purpose: To define the implementation of the ITreeNode class. 
 * * * * * * * * * * * * * * * * * * * */

#include "ITreeNode.h"
#include <iostream>

ITreeNode::ITreeNode(int newValue)
{
  value = newValue;
  left = NULL;
  right = NULL; 
}

void ITreeNode::SetLeft(ITreeNode& treeNode) { left = &treeNode; }
void ITreeNode::SetRight(ITreeNode& treeNode) { right = &treeNode; }
ITreeNode* ITreeNode::GetLeft() { return left; }
ITreeNode* ITreeNode::GetRight() { return right; } 
int ITreeNode::GetValue() { return value; } 
