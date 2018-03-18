/*ROUP-D

Pizza parlor accepting maximum M orders. Orders are served in first come first served basis. Order once placed cannot be cancelled. Write C++ program to simulate the system using circular queue using array.
*/

#include<iostream>

using namespace std;
#define max 5
typedef struct pizza
{  
   int orn;
   string name ;
  int amount ; 
  
};


class piz
{
  public :
int ct3;
struct pizza p[max];
int front ,rear;
int no;
 int i,ct,ct2,j;
piz()
{
ct=ct3=0;
front=rear=-1;
no=0;
}
void get();
void put();
void del();

};

void piz::del()
{ if(front==-1)
	{
		cout<<"\n Queue is empty";	
	}

   if(front==rear)
	{
		front=rear=-1;
	}
  else 
  { 
  front++ ;
  }
}


void piz::get()
{ int exit=0;


do
  {   

if( front==0 && rear==max-1 || rear==front-1 )
{
cout<<"\n\n******Queue is full :";

}

else
 
{ 	rear=(rear+1)%max;
  cout<<"\n\nrear"<<rear<<"\n";
 if(front==-1)
  {
    front=rear;
  ct3++;
  }
	 cout<<" \n Rear = "<<rear ;
     //no=rear+1;
ct++;
 cout<<" ORDER NO      :   "<<ct<<endl;
p[rear].orn=ct;
cout<<"ENTER pizza name choice : \n  1)cheese pizza  \n 2)mergarita cheese pizza  \n 3)capcicum pizza"<<endl;
cin>>i;
switch(i)
{
case 1 :
p[rear].name="cheese piza ";
break;
case 2 :
p[rear].name="mergarita chees pizza ";
break ; 
case 3 :
p[rear].name="Capcicum pizza ";
break; 
default :
   cout<<"Entre the correct choice ";
}
i=0;
cout<<"ENTER pizza size  :  \n  1)Small  \n  2)Mediam \n 3)Large "<<endl;
cin>>j;
switch(j)
{
case 1 :
p[rear].amount=100;
break;
case 2 :
p[rear].amount=200 ;
break ; 
case 3 :
p[rear].amount=300 ;
break; 
default :
   cout<<"Entre the correct choice ";
}
  }
 cout<<"\n To take another order press 1 ::";
 	cin>>exit;
  }while(exit==1);

}

void piz::put()
{

cout<<"\n front = "<<front<<endl;
if(front==-1)
{
  cout<<"\n *******this Empty. "<<endl;
}
else
{
int m=0;
int y=front;
while(y!=rear)
{
cout<<"\n front = "<<front<<endl;
cout<<"\n Y = "<<y<<endl;
cout<<"\n order no :"<<p[y].orn<<endl;
cout<<" Pizza name  :"<<p[y].name<<endl;
cout<<" Pizza amount   :"<<p[y].amount<<endl;
y=(y+1)%max;
}
cout<<"\n order no :"<<p[y].orn<<endl;
cout<<" Pizza name  :"<<p[y].name<<endl;
cout<<" Pizza amount   :"<<p[y].amount<<endl;

}
}

int main()
{

piz p;
int ch,exit=1;
do{
cout<<"\n 1.get order :\n 2. put order: \n 3. delever order \n Enter the choice :"; 
cout<<" \n4.To exit  ";
cin>>ch;
switch(ch )
{
case 1 :
p.get();
break;

case 2 :
p.put();
break;

case 3 :
p.del();
break;

case 4 :
exit=0;
break;

default :
cout<<"\n Enter correct choice :";
}


}while(exit==1);

}


