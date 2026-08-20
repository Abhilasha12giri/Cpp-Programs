#include<iostream>
using namespace std;
//   inline int square(int x){
//   return x*x;
//   }
//   int main (){
//       cout<<square(5)<<endl;
//       cout<<square(6)<<endl;
//       cout<<square(7)<<endl;
//       cout<<square(8)<<endl;
//       cout<<square(9)<<endl;
//       cout<<square(10)<<endl;
//       cout<<square(11)<<endl;
//       cout<<square(12)<<endl;
//   }

  inline int product (int a , int b ){
  int c = a*b;
   return c;
  }
// Not recommended to use below lines with inline functions
  //static int c=0; // This executes only once 
  // c = c+1;   //next time this function is run. the value of c will be retained
  // c<7;
 // return a*b+c;
 float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
 }
 // int strlen(const char *p){
 
 //}
  
   int main(){
   int a ,b ;
   // cout<<"Enter the value of a and b"<<endl;
   // cin>>a>>b;
  //  cout<<"The product of a and b is " <<product(a,b)<<endl;
  //  cout<<"The product of a and b is " <<product(a,b)<<endl;
  //  cout<<"The product of a and b is " <<product(a,b)<<endl; 
  int money = 300000;
 cout<<"If you have "<<money<<" Rs in your bankaccount ,you will receive"<<moneyReceived(money)<<"Rs after 1 year"<<endl; 
 cout<<" For VIP: If you have "<<money<<" Rs in your bankaccount ,you will receive"<<moneyReceived(money,1.1)<<"Rs after 1 year"<<endl; 
   
   return 0;
}