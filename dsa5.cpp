/*Second year Computer Engineering class, set A of students like Vanilla Ice-
cream and set B of students like butterscotch ice-cream. Write C/C++
program to store two sets using linked list. compute and display-
i.//  Set of students who like either vanilla or butterscotch or both
ii.// Set of students who like both vanilla and butterscotch
iii. //Set of students who like only vanilla not butterscotch
iv. //Set of students who like only butterscotch not vanilla
v. //Number of students who like neither vanilla nor butterscotch

10:30 :

*/



#include<iostream>
using namespace std;

struct node
{
    int roll;
    node *next;

};
class ice
{
  int i,j,k;
  node *head=NULL ,*head1=NULL, *head2=NULL, *temp1=NULL,*temp=NULL, *temp2=NULL,*un=NULL,*in=NULL,*vani=NULL, *butt=NULL ;
public :
void getdata();
 void print();
void putdata(struct node*);
void uni();
void inter();
void vanilla();
void butter();
void noice();



};
// h1 vanila     // h2 butter
void ice::noice()
{  temp=head;
   temp1=un;
  temp2=head2;
         
        while(temp!=NULL)
          { 
             int flag=0;
              temp1=un; 
                    while(temp1!=NULL)
                       {
                            if(temp->roll==temp1->roll)
                               {
                                       flag=1;
                               }
                           temp1=temp1->next;
   				   }   
          if(flag==0 )
           {
                cout<<" "<<temp->roll;
	 	 }           

            temp=temp->next;
          }
 

}



void ice::uni()
{  node *qwe=NULL;
   un=head1;
 cout<<"\n union of the sets :";   
   temp1=head1;
     while(temp1!=NULL)
         {
             cout<<" "<<temp1->roll;
             temp1=temp1->next;
  
          }

node *temp4=NULL;
   temp1=NULL;
   temp2=head2;
int flag=0;
     temp=head1;
      while(temp2!=NULL)
         {  flag=0; 
              temp=head1;       
             while(temp!=NULL)
                {   
                      if(temp2->roll==temp->roll)
                          {
                                flag=1;
                                break;
                          }
                   temp=temp->next;
                 } if(flag==0)
                     {      temp4=in;
                          node *p=new(struct node);
                              p->roll=temp2->roll;
                           cout<<" "<<temp2->roll ;
                            
                                       if(temp4==NULL)
                      			    	{ 
                          				in=p; 
                       				} 
                               		else{
                                   	      while(temp4->next!=NULL)
                                    	         {
                                    	               temp4=temp4->next;
                               				 }
                                    	        temp4->next=p;
                         }
                      }
          temp2=temp2->next; 
         }

    temp1=un;
   while(temp1->next!=NULL)
      {
           temp1=temp1->next ;
      				
      }
   temp1->next=in ;
}

void ice::inter()
{
      temp2=head2;
    int flag=0;
     temp=head1;
      while(temp2!=NULL)
         {  flag=0; 
                       temp=head1;
             while(temp!=NULL)
                {   
                      if(temp2->roll==temp->roll)
                          {
                               cout<<"  "<<temp->roll;
                                break;
                          }
                   temp=temp->next;
                 } 
          temp2=temp2->next; 
         }



}

void ice::vanilla()
{
      temp2=head1;
    int flag=0;
     temp=head2;
      while(temp2!=NULL)
         {  flag==0; 
               temp=head2;        
             while(temp!=NULL)
                {  // cout<<"\n hii 1 ";
                      if(temp2->roll == temp->roll)
                          {  // cout<<"\n hii 3 ";
                              flag=1;
                                break;
                          }
                   temp=temp->next;
                 } 
              //cout<<"\n hii 11 ";
               if(flag==0)
                     {  //// cout<<"\n hii 2 ";
                            cout<<" "<<temp2->roll;
                      }
          temp2=temp2->next; 
         }

cout<<"\n\n\n";

}

void ice::butter()
{

   temp1=head1;//vanilla 
   temp2=head2;// butter 
  cout<<"\n ROll no who likes only BUtterscotch :";
 int flag=0;
        while(temp2!=NULL)
         {   flag=0;
               temp1=head1;
                  while(temp1!=NULL)
                        {
                                   if(temp1->roll==temp2->roll)
                                        {flag=1;
                                             break;
                                        }
                             temp1=temp1->next;
                        }
                     if(flag==0)
 					{
                               cout<<"  "<<temp2->roll;;

                          }
                 temp2=temp2->next;
          }


  cout<<"\n \n ONly butter :";
 node *temp3=NULL;     
 		temp3=in;  
      while(temp3!=NULL)
		{
               cout<<"  "<<temp3->roll; 
                temp3=temp3->next;
		}

}

void ice::getdata()
{
    int rno,n ;
 
    cout<<"\n ENter how many students in se :";
    cin>>n;
  
    for(i=0;i<n;i++)
        {
            node *p=new node ;
           
              p->roll= i+1 ;

                if(head==NULL) 
                   { 
                       head=p;
                   }
                 else 
                   {
                       temp=head;
                           while(temp->next!=NULL)
                              {
                                temp=temp->next;
                               }

                             temp->next=p ;
          
                    }
        }

    cout<<"\n ENter how many students in se likes vanilla icecream :";
    cin>>n;
   temp=NULL;
   int rn;
    for(i=0;i<n;i++)
        {  
            node *p=new node ;
          cout<<"\n Enter the roll no ";
          cin>>rn ;
              p->roll=rn ;

                if(head1==NULL) 
                   { 
                       head1=p;
                   }
                 else 
                   {
                       temp=head1;
                           while(temp->next!=NULL)
                              {
                                temp=temp->next;
                               }

                             temp->next=p ;
          
                    }
        }
   
 
    cout<<"\n ENter how many students in se likes BUtterscotch icecream :";
    cin>>n;
   temp=NULL;
    for(i=0;i<n;i++)
        {
            node *p=new node ;
           cout<<"\n Enter the roll no . ";
            cin>>rn ;  
              p->roll= rn ;
   
                if(head2==NULL) 
                   { 
                       head2=p;
                   }
                 else 
                   {
                       temp=head2;
                           while(temp->next!=NULL)
                              {
                                temp=temp->next;
                               }

                             temp->next=p ;
          
                    }
        }
  

}
void ice::print()
{
   putdata(head);
    return ;
}



void ice::putdata(struct node *temp3)
{ 
   if(temp3==NULL)
     {
      return ;
     }   
  else
      {
          cout<<"\n "<<temp3->roll ;
          putdata(temp3->next);
       }
}
int main()
{
   ice i;

  i.getdata();
  // i.print();
 cout<<"\n\n\n";
  i.uni();
 cout<<"\n intersection :";
  i.inter();
  cout<<"\n only van  :";
i.vanilla();
i.butter();

cout<<"\n\n\n\n";
i.noice(); 
return 0;
}
