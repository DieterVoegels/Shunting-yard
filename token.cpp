//token cpp file that sets the precedence, associativity and type of the token
#include "token.h"

void token::setChar(char newToken){

  //if it is a plus or minus then set its precedence to low, associativity to left, and type to operator
  token = newToken;
  if(token == '+' || token == '-'){
    precedence = 1;
    associativity = 1;
    type = 1;
  }
  //if it is multiplication or division then set its precedence to medium, associativity to left, and type to operator
  else if(token == '*' || token == '/'){
    precedence = 2;
    associativity = 1;
    type = 1;
  }
  //if it is a power then set its precedence to high, associativity to right, and type to operator
  else if(token == '^'){
    precedence = 3;
    associativity = 2;
    type = 1;
  }
  //if it is a parenthesis then set its type to parenthesis
  else if (token == '(' || token == ')'){
    type = 2;
  }
}

void token::setNum(int newNum){
  number = newNum;
  type = 0;
}
char token::getChar(){
  return token;
}
int token::getNum(){
  return number;
}
int token::getAssoc(){
  return associativity;
}
int token::getPrec(){
  return precedence;
}
int token::getType(){
  return type;
}
