//Q1 →  print the sum of 1 to nth number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout<<"enter a number whenever you sum from 1";
    cin>>n;
    int sum=0;
    for (int i=1; i<=n; i++){  // i=1 se start i<=n jo nuber user dega uske = tk chlega loop 1<=n true toh undar jayeg
        sum=sum+i; // sum variable me 0 se jo sum varible hai usme vhi sum jo hai or ek i ki value add kar di mtlb sum me sum+i hoga jaise 0+1 hoga abhi.
        
    }
    cout<<sum <<endl; // sum ko print bhi kareyenge na last me print kara diya .


// Q 2 →>    check a no is prime or not ? header hai hi main hai hi uske baad se 

    bool isPrime=true;   // Sabse pehle maan lete hain ki number PRIME hai Agar baad me koi aisa number mil gaya jo ise completely divide karta hai, toh isPrime ko false kar denge.
    
    int a;
    cout<<"enter a no";
    cin>>a;   // user se number input liya

    if(a <= 1){   // 0 aur 1 PRIME number nahi hote Isliye agar a 1 ya usse chhota hai, toh isPrime ko false kar do fir vo else me jayega or print kara dega non prime no for loop ke undar chek karne ki jarurat hi nhi padegi.
    isPrime = false;
} 
   // Ab 2 se check karna start karenge. j = 2 se start j <= a-1 tak chalega yani jo number diya hoga usse ek kam tak. har baar j 1 se increase hoga

    for(int j=2; j<=a-1;j++){

 // % remainder deta hai. Example: 6 % 2 = 0 Matlab 6, 2 se completely divide ho raha hai. Agar remainder 0 mila, toh number PRIME nahi hai.
        if(a%j==0){  // isliye a%j se yani j=2 se fir j=3 fir 4 aise agar ek se bhi compeletey divid ehuaa toh prime no nhi hai 
           isPrime=false; //yaha vo prime no nhi hoga isliye isPrime ko  false kar diya .    
            break;// yaha se hi break code end ho jayega fir if me jayega isPrime false hai toh ye nhi chlge if wali condioton for else me jakar print kara dega non prime no.
        }

    }

    // Ab check karenge isPrime ki value kya hai. Agar true hai → Prime Agar false hai → Not Prime
    if(isPrime == true){
        cout<<"prime";
    }else{
        cout<<"no is non prime no";
    }
    
    return 0;
}