#include <iostream>
#include <string>

int main(){
//pointer to a character
char* p1= nullptr;
char c1= 'a';
p1= &c1;

//array of 10 integers
int a1[10]= {1};  //a1[0]=1, others 0

//pointer to an array of 10 integers
int* p2= a1; //all 0

//pointer to an array of character strings
char* a3[]= {"s1","s2"}; //got warnings
// pp= nullptr;
//std::string array[]={"s1","s2","s3"};

//pointer to pointer to a character 
char** p3= &p1;

//integer constant
const int i1= 10;

//pointer to an integer constant
const int* p4= &i1;

//constant pointer to an integer
int* const p5= nullptr;
//int i2= 5;
//p5= &i2;

}
