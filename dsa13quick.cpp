//Write C++ program to store first year percentage of students in array.
// Sort array of floating point numbers in ascending order using quick sort and display top five scores.

#include<iostream>
using namespace std;
#define max 20
class quick
{public :
   float a[max];
   int i,j,k,n;
   int l,r;
 
void get(float a[] , int );
void getdata();

int part(float a[max], int , int);
void sort(float a[max] , int ,int );
void put(float a[max] , int );
};

void quick::getdata()
{
   cout<<"\n How namy no do u enter : " ;
   cin>>n;
cout<<"Enetr the no :";
for(i=0;i<n; i++ )
   {
      cin>>a[i];
   }

cout<<"\n Array is :";
put(a,n);
}

void quick::put(float a[20], int n )
{
   cout<<"\n\narray is ";
 for(i=0;i<n; i++ )
   {
      cout<<"\t"<<a[i];
   }

}
int quick::part(float a[] , int l, int r)
{
   j= r+1; 
   i=l;
float v= a[l];
float t;
do{

    do 
	{
 		i++;
     }while( a[i]<=v );
   
   do 
	{
	 	j--;
	}while(a[j]>v);

   if(i<j)
    {
        t=a[i];
	   a[i]=a[j];
	   a[j]=t;   
    }
 
  }while(j>=i) ;
 
  a[l]=a[j];
  a[j]=v; 
return j ; 
}


void quick::sort(float a[] , int l , int r)
{
  int j ; 
if(r>l)
{j= part(a,l,r );

sort(a , 0, j-1);
sort(a ,j+1 ,r );


}


}

void quick::get(float M[] ,int  m)
{
   for(int p =0 ;p<m ;p++)
	{
		a[p]=M[p];
	}

put(a,n);
}
int main()
{
  quick q;
float M[max];
int m,i;

q.getdata();
q.sort(q.a , 0 , q.n-1);

cout<<"\n Sorted array : "<<endl;
q.put(q.a , q.n);
/*cout<<"\n How namy no do u enter : " ;
   cin>>m;
cout<<"Enetr the no :";
for( i=0;i<m; i++ )
   {
      cin>>M[i];
   }

cout<<"\n Array is before sorting  :";

  cout<<"\n\n";
 for(i=0;i<m; i++ )
   {
      cout<<"\t"<<M[i];
   }
q.get(M , m);
q.sort(M , 0 , m-1);
cout<<"\n\n sorted array :";
 for(i=0;i<m; i++ )
   {
      cout<<"\t"<<M[i];
   }
*/



return 0;
}
