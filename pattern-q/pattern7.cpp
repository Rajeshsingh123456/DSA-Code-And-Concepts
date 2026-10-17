//pyramid pattern ->triangle ka double 
/*    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
/* logic => trick = bade pattern samjh nhi aate toh break karo usko 2 part me hum isko 2 part me break karenge
                         
       1  |1
     1 2  |2 1
   1 2 3  |3 2 1
 1 2 3 4  |4 3 2 1

 done 2 part me divide then outer loop i=0 to n times
 inner loop = sapce and element 1loop jo space ko print karega 2 loop jo element ko print karega 3 loop jo 2 set of element ko print karega jo decrease ho rhe hai element.
 space = i=0 hai toh space =3 i =1 hai toh space =2 toh n-i-1 condition hogi loop ki kyuki n=4 hai i=0 hai toh 4-1-0=3 space print then n=4 i=1 toh 4-1-1=2 space or i=1 rigth pattern

element => i=0 me ek element print hoga vo bhi 1 toh condition chlegi k<=i+1  tak k=1 se chalega . or print 1 karna hai k print hoga.i=1 me 1,2 print toh k print .
element dec=> i=0 hai 0 no print karne hai . i=1 hai toh ek no vo bhi 1 .i=2 hai do no vo bhi 2,1 . toh logic simple dec=i ke hai 
print karna hai 1, 21,321

 */

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n=4 ;// pattern size is 4.
    for(int i=0;i<n;i++){ //outer loop 
        for(int j=0; j<n-i-1; j++){//inner loop for print space i=0 me 3 space thats why condition is j<n-i-1.
            cout<<" "; // space print kar di.
        }
        for(int k=1; k<=i+1;k++){ 
            cout<<k;
        }
        for(int m=i; m>=1; m--){
            cout<<m;
        }
        cout<<endl;
     
    }

    return 0;
 }


