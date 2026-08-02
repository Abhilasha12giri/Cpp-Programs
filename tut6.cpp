// There are two types of header files:
//1. System header files: It comes with the compiler 
#include<iostream>
// 2. User defined header files: It is written by the programmer 
// #include "this.h"--> This will produce an error if this.h is no present in the current directory

using namespace std;
int main(){
int a=4,b=5;
    cout<<"operator in c++:"<<endl;
    cout<<"This the type of operator in c++:"<<endl;
    // Arithmetic operators 
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;
    // Assignment operator --> used to assign values to variables 
    // int a = 3' b=9;
    //Comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<"The value of a != b is: "<<(a!=b)<<endl;
    cout<<"The value of a >= b is: "<<(a>=b)<<endl;
    cout<<"The value of a <= b is: "<<(a<=b)<<endl;
    cout<<"The value of a > b is: "<<(a>b)<<endl;
    cout<<"The value of a < b is: "<<(a<b)<<endl;
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<endl;
    // Logical operators
    cout<<"Following are the logical operator in c++"<<endl;
cout<<"The value of this logical and operator ((a==b) && (a<b))  is: "<<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b)||(a<b))<<endl;
cout<<"The value of this logical not operator (!(a==b))is " <<(!(a==b))<<endl;
return 0;
}