//operator = operator ka use hota hai operation perform karna . ex  a+b a,b oprands +hai operator detail me notebook me.
/* arithimatic =mathmatical calculation perform karta hai  + ,-, *,% ,/.
  relational operator = do number ke bich comparision kart hai < , >, =, <=, >= ,!= .
  logical operator isme or ,and ,not ye 3 hote hai 
  OR me ek bhi true statment to result is true. AND me ek bhi false to result is false .NOT ka kaam hota hai revese karna agar true toh false or false to true.

  */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int b=5;
    int c=a+b;//arithimatic operator perform ho rha hai + ho rha hai
    cout<<c <<endl; //direct bhi bina int c ke cout <<a+b; aisa bhi kar sakte hai 
    cout<<a-b <<endl; //minus hoga 10-5   
    cout<<a*b <<endl;
    cout<<a/b <<endl;//a b se divide hoga 10 /5 =2;
    cout<<a%b <<endl; // ye module hai ye reminder dete hai 10 %5 reminder =0 output dega notebool se padho extra.

   //relational operator
    int d=34;
    int e=80;
    cout<<"a<b="<< (d<e) <<endl;//d<e true or false output deta hai yani 1 ya 0 dega or hum ise () ke under hi cout kara rhe ahi 
    //toh ()ke andar compare karte hai ok .
     cout<<"d greater the e ="<< (d>e)<<endl; 
     cout<< "d is equal to e ="<<(d=e)<<endl;


   //logical operator

   int x=10;
   int y=20;
   int z= x>y || x!=y; //or operator hai x>y false hai but x!=y ye true hai toh result true yani 1 .
   int w= x<y && x==y; // ye and operator hai iska mtlb ek bhi false toh result false x<y true but x==y(x and y ki vlue same nhi hai ) false toh result false yani 0.
   int n = !(x > y);   // x>y false hai, NOT usko true bana dega → 1
   cout<<"or operator ="<< z <<endl;
   cout<<"and operator ="<<w <<endl; 
   cout<<"not operator ="<<n <<endl;   

// Q1 = SUM OF 2 NO TAKE NO FROM USER 
 int i,j;
 cout<<"enter two number you want to do sum";
 cin>>i;
 cin>>j;
 cout<<i+j <<endl;


   //unary operator notebooks me hai padho jayda samjha aayega.
   /* unary operator ek single no ya operand me work karta hai ye increment or decrement karta hai 
    post increment = a++ isme pehle kaam fir a ki value increcrese.
    pre increment = ++a isme pehle update hogi value fir kaam 
    post decrement =a-- isme pehle kaam fir value decrese.
    pre decrement= --a isme pehle value decrease fir kaam.
     copy se padhe  */

    int u =10;
    int p=u++;//kaam pehle fir update.
    cout<<"p="<<p <<endl <<"u="<<u <<endl;//u= 10 hai toh p me u ki value jayegi 10 fir update hogi toh u =11 ho jayegi
  
    int g=20;
    int h=++g;
    cout<<"g ="<<g <<endl <<"h =" <<h <<endl;//isme pehle update hogi g ki value fir kaam hoga yani fir h me jayegi value 
  //yani ki g=20 se 21 hoga fir h me jayegi 21 value toh dono 21 21 output dege 
  // decrement wala same inka ulta hota hai bs copy se padh lo .

  return 0;

}
