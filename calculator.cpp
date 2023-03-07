#include<iostream> 
 using namespace std; 
 class Calculator { 
   public: 
   double AddingTerms = 0; 
   int ProductTerms = 1; 
   int LastTerm = 3; 
   char Operation; 
   void Simple_Calculator(void); 
 }; 
 void Calculator :: Simple_Calculator() { 
   cout<<"ASSUMING THE 1st TERM IS '0' IF YOU ARE DOING ADDITION OR SUBTRACTION FIRST"<<endl; 
   cout<<"ASSUMING THE 1st TERM IS '1' IF YOU ARE DOING MULTIPLICATION OR DIVISION FIRST"<<endl; 
   int Again = 0; 
   for(int NoOfTerms = 2; NoOfTerms < LastTerm; NoOfTerms++) { 
     correctinput: 
     cout<<"Which operation you want to apply -- '+','-','*','/','='"<<endl<<"-->"; 
     cin>>Operation; 
     double StoredTerms[NoOfTerms]; 
     if(Operation != '+' && Operation != '-' && Operation != '*' && Operation != '/') { 
       goto IgnoreInput; 
     } 
     if(NoOfTerms == 2) { 
       cout<<"Enter "<<NoOfTerms<<"nd Term ( Enter '0' as a term to exit )"<<endl<<"-->"; 
     } 
     else if(NoOfTerms == 3) { 
       cout<<"Enter "<<NoOfTerms<<"rd Term ( Enter '0' as a term to exit )"<<endl<<"-->"; 
     } 
     else { 
       cout<<"Enter "<<NoOfTerms<<"th Term ( Enter '0' as a term to exit )"<<endl<<"-->"; 
     } 
     cin>>StoredTerms[NoOfTerms]; 
     IgnoreInput: 
     switch(Operation) { 
       case '+': 
       AddingTerms = AddingTerms+StoredTerms[NoOfTerms]; 
       if(NoOfTerms == 1) { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Term is -- "<<AddingTerms<<endl; 
       } 
       else { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Terms is -- "<<AddingTerms<<endl; 
       } 
       LastTerm++; cout<<endl; 
       break; 
       case '-': 
       AddingTerms = AddingTerms-StoredTerms[NoOfTerms]; 
       if(NoOfTerms == 1) { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Term is -- "<<AddingTerms<<endl; 
       } 
       else { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Terms is -- "<<AddingTerms<<endl; 
       } 
       LastTerm++; cout<<endl; 
       break; 
       case '*': 
       if(AddingTerms == 0) { 
         AddingTerms = 1; 
       } 
       AddingTerms = AddingTerms*StoredTerms[NoOfTerms]; 
       if(NoOfTerms == 1) { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Term is -- "<<AddingTerms<<endl; 
       } 
       else { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Terms is -- "<<AddingTerms<<endl; 
       } 
       LastTerm++; cout<<endl; 
       break; 
       case '/': 
       if(AddingTerms == 0) { 
         AddingTerms = 1; 
       } 
       AddingTerms = AddingTerms*(1/StoredTerms[NoOfTerms]); 
       if(NoOfTerms == 1) { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Term is -- "<<AddingTerms<<endl; 
       } 
       else { 
         cout<<endl<<"Total Of Your "<<NoOfTerms<<" Terms is -- "<<AddingTerms<<endl; 
       } 
       LastTerm++; cout<<endl; 
       break; 
       case '=': 
       cout<<endl<<"The total of your all terms is "<<AddingTerms<<endl; 
       break; 
       default: 
       cout<<"You have choosen WRONG Option !!!"<<endl<<"If you want to change your option Enter 'c' in your keyboard and press Enter -- "; 
       char changeinput; 
       cin>>changeinput; 
       Again++; 
       if(changeinput == 'c') { 
         cout<<"Again("<<Again<<") "; goto correctinput; 
       } 
       else { 
         break; 
       }}}} 
 int main() { 
   Calculator Simple; 
   Simple.Simple_Calculator(); 
   return 0; 
 }
