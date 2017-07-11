/* Author: Diego Holguin
 * Date: June 29, 2017
 * Purpose: Header file for the IQueue class 
 */

#ifndef _IQUEUE_H_INCLUDED_

#define _IQUEUE_H_INCLUDED_

#include "../../Node/src/INode.h"

class IQueue
{
 private:
  INode *back, *front;
  int queueCount; 
 public:
  IQueue();
  void Enqueue(INode& node);
  INode* Dequeue();
  void PrintQueue();
  void ClearQueue(); 
}; 

#endif
