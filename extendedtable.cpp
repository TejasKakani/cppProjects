#include<iostream> 
 using namespace std; 
 class table { 
   public: 
   int a, 
   b, 
   c; 
   void getinfo(void); 
   int useinfo(void); 
 }; 
 void table :: getinfo() { 
   cout<<"Enter the number for which you want to find table"<<endl<<"-->"; 
   cin>>a; 
   cout<<"From which multiple you want to find table"<<endl<<"-->"; 
   cin>>b; 
   cout<<"Upto which multiple you want to find table"<<endl<<"-->"; 
   cin>>c; 
 } 
 int table :: useinfo() { 
   getinfo(); 
   cout<<"The table of "<<a<<" is --"<<endl; 
   for(int i = b; i <= c; i++) { 
     cout<<a*i<<endl; 
   } 
   return 0; 
 } 
 int main() { 
   table extab; 
   extab.useinfo(); 
   return 0; 
 }
