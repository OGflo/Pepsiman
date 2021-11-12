#include <iostream>
using namespace std;

int main() 
{
  
  bool isMale = false;
  bool isTall = false;

  if(isMale && isTall){
    cout << "You are a Tall Male.";
  } else if(isMale && !isTall){
    cout << "you are a Short Male";
  } else if(!isMale && isTall){
    cout << "you are a Tall but not Male";
  } else {
    cout << "You are a Short and not Male.";
  }

  return 0;
}