#include<iostream>
using namespace std;
int main() {
    // Array Example
int marks[4] = {23,24,25,26};
int mathmarks[4];
 mathmarks[0] = 2788;
 mathmarks[1] = 578;
 mathmarks[2] = 758;
 mathmarks[3] = 785;

 // cout<<"These are mathmarks"<<endl;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;

// you can change the value of an array
marks[2] =455;
// cout<<"These are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// for (int i=0; i<4; i++)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
// }
// for (int i=0; i<4; i++)
// {
//     cout<<"The value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
// }

//  int i = 0;
//  while(i<4) {
//      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//      cout<<"The value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
//      i++;
//  }

//  int i = 0;
//  do{
//      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//      i++;
//  }
//  while(i<4);
//  
//   i = 0;
//  do{
//      cout<<"The value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
//      i++;
//  }
//  while(i<4);
// int* p = marks;
// cout<<"The value of marks[0] is " <<*p<<endl;
// cout<<"The value of marks[1] is " <<*(p+1)<<endl;
// cout<<"The value of marks[2] is " <<*(p+2)<<endl;
// cout<<"The value of marks[3] is " <<*(p+3)<<endl;
// 
// int* q =mathmarks;
// cout<<"The value of mathmarks[0] is " <<*q<<endl;
// cout<<"The value of mathmarks[1] is " <<*(q+1)<<endl;
// cout<<"The value of mathmarks[2] is " <<*(q+2)<<endl;
// cout<<"The value of mathmarks[3] is " <<*(q+3)<<endl; 

int* p = marks;
cout<<*(p++)<<endl;
 cout<<*p<<endl;
cout<<*(++p)<<endl;
return 0;
}