#include<iostream>
using namespace std;


   typedef struct employee
    {
        /* data */
        int eId;
        char favchar;
        float salary;
    } ep;

    union money
    {
        /* data */
        int rice; //4
         char car; //1
         float pounds; //4
    };

    int main(){
        enum meal{breakfast,lunch,dinner};
        meal m1 = breakfast;
        meal m2 = lunch;
        meal m3 = dinner;
        cout<< m1 <<endl;
        cout<< m2 <<endl;
        cout<< (m3==2) <<endl;
       //  cout<<breakfast<<endl;
       //  cout<<lunch<<endl;
       //  cout<<dinner<<endl;
      //   union money m1;
      //   m1.rice = 34;
      //   m1.car ='d';
      // cout<<m1.rice<<endl;
      //   cout<<m1.car<<endl;

    //     ep abhilasha;
    //     struct employee shweta;
    //     struct employee veera;
    // abhilasha.eId = 2;
    // abhilasha.favchar = 'f';
    // abhilasha.salary = 34000000;
    // cout<<"The value of abhilasha.eId is "<<abhilasha.eId<<endl;
    // cout<<"The value of abhilasha.favchar is "<<abhilasha.favchar<<endl;
    // cout<<"The value abhilasha.salary is "<<abhilasha.salary<<endl;
    
   //   cout<<"The value of shweta.eId is "<<shweta.eId<<endl;
   //   cout<<"The value of shweta.favchar is "<<shweta.favchar<<endl;
   //   cout<<"The value shweta.salary is "<<shweta.salary<<endl;
   //   
   //   cout<<"The value of veera.eId is "<<veera.eId<<endl;
   //   cout<<"The value of veera.favchar is "<<veera.favchar<<endl;
   //   cout<<"The value veera.salary is "<<veera.salary<<endl;
    return 0;
}