#include "IBinaryTree.h"

// #define DEBUG 

IBinaryTree::IBinaryTree()
{
  treeCount = 0;
  treeDepth = 0;
  top = NULL;
}

void IBinaryTree::Insert(ITreeNode& treeNode)
{
  if(top == NULL)
  {
    top = &treeNode;
    treeCount++;
  }
  else if (top != NULL){ ITreeNode* iterator = top;  InsertRecursively(treeNode, *iterator); }
}

ITreeNode* IBinaryTree::InsertRecursively(ITreeNode& newNode, ITreeNode& iterator)
{
  std::cout << "Runtime Head: " << iterator.GetValue() << std::endl;
  if(iterator.GetLeft() == NULL) std::cout << "Runtime Left: NULL" << std::endl;
  else std::cout << "Runtime Left: " << iterator.GetLeft()->GetValue() << std::endl;
  if(iterator.GetRight() == NULL) std::cout << "Runtime Right: NULL" << std::endl;
  else std::cout << "Runtime Right: " << iterator.GetRight()->GetValue() << std::endl;
  
  if(newNode.GetValue() < iterator.GetValue())
  {
    std::cout << "Left Case" << std::endl;
    if(iterator.GetLeft() == NULL)
    {
      iterator.SetLeft(newNode);
      std::cout << "Setting node of value " << newNode.GetValue() << " to the left of node " << iterator.GetValue() << std::endl;
      std::cout << "+1 to Node Count" << std::endl;
      treeCount++; 
    }
    else if (iterator.GetLeft() != NULL)
    {
      std::cout << "Going to search node - " << (*(iterator.GetLeft())).GetValue() << std::endl;
      InsertRecursively(newNode, *(iterator.GetLeft()));
    }
  }
  else if (newNode.GetValue() >= iterator.GetValue())
  {
    std::cout << "Right Case" << std::endl;
    if(iterator.GetRight() == NULL)
    {
      iterator.SetRight(newNode);
      std::cout << "Setting node of value " << newNode.GetValue() << " to the right of node " << iterator.GetValue() << std::endl;
      std::cout << "+1 to NodeCount" << std::endl;
      treeCount++; 
    }
    else if (iterator.GetLeft() != NULL)
    {
      std::cout << "Going to search node - " << (*(iterator.GetRight())).GetValue() << std::endl; 
      InsertRecursively(newNode, *(iterator.GetRight()));
    }
  }
}

int IBinaryTree::InorderSearch()
{
  if(top == NULL) return 0;
  else if (top != NULL)
  {
    std::ostringstream inorderContents;
    ITreeNode* iterator = top; 
    InorderSearchRecursively(inorderContents, *iterator);
    std::cout << "Inorder Search: " << inorderContents.str() << std::endl;
  }
}

void IBinaryTree::InorderSearchRecursively(std::ostringstream& string, ITreeNode& node)
{
    #ifdef DEBUG
  
     std::cout << "Parent: " << node.GetValue() << std::endl; 

     if(node.GetLeft() == NULL) std::cout << "Left: NULL" << std::endl;
     if(node.GetLeft() != NULL) std::cout << "Left: " << node.GetLeft()->GetValue() << std::endl;

     if(node.GetRight() == NULL) std::cout << "Right: NULL" << std::endl;
     if(node.GetRight() != NULL) std::cout << "Right: " << node.GetRight()->GetValue() << std::endl;
       
    #endif
       
    if(node.GetLeft() != NULL) InorderSearchRecursively(string, *(node.GetLeft()));
    string << node.GetValue() << " "; 
    if(node.GetRight() != NULL) InorderSearchRecursively(string, *(node.GetRight()));  
}

int IBinaryTree::PreorderSearch()
{
  if(top == NULL) return 0;
  else if (top != NULL)
  {
    std::ostringstream preorderContents;
    ITreeNode* iterator = top;
    PreorderSearchRecursively(preorderContents, *iterator);
    std::cout << "Preorder Search: " << preorderContents.str() << std::endl;
    return 1; 
  }
}

void IBinaryTree::PreorderSearchRecursively(std::ostringstream& string, ITreeNode& node)
{
  #ifdef DEBUG
  
    std::cout << "Parent: "<< node.GetValue() << std::endl;

    if(node.GetLeft() == NULL) std::cout << "Left: NULL" << std::endl;
    if(node.GetLeft() != NULL) std::cout << "Left: " << node.GetLeft()->GetValue() << std::endl;

    if(node.GetRight() == NULL) std::cout << "Right: NULL" << std::endl;
    if(node.GetRight() != NULL) std::cout << "Right: " << node.GetRight()->GetValue() << std::endl;

  #endif

    string << node.GetValue() << " ";
    if(node.GetLeft() != NULL) PreorderSearchRecursively(string, *(node.GetLeft())); 
    if(node.GetRight() != NULL) PreorderSearchRecursively(string, *(node.GetRight()));
}

int IBinaryTree::PostorderSearch()
{
  if(top == NULL) return 0;
  else if (top != NULL)
  {
    std::ostringstream postorderContents;
    ITreeNode* iterator = top;
    PostorderSearchRecursively(postorderContents, *iterator);
    std::cout << "Postorder Search: " << postorderContents.str() << std::endl;
  }
}

void IBinaryTree::PostorderSearchRecursively(std::ostringstream& string, ITreeNode& node)
{
  #ifdef DEBUG
  
    std::cout << "Parent" << node.GetValue() << std::endl;

    if(node.GetLeft() == NULL) std::cout << "Left: NULL" << std::endl;
    if(node.GetLeft() != NULL) std::cout << "Left: " << node.GetLeft()->GetValue() << std::endl;

    if(node.GetRight() == NULL) std::cout << "Right: NULL" << std::endl;
    if(node.GetRight() != NULL) std::cout << "Right: " << node.GetRight()->GetValue() << std::endl;
   
  #endif

    if(node.GetLeft() != NULL) PostorderSearchRecursively(string, *(node.GetLeft()));
    if(node.GetRight() != NULL) PostorderSearchRecursively(string, *(node.GetRight()));
    string << node.GetValue() << " "; 
}

int IBinaryTree::GetTreeDepth() { return treeDepth; }
int IBinaryTree::GetTreeCount() { return treeCount; } 
