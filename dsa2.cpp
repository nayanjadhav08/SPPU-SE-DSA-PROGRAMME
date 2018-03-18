/*Write C/C++ program for storing matrix. Write functions for
a) Check whether given matrix is upper triangular or not
b) Compute summation of diagonal elements
c) Compute transpose of matrix
d) Add, subtract and multiply two matrices
*/

#include<iostream>
#include<iomanip>
using namespace std;
#define max 5
class matrix
{
  int i,j,k,p,u,r,c;
  int m2[max][max],m1[max][max],a[max][max],b[max][max],d[max][max],tra[max][max];

public :

void getdata();
void putdata();
void add();
void sub();
void multi();
void trans();
void diagonal();
void utm();
};

void matrix::getdata()
{
    cout<<"\n Enter the no of row and column : ";
    cin>>r;
   c=r;
 
cout<<"\n Enter the 1st matrix :"<<endl;
   for(i=0;i<r;i++)
     for(j=0;j<c;j++)
         {
            cin>>m1[i][j];
             //m1[i][j]=0;
          } 

cout<<"\n Enter the 2st matrix :"<<endl;
   for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
         {
             //m2[i][j]=i;
             cin>>m2[i][j];
          } 
    }
}

void matrix::putdata()
{
     
cout<<"\n  the 1st matrix :"<<endl;
   for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
         {
             cout<<" "<<m1[i][j];
          } cout<<"\n";
     }
cout<<"\n the 2st matrix :"<<endl;
   for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             cout<<" "<<m2[i][j];
          } cout<<"\n";
     }
}

void matrix::add()
{
  cout<<"\n the Addition of matrix :"<<endl;
   for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
            a[i][j]=m1[i][j]+m2[i][j];
          } 
     }
    
  for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             cout<<" "<<a[i][j];
          } cout<<"\n";
     }

}

void matrix::sub()
{
  cout<<"\n the Substraction of matrix :"<<endl;
   for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
            b[i][j]=m1[i][j]-m2[i][j];
          } 
     }
    
  for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             cout<<setw(4)<<b[i][j];
          } cout<<"\n";
     }

}


void matrix::multi()
{ cout<<"multiplication :";
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            d[i][j]=0;
        }

   for(i=0;i<r;i++)
      {
           for(j=0;j<c;j++)
         {
             for(k=0;k<c;k++)
                {
                    d[i][j] = m1[i][k] * m2[k][j] + d[i][j] ;
                   // cout<<"  " <<d[i][j];
                }
         }
       }   
cout<<"Multiplication :\n";
for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             cout<<setw(4)<<d[i][j];
          }  cout<<"\n";
     }

}

void matrix::trans()
 {
    cout<<" \n Transverse of matrix 1";
     for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             tra[j][i]=m1[i][j];
          }  
     }
    

   for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             cout<<setw(4)<<tra[i][j];
          }  cout<<"\n";
     }


}

void matrix::diagonal()
{  int sum=0;
   for(i=0;i<r;i++)
     {for(j=0;j<c;j++)
         {
             if(i==j)
                 {
                     sum += m1[i][j];
                  }
          }
     }
   cout<<"\n Sum = "<<sum;

}

void matrix::utm()
{
  int flag=0;									//     00    01    02
 for(i=0;i<r;i++)                                       //    1>0  1>1   1>2
     {for(j=0;j<c;j++)							//	  20   21    22
         {
             if(i>j)
            {   if(m1[i][j]==0)
                     flag=1;
                  
                else
                 flag=0;
                  break;
            }
          }
     }

if(flag==1)
   cout<<"\n it is utm ";
else
   cout<<"\n not utm";


}

int main()
{
  matrix m;

m.getdata();
m.putdata();
m.add();
m.sub();
m.multi();
m.trans();
m.diagonal();
m.utm();
return 0;

}
