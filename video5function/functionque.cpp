//calculate the n factorial using function
/* n! = 5! = 1*2*3*4*5=120
*/
#include<bits/stdc++.h>
using namespace std;
 int facto(int n){
    int factorial =1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
 }

 // q 2 =>Check a number is  Even or Odd
 int evenodd(int a){
  if(a%2==0){
    return 1; //int returntype hai isliye 1 ya 0 return. ya agar return nhi void lga ke sidhe cout kar do call kar do 
    // ya fir returntype string le lo or return me even odd likh toh main me calll kar do easy way.
  }else{
    return 0;
  }
}
 
// q=3 square of number  => no ki power =2 .
// logic =>Square = number × number Square of 5	=5^2 = 5 *5=25 


int square(int b){// bek no paass parameter paass kar rhe hai
  return b*b;    
}


// calculate the power using function
int powerF(int z ,int x){ // z ek no jiski power find karni hai z=2 ya 3,4,5 or x kitni power find karni 2 ki power 3 ya 4 ya 5 ya
    int power=1;
    for(int i=1; i<=x; i++){
        power=power*z;
    }
    return power;
}



// q => calculate the sum of digit of a number  ex = number =145 sum of digit =1+4+5 =10. 
/* 145 first individual digit nikale hote hai fix logic hota hai
aisa kya kare kisi bhi number ke digita pta chaljaye  =>agar %moduler 10 kar de kisi bhi no ka toh  uska last digit aa jayega.
aisa kya kare last digit hatke bs ab remanning digit aaye bs =>agar number ko fir divide /10 se kare toh remaning digit aa jayegi . 
sum me sum+ last digit kar do kyuki last digit me ek ek karke last digit aate rhenge sum me + hote rhenge  
*/
int sumOfDigit(int n){ 
  int sum=0;// sum first me 0 hoga
  int lastdigit=0; // ld bhi 0
  while(n>0){ 
    lastdigit=n%10; 
    n=n/10;
    sum =sum+lastdigit;
    }
    return sum;
  }


  // q=5 WAF to check  a number is prime or not 
  /*  
  function create karenge boolean  se true ya flse dega . hum ek varible bnayege usko true yani abhi imagine ki prime no hai vo  
  logic=> prime number 1 se ya khudse divide hote hai  toh jo number hoga vaha tak har ek number se check karege
   2 se start hokar us number tak kisi bhi  number se jo number liya hai vo  complete moduler ho jaye yani 0 aaye toh  vo prime numbe rnhi hai.

   hum pehle bydefault imagine kar rhe hai number hai jo vo prime hai isliye bool me ek b=varibale ban ke truee kar sakte hai 

  */

  bool primeOrNot(int n){  
    bool isPrime =true; //starting me varibale bnayenge jisko true kar diya starting me .ki abhi imagine ki true hai 
      if(n < 2) {  // agar vo number 2 se kam huaa toh vo prime number nhi hoga 0,1 prime no nhi hai 
    cout << "non prime";
    return false;
}

    for(int i=2;i<n; i++){ // loop chlega  2 se chek hoga i=2 ,3,4,5 n-1 tak 
      if(n%i==0){ //check agar n number jo liya ahi vo moduler i hai i=2,3,4,5 n-1 tak toh true toh non prime
        isPrime= false;
        break;  // non prime aa gya toh aage loop chalane ki jarurat nhi hai yaha se loop end ho jayega or else me jakar non prime aajayega 
      }
    }
    if(isPrime==true){
      cout<<"prime";
    }else{
      cout<<"non prime";
    }
    return isPrime;
 }

// question 6 =>waf to print all prime no from 2 to n 
/*
logic => 2 se n tak har number ko check karenge. Har number ke liye check karenge ki woh prime hai ya nahi.
 Agar number kisi bhi number se completely divide nahi hota,toh woh prime number hai.
 Prime hone par us number ko print kar denge.
*/

void printPrime(int n) { // function koi value return nahi karega.printPrime → function ka naam hai.int n → function integer value receive karega.
    for (int i = 2; i <= n; i++) {
        bool prime = true; // Maan liya number prime hai

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false; // Number divide ho gaya, prime nahi hai
                break; // Aage check karne ki zarurat nahi
            }
        }

        if (prime) {
            cout << i << " "; // Prime number print karenge
        }
    }
}






 int main(){
    cout<<facto(5)<<endl; //function call
    /*int facto(int n) → function create and number receive karta hai. factorial = 1 → multiplication ki initial value.
for loop → 1 se n tak multiply karta hai.return factorial → calculated answer wapas bhejta hai. cout << facto(5) → returned answer print karta hai.*/
  int result = evenodd(34); // function caall kiya or ek variable me store kiya 
 if(result==1){ // variable ka use kiya condition lga ke return ko print kara diya 
    cout<<"even";
 } else{
    cout<<"odd";
 }

 cout<<endl<<square(5)<<endl;


 cout<<powerF(2 ,3) <<endl; //function call kar diya or 2 or 3 no de diya jiski 2ki power 3 find karni hai or print 


 cout<<sumOfDigit(145)<<endl; //function call 

 cout<<primeOrNot(9)<<endl; //return isPrime varible ko return kiya hai usko cout  print karega 1 ya 0.false return hua toh cout 0 print karega true me 1 .
//Lekin  function ke andar bhi cout << "non prime"; cout<<"prime" hai, isliye 9 ke liye output hoga: nonprime 0




   printPrime(5); // Direct 5 value function ko pass ki

 

}
