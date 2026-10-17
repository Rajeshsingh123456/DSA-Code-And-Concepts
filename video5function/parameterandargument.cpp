//parameter in function => Function definition mein declare kiye gaye variables, jaise int a, int b hi parameter hote hai .
 //function input leta ahi kaam karke output deta hai ya return karta hai
/* 
return function se value bahar bhejta hai main()function me jaha call hota hai ab hum main function me return value sidhe call ke sath print bhi kara
 sakte hai or usko  new variable me store kara ke jaha chahe vha print kara skate hai 
 function redundecy reducy karta hai baar baar code ek hi likhne se acha ek baar code likho jab chaho jaha use karna hao call karo 
*/

//calculate the sum of two number using function
#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b){  //int a,int b is a paarameter 
    return a+b;
}

// calculate the sum of number from 1 to n using function
 int sumN(int n){
  int s =0;
  for(int i=1; i<=n; i++){
    s=s+i;
  }
 return s;
 }

int main(){
    int sumof=sum(10,20); //sum function call and (10,20) is a value it is called argument .
    cout<<sumof<<endl; // sumof variable bnake jo return ho rhi hai value usko store karaya function call karke then isko print kara diya 
    // ye takes something return something ka ex hai.


    cout<<sumN(4);// sumN function ko call kiya or or usme argument ki value daal di 
     


    return 0;
}


