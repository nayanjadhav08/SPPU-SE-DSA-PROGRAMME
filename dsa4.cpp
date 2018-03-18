/*Department of Computer Engineering has student's club named 'Pinnacle
Club'. Students of Second, third and final year of department can be granted
membership on request. Similarly one may cancel the membership of club.
First node is reserved for president of club and last node is reserved for
secretary of club. Write C++ program to maintain club member‘s information
using singly linked list. Store student PRN and Name. Write functions to
a) ////Add and delete the members as well as president or even secretary.
               //b) Compute total number of members of club
               //c) Display members
d) Display list in reverse order using recursion
e) ////Two linked lists exists for two divisions. Concatenate two lists.
*/




// imp is recursion print 
// and passing the node as the argument 

#include<iostream>
#include<string.h>
using namespace std;

struct node
{
  int prn,mno;
   string name;
  node *next;

};
class club
{ public :

   int i,j,k;
   node *temp2=NULL,*temp3=NULL, *head1= NULL,*head2=NULL, *temp=NULL;   
    
   int n,no,mem=0;
   string nm;
    void rev();
   void getdata();
   void putdata();
   void presedent();
   void secretory();
   void delt();
   void rec(struct node*);
};
void club::secretory()
{

     int prn1; 
    string name1;  
  
      cout<<"\n ENter the new member information : ";
      cout<<"\n ENter prn no :"; 
      cin>>prn1;
      cout<<"\n Enter the name :";
      cin>>name1;
         if(head1==NULL)
             { 
                 node *p= new(struct node);
         
                 p->prn=prn1;
                 p->name=name1;
                 p->next=NULL;
                 head1=p;
             } 
          else
            {   temp=head1;
                 node *p= new(struct node);

                    p->prn=prn1;
                    p->name=name1;
                    p->next=NULL;
               while(temp->next->next!=NULL)                  //  1   2   3  p  4  
                 {
                      temp=temp->next;
                  }
                  temp2=temp->next;                      
                
                  p->next=temp2;
                  temp->next=p;  
                
            }
   
}


void club::getdata()
{  
     
      cout<<"\n Enter the how many memders do u want Ener";
      cin>>n;
  
    for(i=0;i<n;i++)
     {
          cout<<"\n Enter the PRN no : ";
          cin>>no;
          cout<<"\n Enter the name : ";
          cin>>nm ;
             
      node *p=new(struct node) ;
          mem++;
          p->prn=no;
          p->name=nm;
          p->mno=mem;
          p->next=NULL;
        if(head1==NULL)
            {
                 head1=p;
             } 
        else
           {
              temp= head1 ;
                while(temp->next!=NULL)
                   { 
                          temp=temp->next;
                     }
                temp->next=p;
           }
      }
 
}

void club::putdata()
{  int k=0 ;
    cout<<"\n Members of Club :";
      temp=head1;
     while(temp->next!=NULL)
         { 
               k++;
             cout<<"\nMember no :"<<k;      //temp->mno;
             cout<<"\nPrn NO    :"<<temp->prn;
             cout<<"\nName      :"<<temp->name;
             cout<<"\n\n";
           temp=temp->next;
               
         }
             k++;
             cout<<"\nMember no :"<<k;        // temp->mno;
             cout<<"\nPrn NO    :"<<temp->prn;
             cout<<"\nName      :"<<temp->name;
             cout<<"\n\n";
   
}

void club::presedent()
{   int prn1; 
    string name1;  
  
      cout<<"\n ENter the new presedent information : ";
      cout<<"\n ENter prn no :"; 
      cin>>prn1;
      cout<<"\n Enter the name :";
      cin>>name1;
         if(head1==NULL)
             { 
                 node *p= new(struct node);
         
                 p->prn=prn1;
                 p->name=name1;
                 p->next=temp;
                 head1=p;
             } 
          else
            {temp=head1;
               node *p= new(struct node);
         
                p->prn=prn1;
                p->name=name1;
                p->next=temp;
                head1=p;
            }
     
}


void club::rev()
{
    rec(head1);
  return ;

}

void club::rec(struct node *temp3)
{
    if(temp3==NULL)
 {
   return ;
  }   
     else
    {   rec(temp3->next);
      cout<<"\n Prn no :"<<temp3->prn;
      cout<<"\n name :"<<temp3->name ;
       cout<<"\n\n";
    }

}


void club::delt()
{  
   int ch;
   cout<<"\n What do u want to delete ";
   cout<<"1.Member \n2.Presedent \n3.Secretory";
   cout<<"\n Enter the choice :";
   cin>>ch;                                        
   node *temp1;
   temp=head1;
   switch(ch) 
 {
     case 1 :
            { 
                int q,c1;
                cout<<"\n Enter  th prn no no to delete : ";
                cin>>q;
         
                   
                      while(temp->next!=NULL)
                            {  temp1=temp->next;     //hold prevoius add 
                                 c1=temp1->prn;
                                   if(c1==q)
                                       {
                                           temp->next=temp1->next;
                                                   
                                              break;
                                        }
                                     else
                                       {
                                            temp=temp->next;     
                                       }

                                    
                             }
       
             }
           break;
     case 2 :
            {                                 
                    temp=head1;
                        head1=temp->next;  
             }
           break;
     case 3 :
            { 
                 temp=head1;
              while(temp->next!= NULL )                //1   2   3   4
                  {   temp1=temp;
                       temp=temp->next;
                  }  
                 temp1->next=NULL;
  
             }
           break;
default  :
      cout<<"\n Enter the correct choice :";
           break;

 }

}


int main()
{
   int ch,exit=0 ;

   club c;

     
  do{
          cout<<"\n1.getdata \n2.putdata \n3.delete \n4.presedent \n 6.rev \n 7.Exit \n" ;
          cin>>ch; 

     switch(ch)
      {
       case 1 :
             c.getdata();
                  break;
        case 2 :   
             c.putdata();
                  break;
        case 3 : 
             c.delt();
                  break;
          
        case 4 : 
             c.presedent();
                  break;
        case 5 :     
             c.secretory();
                    break;
         case 6 :
             c.rev();
                   break;
          case 7 :
             exit=1;
  
      }
    }while(exit==0);
  return 0;
}
