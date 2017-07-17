/* * * * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated:
 * Purpose: 
 * * * * * * * * * * * * * * * * * */
#include "IRedBlackNode.h"

IRedBlackNode::IRedBlackNode(int _value)
{
  value = _value;
  nodeColor = RED; 
  leftChild = NULL;
  rightChild = NULL;
  parent = NULL; 
}

int IRedBlackNode::GetValue() { return value; }
IRedBlackNode* IRedBlackNode::GetParent() { return parent; }
void IRedBlackNode::SetParent(IRedBlackNode& newParentNode) { parent = &newParentNode; }
IRedBlackNode* IRedBlackNode::GetLeft() { return leftChild; }
void IRedBlackNode::SetLeft(IRedBlackNode& newLeftNode) { leftChild = &newLeftNode; }
IRedBlackNode* IRedBlackNode::GetRight() { return rightChild; }
void IRedBlackNode::SetRight(IRedBlackNode& newRightNode) { rightChild = &newRightNode; }
std::string IRedBlackNode::GetColor() { return nodeColor; }
void IRedBlackNode::SetColor(std::string string) { nodeColor = string; }
