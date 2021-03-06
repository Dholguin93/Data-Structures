/* * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 2, 2017
 * Purpose: To define, for the compiler, the class data for the IStack class. 
 * * * * * * * * * * * * * * * */

#ifndef _ISTACK_H_INCLUDED_

#define _ISTACK_H_INCLUDED_

#include "INode.h"

class IStack
{
 private:
  INode* head;
  int stackCount; 
 public:
  IStack();
  void Push(INode& node);
  INode* Pop();
  void PrintStack();
  void ClearStack(); 
  int GetSize();
  INode* GetHead();
}; 

#endif
