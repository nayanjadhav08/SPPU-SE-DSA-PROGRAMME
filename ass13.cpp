
 #include<iostream>
using namespace std;
class Quick
{
 float A[20];
 public:
 int part(float A[20],int l,int r);
 void qsort(float A[20],int l,int r);
};
int Quick::part(float A[],int l,int r)
{
 int i,j;
 float v,t;
 v=A[l];
 i=l;
 j=r+1;
 do
 {
   do
     i++;
     while(A[i]<=v && i<j);
   do
     j--;
     while(A[j]>v);
    
     if(i<j)
     {  cout<<"\n SWap :"<<A[i]<<"  "<<A[j]<<endl;
       t=A[i];
       A[i]=A[j];
       A[j]=t;
     }cout<<"\n i  :"<<i<<"  j="<<j<<endl;
  }while( j>=i);   // A[j]>v &&
 cout<<"\nsv i  :"<<i<<"  j="<<j<<endl; 
 A[l]=A[j];
  A[j]=v;
 
  return j;
}

void Quick::qsort(float A[20],int l,int r)
{ 
  int j;
  if(l<r)
  {
   j=part(A,l,r);
   qsort(A,l,j-1);
   qsort(A,j+1,r);
  }
}

int main()
{
  Quick q;
 float M[20];
 int m,n;
 cout<<"\n Total Number of Students : ";
 cin>>m;
 cout<<"\n Percentage of Students \n";
 for(int i=0;i<m;i++)
 {
  cin>>M[i];
 }
 cout<<"\n Percentage of Students before sorting \n";
 for(int i=0;i<m;i++)
 {
  cout<<M[i]<<"\t";
 }

 cout<<"\n Perform Quick sort \n";
 q.qsort(M,0,m-1);
 cout<<"\n Percentage of Students After Sorting \n";
 for(int i=0;i<m;i++)
 {
  cout<<M[i]<<"\t";
 }

 cout<<"\n Top 5 Scores \n";
 for(int i=m-1;i>=m-5;i--)
 {
  cout<<M[i]<<"\t";
 }

return 0;
}
 
