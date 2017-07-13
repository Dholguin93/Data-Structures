/* * * * * * * * * * * * * * * *
 * Author: Diego Holguin
 * Last Updated: June 10, 2017
 * Purpose: To test the IBinaryTree and ITreeNode classes. 
 * * * * * * * * * * * * * * * */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sys/resource.h>
#include "../src/IBinaryTree.h"
#include "../../TreeNode/src/ITreeNode.h"

#define NUMBEROFENTRIES 4 // TODO: Identify why if the number of entries increases IBinaryTree class behaves unexpectedly... 

int main (int argc, const char* argv[])
{
  const rlim_t stackSize = 64 * 1024 * 1024;
  struct rlimit rl;
  int result;

  result = getrlimit(RLIMIT_STACK, &rl);
  if(result == 0)
  {
    if(rl.rlim_cur < stackSize)
    {
      rl.rlim_cur = stackSize;
      result = setrlimit(RLIMIT_STACK, &rl);
      if(result != 0)
      {
	std::cout << "Set R Limit: result - " << result << std::endl;
      }
    }
  }
  
  srand((int)time(0));

  std::cout << "Created a IBinaryTree" << std::endl;
  IBinaryTree binaryTree;

  for(int i = 0; i < NUMBEROFENTRIES; i++)
  {
    ITreeNode* treeNode = new ITreeNode((rand() % 100) + 1);
    std::cout << "Inserting TreeNode of value " << treeNode->GetValue() << " into Binary Tree" << std::endl; 
    binaryTree.Insert(*treeNode);

  }


  
  //std::cout << "Binary Tree's Depth: " << binaryTree.GetTreeDepth() << std::endl;
  std::cout << "Binary Tree's Node Count: " << binaryTree.GetTreeCount() << std::endl;

  std::cout << "Performing Inorder Search"<< std::endl;
  binaryTree.InorderSearch();
  binaryTree.PreorderSearch();
  binaryTree.PostorderSearch(); 
}
