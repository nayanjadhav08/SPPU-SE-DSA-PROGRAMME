/*

Set A=(1,3, a, s, t, i} represent alphanumeric characters permitted to be used
to set the password of length 4. Write C/C++ program to generate all possible
passwords
*/


#include<iostream>
using namespace std;

class pass
{ 
  int i,j,k,l;
  public :
  void abc();


};

void pass::abc()
{int c=0;
  
char A[]={'1','3','a','s','t','i'};
     for(i=0;i<6;i++)
       {for(j=0;j<6;j++)
          {
            for(k=0;k<6;k++)
              {  for(l=0;l<6;l++)
                   {
                      cout<<" "<<A[i]<<A[j]<<A[k]<<A[l];
                          c++;
                   }
    
              }
          }
        }	
   
    cout<<"\n \n count ="<<c<<"\n"; 

}
int main()
{
   pass p;
  p.abc();

  return 0; 
}
