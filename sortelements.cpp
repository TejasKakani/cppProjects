#include<iostream>
using namespace std;
void swap(int &a,int &b){
int temp=a;
a=b;
b=temp;
}
int main(){
int NoOfElements;
cout<<"Enter number of elements you want to sort"<<endl<<"-->";
cin>>NoOfElements;
int A[NoOfElements-1];
for(int ArrayElements=0;ArrayElements<NoOfElements;ArrayElements++){
if(ArrayElements==0){
cout<<"Enter "<<ArrayElements+1<<"st Element"<<endl<<"-->";
}
else if(ArrayElements==1){
cout<<"Enter "<<ArrayElements+1<<"nd Element"<<endl<<"-->";
}
else if(ArrayElements==2){
cout<<"Enter "<<ArrayElements+1<<"rd Element"<<endl<<"-->";
}
else
cout<<"Enter "<<ArrayElements+1<<"th Element"<<endl<<"-->";
cin>>A[ArrayElements];
}
for(int GroupOfSteps=1;GroupOfSteps<NoOfElements;GroupOfSteps++){
for(int SwappingElements=0;SwappingElements<NoOfElements-GroupOfSteps;SwappingElements++){
if(A[SwappingElements]>A[SwappingElements+1]){
swap(A[SwappingElements],A[SwappingElements+1]);
}
}
}
cout<<"Sorted Elements are -- ";
for(int SortedArrayElements=0;SortedArrayElements<NoOfElements;SortedArrayElements++){
if(SortedArrayElements<NoOfElements-1){
cout<<A[SortedArrayElements]<<" , ";
}
else
cout<<A[SortedArrayElements]<<" . "<<endl;
}
return 0;
}

