#include <iostream>
#include "IStack.h"

IStack::IStack()
{
  std::cout << "Constructor Called" << std::endl;
  stackCount = 0; 
  head = NULL;
}

void IStack::ClearStack()
{
  while(head != NULL) delete(Pop()); 
}

void IStack::Push(INode& node)
{
  if(head == NULL)
  {
    head = &node;
    stackCount++;
  }
  else if (head != NULL)
  {
    INode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = &node;
    stackCount++;
  }
}

INode* IStack::Pop()
{
  if(head == NULL)
  {
    std::cout << "Stack is empty! Nothing to Pop" << std::endl; 
  }
  else if (head != NULL)
  {
    if(stackCount == 1)
    {
      INode* popedNode = head; 
      head = NULL;
      stackCount--; 
      return popedNode; 
    }
    else if (stackCount != 1)
    {
      INode* curNode = head;
      INode* nextNode = curNode->next;
      while(nextNode->next != NULL)
      {
	curNode = nextNode;
	nextNode = nextNode->next; 
      }
      curNode->next = NULL;
      stackCount--;
      return nextNode;
    }
  }
}

void IStack::PrintStack()
{
  int nodeIndex = 0; 
  INode* temp = head;
  while(temp != NULL)
  {
    std::cout << "Index: " << nodeIndex << " - Value: " << temp->GetValue() << std::endl; 
    temp = temp->next;
    nodeIndex++;
  }
}

int IStack::GetSize() { return stackCount; }
INode* IStack::GetHead() { return head; }
