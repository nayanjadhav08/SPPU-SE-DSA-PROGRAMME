//Write C++ program to store second year percentage of students in array. 
//Write function for sorting array of floating point numbersin //
/////ascending order using a) Insertion sort  b) Shell Sort and display top five scores. 


#include<iostream>
using namespace std;
#define max 20
class sort
{
  float per[max];
int i,j,n;

public :
void getdata();
void putdata(float per[],int );	
void insertion();
void top();
void shell();

};

void sort::shell()
{
  float temp;
int gap;
cout<<"\n\n\n";
  for(gap=n/2; gap>0; gap /=2)
	{
		for(i=gap;i<n;i++ )
		{
			temp=per[i];
			for(j=i ; j>=gap && per[j-gap]>temp; j=j-gap)
				{
					per[j]=per[j-gap];
				}	per[j]=temp;

		}
	}

putdata(per,n);

}


void sort::getdata()
{
  cout<<"\n Enter no of student : ";
	cin>>n;

for(i=0;i<n;i++)
{
	cin>>per[i];
}
putdata(per,n);
}

void sort::putdata(float per[], int n)
{
for(int i=0;i<n;i++)
{
	cout<<"  "<<per[i];
}

	
}


void sort::top()
{

cout<<"\n ";
int p=i-5;
for(int i=n-1;i>=p;i--)
{
	cout<<"  "<<per[i];
}

}


void sort::insertion()
{
float key,temp;
cout<<"\n\n";
  for(i=1;i<n;i++)
	{
		key=per[i];
		j=i-1;

		while(j>=0 && per[j]>key)
			{
				per[j+1]=per[j];
				j--;	
			}
		per[j+1]=key;
	}  
putdata(per,n);
}




int main()
{
int ch,exit=1;
 sort s;
do{
s.getdata();
s.shell();
s.insertion();
s.top();
}while(exit==1);

return 0;
}
