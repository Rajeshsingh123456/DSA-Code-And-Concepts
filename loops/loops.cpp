/* loop = A piece of code that executes again and again until a condition becomes false. means again and again ek code ko run karne ke liye use hota hai loops ka 
1 WHILE LOOPS  =aytx while(condition){  codee or end me updation i++.}
2 FOR LOOPS (SABSE JAYDA YHI USE HOGA ) =sytex for (int i=0 initilazation ;condition ;updation)
3  DO WHILE LOOPS ( ) syntex = do{ code kaam hoga 
    fir updation  a++ }
fir end me while(condition) ;
 toh isliye kaam toh pehle ho rha hai condition end me lg rhi hai do while em toh condition false bhi hogi tab bhi do while me ek baar toh kaam hoga hi hoga .

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  // print no 1 to 5 fron while loop 
  int a=1; //a varible le liya jisme 1 daala  
  while(a<=5){ // condition lgai ki 5 tak chle  1>=5 true hai toh andar jayega .
    cout<<a <<endl;// or haar baar no print ho jaye jo a me hai
    a++; //fir ki ka no ek plus ho jaye 1 se 2 ho jaye fir 3 fir 4 fir 5 . output 1,2,3,4,5 
  }

  // for loop same 0 to 4 no print
  int n=5;   //n varible jisme 5 value li 
  for(int i=0; i<n; i++){    // i liya usko n se chota ho yani 5 se chhota abhi i=0 hai true hai toh under print hoga 0 fir i++ hoga i=1 hoga i<n 1<5 true hai firse i print hoga yani 1
    cout<<i<<endl;
  }


/// do while loops  print 1 to 5 no.
  int z = 1;

  do{
    cout << z << endl;
    z++;
 } while(z <= 5);





  return 0;

}