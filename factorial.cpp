#include "functions.h"
#include <iostream>

int factorial(int n){
  cout << "Random Thing" << endl;
  while(n < 0){
    std::cout<<"Please enter a positive number\n";
    std::cin>>n;
  }
  if(n!=1){
    return(n * factorial(n-1));
  }
  else return 1;
}
