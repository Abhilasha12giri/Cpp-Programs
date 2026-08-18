#include<iostream>
using namespace std;
int sum(int a , int b){ 
    int c = a+ b ;      
    return c ;           
}                       
 void swap(int a , int b){  // temp a  b
    int temp = a;           //   4  4  5
    a = b ;                 //   4  5  5 
    a = b ;                 //   4  5  4
    b =  temp;
}                       

//  Call by refrence using pointers
 void swapPointer(int *a , int *b){  // temp a  b
    int temp = *a;           //   4  4  5
    *a = *b ;                 //   4  5  5 
    *a = *b ;                 //   4  5  4
    *b =  temp;
 }

 //  Call by value using C++ refrence variables
 void swapReferenceVar(int &a , int &b){  // temp a  b
    int temp = a;           //   4  4  5
    a = b ;                 //   4  5  5 
    a = b ;                 //   4  5  4
    b =  temp;
 }

 //  Call by value using C++ refrence variables
 // int & swapReferenceVar(int &a , int &b){  // temp a  b
 //    int temp = a;           //   4  4  5
 //    a = b ;                 //   4  5  5 
 //    a = b ;                 //   4  5  4
 //    b =  temp;
 // }


int main(){
    int x =4 ,y =5 ;
   // cout<<"The sum of a and b is "<<sum(a,b)<<endl;
   cout<<"The value of x is " <<x<<" and the value of y is"<<y<<endl;
  // swap(x,y); // This will not swap a and b 
  // swapPointer(&x,&y); // This will swap a and b using pointer reference
    swapReferenceVar(x,y); // This will swap a and b using reference variable
  // swapReferenceVar(x,y) = 766; // This will swap a and b using reference variable
   cout<<"The value of x is " <<x<<" and the value of y is"<<y<<endl;
    return 0;
}