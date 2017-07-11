/* Author: Diego Holguin
 * Date: June 29, 2017
 * Purpose: Implementation of the IQueue class 
 */

#include "IQueue.h"

IQueue::IQueue()
{
  front = NULL;
  back = NULL; 
  queueCount = 0;
}

void IQueue::Enqueue(INode& node)
{
  if(front == NULL)
  {
    front = &node;
    back = front;
    queueCount++;
  }
  else if (front != NULL)
  {
    if(front == back)
    {
      node.next = front;
      back = &node;
      queueCount++;
    }
    else if (front != back)
    {
      node.next = back;
      back = &node;
      queueCount++;
    }
  }
}

INode* IQueue::Dequeue()
{
  if(front == NULL)
  {
    std::cout << "Queue is empty! Cannot Remove Element" << std::endl; 
  }
  else if (front != NULL)
  {
    if(queueCount == 1)
    {
      INode* temp = front;
      front = NULL;
      back = NULL;
      queueCount--;
      return temp; 
    }
    else if (queueCount != 1)
    {
      INode* behindNode = back;
      INode* aheadNode = back->next; 
      while(aheadNode->next != NULL)
      {
	behindNode = aheadNode;
	aheadNode = aheadNode->next; 
      }

      behindNode->next = NULL;
      front = behindNode;
      queueCount--;
      return aheadNode; 
    }
  }
}

void IQueue::PrintQueue()
{
  if(front == NULL)
  {
    std::cout << "(" << queueCount << ") - Empty Queue" << std::endl;
  }
  else if (front != NULL)
  {
    INode* temp = back;

    std::cout << "(" << queueCount << ") - Queue Contents: " << std::endl; 
    while(temp != NULL)
    {
      if(temp == back) std::cout << "  BACK ";
      else if(temp == front) std::cout << " FRONT ";
      else std::cout << "       ";
    
      std::cout << " - " << temp->GetValue() << std::endl;
      temp = temp->next;
    }

    std::cout << std::endl; 
  }
}

void IQueue::ClearQueue()
{
  while(front != NULL) {delete(Dequeue()); PrintQueue(); }
}
