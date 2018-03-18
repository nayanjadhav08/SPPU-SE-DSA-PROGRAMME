//Queues are frequently used in computer programming, and a typical example
//is the creation of a job queue by an operating system. If the operating system
//does not use priorities, then the jobs are processed in the order they enter the
//system. Write C++ program for simulating job queue. Write functions to add/
//job and delete job from queue///


#include<iostream>
using namespace std;

struct node
{
  int jobno;
  int exetm, start,end;
node *next;

};


class job
{
  int jbno, etm, stm, cmp; 
 node *head=NULL ,*temp1=NULL,*temp2=NULL; 
  public :
job()
{
jbno=0;
 etm=0;
 stm=1;
 cmp=0;

}

void getdata();
void putdata();
void del();

};

void job::getdata()
{  
   cout<<"\n Enter the job no :";  
   cin>>jbno ;
   cout<<"\n Enter the execution time required : ";
   cin>>etm;
    //stm += stm    ;
   cmp=stm+etm   ;
     node *p=new(struct node);
	
	p->jobno=jbno;
	p->exetm=etm;
	p->start=stm ;
     p->end=cmp   ;
	p->next=NULL;
 if(head==NULL)
		{
			head=p;
   		}
 else
{  temp1=head;
  while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
  temp1->next=p;
}

stm=stm+etm;
}

void job::putdata()
{ 
  if(head==NULL)
	{
	  cout<<"\n \033[4;31mThere is no job to display \033[0m"<<endl;	
	}
  else{
   temp1=head;
   while(temp1!=NULL)
	{    cout<<"------------------------------------"<<endl;
		cout<<"\n Job no         :"<<temp1->jobno;
		cout<<"\n Start time     :"<<temp1->start;
		cout<<"\n Execution time :"<<temp1->exetm;
		cout<<"\n End time :"<<temp1->end;
 		cout<<"\n------------------------------------"<<endl;
  		temp1=temp1->next;
	}
   }
}

void job::del()
{	
if(head==NULL)
	{
	  cout<<"\n \033[4;31mThere is no job \033[0m"<<endl;	
	}
  else{
temp2=head;

 head=head->next ;

cout<<"\n Job no."<<temp2->jobno<<" deleted ";
delete(temp2);}
}


int main()
{
 job j;
int ch, exit=1;

do{
cout<<"\n****************"<<endl;
cout<<"****************"<<endl;
cout<<" 1.get job : \n 2.putdata : \n 3.delete \n 4. exit \n Enter choice :";
cin>>ch;

switch(ch)
{
case 1 :
j.getdata();
break;
case 2 :
j.putdata();
break;
case 3 :
j.del();
break;
case 4:
exit=0;
}
}while(exit==1);

}

