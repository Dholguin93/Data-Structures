/* * * * * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: 
 * Purpose: 
 * * * * * * * * * * * * * * * * * * */

#ifndef IREDBLACKNODE_H_INCLUDED

#define IREDBLACKNODE_H_INCLUDED
#define RED "RED"
#define BLACK "BLACK"

#include <iostream>

class IRedBlackNode
{
 private:
   std::string nodeColor;
   IRedBlackNode *leftChild, *rightChild, *parent;
   int value; 
 public:
   IRedBlackNode(int _value);
   int GetValue(); 
   IRedBlackNode* GetLeft();
   void SetLeft(IRedBlackNode& newLeftNode);
   IRedBlackNode* GetRight();
   void SetRight(IRedBlackNode& newRightNode);
   IRedBlackNode* GetParent();
   void SetParent(IRedBlackNode& newParentNode);
   std::string GetColor();
   void SetColor(std::string string);
};

#endif 
