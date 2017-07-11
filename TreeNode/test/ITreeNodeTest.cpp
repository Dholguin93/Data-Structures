#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../src/ITreeNode.h"

int main(int argc, const char* argv[])
{
  std::cout << "Running ITreeNode Test" << std::endl;

  ITreeNode* nodeOne = new ITreeNode(5);
  ITreeNode* nodeTwo = new ITreeNode(6);
  ITreeNode* nodeThree = new ITreeNode(4); 

  std::cout << "Head Node: " << nodeOne->GetValue() << std::endl;

  std::cout << "Setting Left and Right Nodes" << std::endl;
  nodeOne->SetLeft(*nodeThree);
  nodeOne->SetRight(*nodeTwo);

  std::cout << "Left Node: " << nodeOne->GetLeft()->GetValue() << std::endl;
  std::cout << "Right Node: " << nodeOne->GetRight()->GetValue() << std::endl;

  delete(nodeOne);
  delete(nodeTwo);
  delete(nodeThree); 
}
