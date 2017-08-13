#include <iostream>

int main(){
//an array on the stack
  int a1[10]= {0};

//an array on the heap
  int size;
  int* a2= new int[size];

  delete[] a2;
  return 0;
}
