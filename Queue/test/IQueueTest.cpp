/* Author: Diego Holguin
 * Date: June, 29, 2017 
 * Purpose: To test out the IQueue class in conjunction with the INode class. 
 * The 'I' represents integer for both classes ... 
 */

#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "../../Node/src/INode.h"
#include "../src/IQueue.h"

#define NUMOFENTRIES 13

int main(int argc, const char* argv[])
{
  srand((int)time(0));

  std::cout << "Created an IQueue" << std::endl; 
  IQueue queue;

  for(int i = 0; i < NUMOFENTRIES; i++)
  {
    INode* newNode = new INode((rand() % 100) + 1);
    std::cout << "Adding node of value " << newNode->GetValue() << " to the queue" << std::endl; 
    queue.Enqueue(*newNode); 
  }

  std::cout << "Before Delection of Node" << std::endl; 
  queue.PrintQueue();

  INode* deletedNode = queue.Dequeue();
  std::cout << "Deleted node with value: " << deletedNode->GetValue() << std::endl << std::endl;
  delete(deletedNode);
  
  queue.PrintQueue();

  std::cout << "Clearing Queue" << std::endl;
  queue.ClearQueue(); 
  
  
}
