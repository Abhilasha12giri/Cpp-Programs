#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   // int a=34;
   // char c='d';
   // cout<<"The value of c was:"<<c;
   // c='e';
   // c='4';
// a=45;
//    cout<<"The value of c is:"<<c;


//const int a=34;
//cout<<"The value of a was:"<<a<<endl;
//a=45;//we will get an error because a is constant
//cout<<"The value of a is:"<<a<<endl;

//Manipulators in c++
//int a=1, b=22, c=333, d=4444;
//cout<<"The value of a without setw is:"<<a<<endl;
//cout<<"The value of b without setw is:"<<b<<endl;
//cout<<"The value of c without setw is:"<<c<<endl;
//cout<<"The value of d without setw is:"<<d<<endl;

//cout<<"The value of a is:"<<setw(4)<<a<<endl;
//cout<<"The value of b is:"<<setw(4)<<b<<endl;
//cout<<"The value of c is:"<<setw(4)<<c<<endl;
//cout<<"The value of d is:"<<setw(4)<<d<<endl;


// OPerator Precedence
int a=3, b=4;
//int c = (a*5)+b;
//int c = ((((a*5)+b)-45)+87);
int c = a*5+b-45+87;
cout<<c;

    return 0;
}