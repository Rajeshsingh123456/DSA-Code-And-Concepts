// function is a reuseble block of code it is perform a speacific task.(ek baar block of code likho jaha jaha chaho use karo) 
/*
ex without function  3 times print hello
cout<<"hello";
cout<<"hello";
cout<<"hello";

with function 3 baar print hello 
void hello(){
cout<<"hello";
}
int main(){
 hello(); 
 hello(); 
 hello(); 
}
*/
#include<bits/stdc++.h>
using namespace std;
 void  great(){ // function Definition = Kaam kya karna hai, woh batana.
    cout<<"hello world"<<endl; // what work we want to do within a function.
 }

 /*about function =>return_type function_name(){
    // code to execute
    return value;
}
  Jo value function se return karana chahte hai,  uska data type return type hota hai. 
void -> koi value return nahi karta.
   int -> integer value return karta hai.int great(){}
   float -> float value return karta hai. float great(){}
   char -> character value return karta hai.
   bool -> true ya false return karta hai.
  */
  //return a function value .
  int printhello(){
    cout<<"hello world"<<endl;
    return 3;// value return kar rha ahi integer type ki isliye int printhello likha
  }


   int main (){
    great(); //function Call = Us kaam ko karwana.bina value retun kiye hello print 
    great(); //function call
    great(); //function call
   
   int val= printhello(); // function call kar di or jo return ki hai value usko val naamke variable me store kara rhe hai reuse kar rhe hai uska 
   cout<<val; //val variable ko print function se jo 3 hai vo print ho jayega 

return 0;
 }