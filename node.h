//node h file that stores variables and prototypes
#include <iostream>
#include "token.h"

using namespace std;

class node{
 public:
  node(token* newToken);
  token* getToken();
  node* getLeft();
  node* getRight();
  node* getLeftChild();
  node* getRightChild();
  void setLeft(node* newleft);
  void setRight(node* newRight);
  void setLeftChild(node* newChild);
  void setRightChild(node* newChild);
 private:
  token* Token;
  node* right = NULL;
  node* left = NULL;
  node* leftChild = NULL;
  node* rightChild = NULL;
  char data;
};
