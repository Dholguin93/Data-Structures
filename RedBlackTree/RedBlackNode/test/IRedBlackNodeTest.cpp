/* * * * * * * * * * * * * * * *
 * Author:Diego Holguin
 * Last Updated: 
 * Purpose: 
 * * * * * * * * * * * * * * * */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "../src/IRedBlackNode.h"

int main(int argc, const char* argv[])
{

  srand((int)time(0));
  
  std::cout << "Running IRedBlackNodeTest" << std::endl;

  IRedBlackNode* top = new IRedBlackNode((rand() % 100) + 1);
  std::cout << "Created Top Node of Value: " << top->GetValue() << std::endl; 
  IRedBlackNode* newNode = new IRedBlackNode((rand() % 100) + 1);
  std::cout << "Created newNode of Value: " << newNode->GetValue() << std::endl; 

  std::cout << "Setting Nodes" << std::endl; 
  top->SetLeft(*newNode);
  newNode->SetParent(*top); 

  std::cout << "Top Node has value: " << top->GetValue() << " and Color: " << top->GetColor() << std::endl;
  if(top->GetLeft() != NULL)
  {
    IRedBlackNode* tops_left = top->GetLeft();
    std::cout << "    Left Child Value: " << tops_left->GetValue() << " Left Child Color: " << tops_left->GetColor();  
  }
  else std::cout << "    Left Child Value: NULL Left Child Color: NULL";

  if(top->GetRight() != NULL)
  {
    IRedBlackNode* tops_right = top->GetRight();
    std::cout << "    Right Child: " << tops_right->GetValue() << " Right Child Color: " << tops_right->GetColor() << std::endl; 
  }
  else std::cout << "    Right Child: NULL Right Child Color: NULL" << std::endl ; 
}
