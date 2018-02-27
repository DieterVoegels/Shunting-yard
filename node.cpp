//node cpp file that manipulates variables in node h file
#include <iostream>
#include "node.h"

using namespace std;

node::node(token* newToken){
  Token = newToken;
}

token* node::getToken(){
  return Token;
}

node* node::getLeft(){
  return left;
}

node* node::getRight(){
  return right;
}

node* node::getLeftChild(){
  return leftChild;
}

node* node::getRightChild(){
  return rightChild;
}

void node::setLeft(node* newLeft){
  left = newLeft;
}

void node::setRight(node* newRight){
  right = newRight;
}

void node::setLeftChild(node* newChild){
  leftChild = newChild;
}

void node::setRightChild(node* newRightChild){
  rightChild = newRightChild;
}
