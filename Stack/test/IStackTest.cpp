/* 
* Author: Diego Holguin
* Date: June 29, 2017 
* Purpose: To test out the IStack and INode classes 
* 'I' in IStack and INode represents integer for both classes .... 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "INode.h"
#include "IStack.h"

int main (int argc, const char *argv[])
{
  srand((int) time(0)); 
  
  IStack stack;
  std::cout << "Created a IStack" << std::endl;

  
  for(int j = 0; j < 10; j++)
  {
    INode* newNode = new INode((rand() % 100) + 1);
    std::cout << "Adding " << newNode->GetValue() << " to the stack" << std::endl;
    stack.Push(*newNode);
  }

  std::cout << "Printing Stack Before Poping" << std::endl << std::endl; 
  stack.PrintStack();
  
  INode* popedNode = stack.Pop();
  delete(popedNode);

  std::cout << "Printing Stack After Poping Node" << std::endl << std::endl; 
  stack.PrintStack();

  std::cout << "Clearing the stack" << std::endl;
  stack.ClearStack(); 

  return 0;
}
