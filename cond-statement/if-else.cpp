/* if else me agar  if condition true toh if ka code run agar if condition false toh else ka code run.
 else ko hamesha if ke sath hi likhte hai agar for loop ke undar if condiition likhi hai uske bahar for 
 loop ke bahar hum direct else condition nhi likh skate kyuki loop toh block ke baad khatam ho jata hai or compiler hamesha 
 else ke liye if condition ko dhudta hai   . jabki hum sirf if sirk if condition likh sakte hai else na bhi likhe kahi kahi chl jata hai .
*/

//if -else syntax
/* 
 if(comdition){
 code jo kaam karaan chahte hai  agar true hui condition toh agar false hui toh direct else me 
 } else{
  false hui if condition else me aaya yaha condition nhi lgata ye agar if false toh else ka kaam karo bs.
  
  }
*/

// ex check a person can vote or not 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout<<"enter your age";
    cin>>age; //user se uski age input me le rhe hai 

    if(age>=18){
        cout<<"you can vote" <<endl;
    }else {
        cout<<"you cannto do vote"<<endl;
    }


// check a no is positive or negative . header hai hi bs number lo fir chcek karo 

    int n;
    cout<<"enter a no";
    cin>>n;
    if(n>0){
        cout<<n<<" is positive no"<<endl;
    }else{
        cout<<n<<" is a negative no"<<endl;
    }

/* else if use for check multiple condition  bahut sari condition lgane ke liye use karte hai 
if agar ye true ho toh ye else if me vrna ye firse else if condition firse else-if 

*/
 // grade check karne ke liye 90 se jayda A grade 80 -90 me B grade 60-70 d Grade 70 -80 C grade .

 int i;
 cout<<"enter your marks";
 cin>>i; //user se uske marks le liye i variable me storee kara diye 
 if(i>90){          //marks 90 se jayda toh true
    cout<<"A";
 }
else if(i>80 && i<90){  // isme ek or codition lgai isme and operator use jab dono true toh hi chlage .
    cout<<"B";

}

else if(i>70 && i<80){  // ek or else if condition lga di
 cout<<"C";

}
else if(i>60 && i<70){
    cout<<"d";
}
else{
    cout<<"E";
}

//Ye && hta sakte hai kyuki upprwali false toh hi niche aaya hoga na sidhe kar skate hai ki i>=80 cout b agar ye false toh i>=70 cout c and operator na bhi use kare chlega 
// Kyuki else if upar wali condition false hone ke baad hi check hota hai.



//find the character is upppercase or lowercase
int x;
cout<<"enter a character";
cin>>x;
if(x>='a' && x<='z'){ //  simple ki agar jo character user de rha hai vo small a character se bada or small z character se chhota hai toh lowercase hai ye 
    cout<<"lowercase";  //lowercase hai or charecter ko single quetos me likhte hai ''isme or ek hi charcter hota hai .
}else{
    cout<<"upper case";// agar if false toh vo upper case hoga yani x<='A' and x>='Z' hogi .
}

/* isko hum charactor ki ascii vlue se bhi kar sakte hai capital A to capital Z hote hai  inki value hoti hai 65 se 90 tak yahi A=65 ASCII VLUE B=66 
ASCII VALUE   TOH EX if(x>=65 && x<=90 ){ cout<<"uppar case";   
}
*/

 return 0;

}

///ternary statement = means threee . ye kam use hota hai 
/*  syntex condition ? stament 1:statement 2;

ex 
cout<<(n>=0? "positive":"negative")  mtlb contion true toh positive dega vrna negative dega output

*/