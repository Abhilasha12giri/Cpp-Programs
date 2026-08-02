#include<iostream>
 
using namespace std;
int main(){
    /* Loops in c++:
   1. There are three types of loops
   2.  For loop 
   3. While loop 
    do-while Loop
    */
   /*For loop in c++*/
// int i=1;
// cout<<i<<endl;
// i++;

// Syntax for for loop
// for(initialization; condition; updation)
//  {
//    Loop body(c++ code);
//   }
// whole 
// for (int i=0; i<40; i++){
//    /* code */
// cout<<i<<endl;
//   }
// for( int i=1; i<=40; i++){
//    cout<<i<<endl;
//    }
//  for (int i=2; i<=40; i++){
//  cout<<i<<endl;
//  i++;
//   }
//   for (int i=1; i<=40; i++){
//    cout<<i<<endl;
//    i++;
//   }
// Example of infinite for loop
// for (int i = 1; 34 <= 40; i++){
//  cout<<i<<endl;
//  }
/* While loop in c++ */
// syntax:
// while(condition)
// {
// c++ statements;
// }

// Printing 1 to 40 using while loop
//  int i=1;
//  while(i<=40){
//    cout<<i<<endl;
//    i++;
// }
// Example of infinite while loop
// int i=1;
// while(true){
 //   cout<<i<<endl;
// }
/* do-While loop in c++ */
// syntax:
//do
// {
// c++ statements;
//} while(condition);

// Printing 1 to 40 using while loop
 // int i=1;
 // do {
 //   cout<<i<<endl;
 //   i++;
 // }
 // while(i<=40); 

 //loop run atleast one time
 int i=1;
 do {
    cout<<i<<endl;
    i++;
 }
 while(false);
    return 0;
}