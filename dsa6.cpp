/*Write C++ program for storing binary number using doubly linked lists.
Write functions-
a) to compute 1‘s and 2‘s complement
b) add two binary numbers
*/


#include<iostream>
using namespace std;

struct node
{
   int b;
   node *prev, *next;

};

class binary
{
    int bit,n,i;
    node *head1=NULL,*one=NULL,*two=NULL ,*head2=NULL ,*temp1=NULL,*temp2=NULL,*add=NULL;
public :
  void getdata();	
  void putdata();
  void onecomp();
 void twocomp();
 void add1();
void copy();

};

void binary::copy()
{
    temp1=head1;
   temp2=one;
      while(temp1!=NULL)
        {
 		 temp2->b=temp1->b ;
  		 temp2=temp2->next;
            temp1=temp1->next;
    	   }

 cout<<"hii";

}



void binary::onecomp()
{  cout<<"\n ones compiment of 1st binary :";
    
     temp1=head1;
  
     while(temp1!=NULL )
		{
			if(temp1->b==0)
                   {
					cout<<" "<<1;
				}
                 else if (temp1->b==1)
                   {
					cout<<" "<<0;
				}
  			temp1=temp1->next;

		}
            



}

void binary::twocomp()
{
	//onecomp();
   two=one;
   temp2=head1;
     int carry=1;
    cout<<"\n ";
     while(temp2->next!=NULL)
       {
 		 temp2=temp2->next;
 	   }
     // temp2=temp2->next;
//    cout<<"\n last bit last :"<<temp2->b;
      while(temp2!=NULL)                                        //   1     1      0  1
		{                                                     //   0     0      1 
                                                                //                1  
			if(temp2->b==0 && carry==1)                      //    0      1     0
                  {  // cout<<" "<<"0";

   					temp2->b=0;
                         carry=1;
                  }
 			else if(temp2->b==1 && carry==1)
				{  //cout<<" "<<"1";
					temp2->b=1;
                         carry=0;
                       
				}
               
               else if(carry==0)
				{

					if(temp2->b==0)                      //    0      1     0
                            {  // cout<<" "<<"0";
               					temp2->b=1;
            		        }
 			         else if(temp2->b==1)
						{ 
							temp2->b=0;
                               }
					//break;
				}
              temp2=temp2->prev;
		}
   
if(carry==1)
{ // cout<<" "<<"1";

  node *t=NULL;
   node *p=new(struct node);
     p->b=1;
    t=two;
   p->next=t;
   p->prev=NULL;
   t->prev=p;
   two=p;   
}
cout<<"\nTWO comp 1t BInary : ";
temp2=head1;
      while(temp2!=NULL)
    {
          cout<<" "<<temp2->b;
     temp2=temp2->next;
   }

}



void binary::getdata()
{
    cout<<" \n Enter the how many bits Do u want to ENter :";
     cin>>n; 
    cout<<"\n ENter 1st BInary : ";
 		for(i=0;i<n;i++)
             {
                    node *p=new(struct node);
                 cout<<"\n Enter bit :";
           	   cin>>p->b;
                  p->next=NULL;
                  p->prev=NULL;
 
                  
                       if(head1==NULL)
                     {
      			  	head1=p;
					one=p;
                     }     		
           		else
    				{
				    temp1=head1;
					one=p;       
 						while(temp1->next!=NULL)
							{
								temp1=temp1->next;
							}	
 						temp1->next=p;
  						p->prev=temp1;
				}		 	
			}     
    cout<<"\n ENter 2nd BInary : ";
 		for(i=0;i<n;i++)
             {
                    node *p=new(struct node);
                 cout<<"\n Enter bit :";
           	   cin>>p->b;
                  p->next=NULL;
                  p->prev=NULL;
 
                  
                       if(head2==NULL)
                     {
      			  	head2=p;
                     }     		
           		else
    				{
				    temp1=head2; 
 						while(temp1->next!=NULL)
							{
								temp1=temp1->next;
							}	
 						temp1->next=p;
  						p->prev=temp1;
				}		 	
			}     

  
}

void binary::putdata()
{
 cout<<"\n 1st Binary   : ";
 temp2=head1;
      while(temp2!=NULL)
    {
          cout<<" "<<temp2->b;
     temp2=temp2->next;
   } 
cout<<" ";
cout<<"\n Second BInary : ";
temp2=head2;
      while(temp2!=NULL)
    {
          cout<<" "<<temp2->b;
     temp2=temp2->next;
   }

}

void binary::add1()
{
   int carry=0,sum=0;
  add=head1;
  temp1=head1;
  temp2=head2;
  node *t=NULL;
  
    t=add;
  while(temp1->next!=NULL)
 	{
		temp1=temp1->next;
	}
while(t->next!=NULL)
 	{
		t=t->next;
	}

    while(temp2->next!=NULL)
 	{
		temp2=temp2->next;
	}

int m=0,n;

    while(temp1!=NULL&&temp2!=NULL&& t!=NULL)
        {
			sum=(temp1->b + temp2->b + carry)%2  ;
              carry= (temp1->b + temp2->b + carry )/2 ;
          if(sum==0) 
            { // cout<<"\n this ="<<m++;
			t->b=0;
            }
          else if(sum==1) 
            {  //cout<<"\n hiiii="<<m++;
			t->b=1;
            }

     

            temp1=temp1->prev;
 		  temp2=temp2->prev;
            t=t->prev;
	   }


   
if(carry==1)
{   node *t=NULL;
   node *p=new node;


    t=add;
  p->b=1;
   p->next=t;
   p->prev=NULL;
   t->prev=p;
   add=p;   
}
cout<<"\nadd of  BInary : ";
temp2=add;
      while(temp2!=NULL)
    {
          cout<<" "<<temp2->b;
          temp2=temp2->next;
   }




}

int main()
{
    binary b;

  b.getdata();
  b.putdata();
//b.copy();
  
 // b.putdata();
  b.add1();
b.onecomp();
 b.twocomp();
cout<<"\n\n\n\n\n";
}

