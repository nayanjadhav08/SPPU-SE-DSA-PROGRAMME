//Write C++ program to store roll numbers of student in array who attended training program in random order. Write function for-  
//a) Searching whether particular student attended training program or not using linear search and sentinel search.  
//b) Searching whether particular student attended training program or not using binary search and Fibonacci search

#include<iostream>
using namespace std;
#define max 100 
class search
{  int flag=0;
   int key,roll[max],t,fab[max];
  public :

void linear();
void sentinal();
void binary();
void fibo();
void getdata();
void show();
void sort();

};
void search::getdata()
{
  cout<<"\n How many roll no want to entre : ";
  cin>>t;

  for(int i=0;i<t;i++)
{
	cin>>roll[i];
}
//show();
}

void search::show()
{cout<<"\n\n";
  for(int i=0;i<t;i++)
	{
		cout<<roll[i]<<"  ";
	}
}


void search::linear()
{
  cout<<" \n Enter the rollno to search : ";
  cin>>key;

	for(int i=0;i<t;i++)
		{
			if(roll[i]==key)
				{
					flag=1;
					break;	
			}
			
		}

if(flag==1)
{
	cout<<"\n Rollno. '"<<key<<" ' attended the training program "<<endl;
}
else
{
	cout<<"\n Rollno. '"<<key<<" ' NOT attended the training program "<<endl;
}
}

void search::sentinal()
{
  cout<<" \n Enter the rollno to search : ";
  cin>>key;
int i=0;
while(roll[i]!=key)
{
  i++;
}
if(roll[i]==key)
{
	cout<<"\n Rollno. '"<<key<<" ' attended the training program "<<endl;
}
else
{
	cout<<"\n Rollno. '"<<key<<" ' NOT attended the training program "<<endl;
}

}

void search::sort()
{ int i,j,temp;
   for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
			{
				if(roll[i]<roll[j])
					{  temp=roll[i];
						roll[i]=roll[j];
						roll[j]=temp;
					}
			}
	}

}
void search::binary()
{  flag=0;
  int l=0,r=t ,mid ;
	cout<<"\n Enter the no to be search :";
	cin>>key;
sort();
cout<<"\n sorted array "<<endl;
show();


while(r>=l)
{
  mid= (l+r)/2 ;

  if(roll[mid]==key)
	{  flag=1;
		break;
	}
  if(roll[mid]>key)  // turn to left 
	{
		r=mid-1;
	}
  if(roll[mid]<key)  // turn to left 
	{
		l=mid+1;
	}

}


if(flag==1)
{
  cout<<"\n Rollno. '"<<key<<" ' attended the training program "<<endl;
}

else
{
	cout<<"\n Rollno. '"<<key<<" 'NOT attended the training program "<<endl;
}

}


void search::fibo()
{ int i,ck=0;	
 
   cout<<"\n Enter the value to serch :";
  cin>>key;											// 0, 1, 1, 2, 3, 5, 8, 13, 21.
     int f1=0,f2=0, sum;
 	fab[0]=0;
	fab[1]=1;
     for(i=2;i<t;i++)
 	{	
		
		fab[i]=fab[i-1] + fab[i-2]; 
      }
cout<<"\n Fabonicca series :";
for(i=0;i<t;i++)
{
   cout<<" "<<fab[i];

}
sort();
show();
//while(ck!=1)
//{
 for(i=0;i<t;i++)
{
   if(roll[fab[i]]==key)
	{
		ck=1;
		break;
	}
    if(roll[fab[i]]>key)
	{
		for(int j=fab[i-1];j<=fab[i];j++)
			{ // cout<<"  roolj[i]"<<roll[i]<<endl;
				if(roll[j]==key)
					{  ck=1;
						break; }			
			}
     }

 if(roll[fab[i]]<key)
	{
		for(int j=fab[i];j<=fab[i+1];j++)
			{    //cout<<"  rool<k[i]"<<roll[i]<<endl;
				if(roll[j]==key)
					{  ck=1;
 						break; }			
			}
     }
}


//}

if(ck==1)
{
cout<<"\n Rollno. '"<<key<<" ' attended the training program "<<endl;
}
else
{
cout<<"\n Rollno. '"<<key<<" 'not  attended the training program "<<endl;
}

ck=0;
}


int main()
{int exit=0;
 search s;
s.getdata();
do{



s.show();
//s.linear();
//s.sentinal();
//s.binary();
s.fibo();

}while(exit==0);
}
