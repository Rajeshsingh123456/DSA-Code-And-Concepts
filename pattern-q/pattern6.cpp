// inverted triangle pattern
//ex 
// 1 1 1 1
//   2 2 2
//     3 3
//       4

/*logic=> space pehle hai isliye space print karane padege agara 1111 ,222space ,33space space, 4space space space  aise hota toh space print 
karane ki jarurat nhi thi  .
i=0 toh 4baar print 4 element print hunge j 4 baar chlega i=1 toh ek space then 3 baar element
outer loop =>(i=0 to n-1 times)
second loop for print space .
space                    no(element)
i=0 toh 0 space           4  
i=1 toh 1 space           3
i=2 toh 2space            2
i=3 toh 3 space           1

space =i toh print hogenge space i ke barabar (j=0 to j<i cout<<" "; //space print hunge i ke equal  )
elemnt = n=4 hai  or elemnt i=0 me 4 hai toh n-i=element 4-0=4 element in i=0 .i=1 hoga 4-1=3 element in i=1 line.
ab inme print kya karn ahai i=0 me 1 toh i+1 print karenge i=1 me 2 toh i+1 1+1=2.
        
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4; // pattern size is 4
    for(int i=0;i<n;i++){ //outer looop ye btata hai kitni row tak jana hai 
      for(int j=0; j<i; j++){//inner loop for print space i=0 hai toh 0 space isliye condition j<i hai
     cout<<" "; // space print kar diya condition ke according .    
    }
    
    for(int k=0;k<n-i;k++){ //inner loop it is use for print the element (isme i=0 hai toh 4 ele,nt primt n=4 hi hai toh n-i kareege kyuki i=1 me elemnt 3 hai or n=4 hai n-i karege 4-1 toh =3 .)
        cout<<i+1; //kya print karna hai hume i=0 me 1 or i=1 me 2 print karna hai isliye i+1 karege . 

    }
    cout<<endl;
    }

    

    return 0;
}
