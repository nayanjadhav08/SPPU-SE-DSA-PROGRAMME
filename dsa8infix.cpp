//8. Implement C++ program for expression conversion as infix to postfix and its evaluation using   stack based on given conditions  
//i. Operands and operator, both must be single character.  
//ii. Input Postfix expression must be in a desired format.   
//iii. Only '+', '-', '*' and '/ ' operators are expected.

#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

class intopo
{
   string infix, postfix ;
  int i,j,k,top,top1;
  char stk[20];
  int stk1[20];
 public :

intopo()
{
top=-1;
top1=-1;
}
void push(char a)
{
   top++;
stk[top]=a;

}
void push1(int a)
{
   top1++;
stk1[top1]=a;

}

void eval();
char pop()
{
char c=stk[top];
top--;
return c;

}
int pop1()
{
int c=stk1[top1];
top1--;
return c;

}

int isfull()
{
  if(top==20)
	{
   		return 1;
     }

  else 
 	return 0;
}

int isempty()
{
if(top==-1)
	{
   		return 1;
     }

  else 
 	return 0;

}


void getexp()
{
  cout<<"\n Enter the Infix expression : ";
  cin>>infix;

}

void put()
{
   cout<<"\n INFIX expression is :";
  cout<<infix;

}

void conversion();

int isoperator(char i)
{
    if( i=='+' || i=='-' || i=='*' || i=='/' || i=='('|| i==')' )
		{
 			return 1;
           }
   else 
    return 0;
}

int isoperand(int i)
{
    if( i>='0' || i<= '9' )
		{
 			return 1;
           }
   else 
    return 0;
}

int pref(char o)
{
     switch(o)
{
   case '+' :
		return 1;
		break;
    case '-' :
		return 1;
		break;
    case '*' :
		return 3;
		break;
     case '/' :
		return 3;
		break;
     default :
	cout<<"\n Operartor not found .`";
}


}


};

void intopo::conversion()
{  char s;
    for(i=0 ; i<infix.size() ; i++ )
	  { 
	      if(isoperator(infix[i]) ==1 )
             {  
 			 if(infix[i]=='(')
				{ push(infix[i]); 
										
				}
                else if(infix[i]==')')
				{
					while(stk[top] !='(')
					{
						s=pop();
						postfix =postfix + s;
                             
					}	
                      pop();
				}
         		 else if(isempty() == 1)
				{
					push(infix[i]);
				}
	
  			 else if(pref(stk[top]) > pref(infix[i]))
				{
					s= pop();
 					postfix=postfix + s;	
					push(infix[i]);
				}
                else if(pref(stk[top]) < pref(infix[i]))
				{
				     push(infix[i]);
					//while(isempty()!=1)
				
					//	s=pop();
					//	postfix=postfix + s; 
					//}
				}
			 else if(pref(stk[top]) == pref(infix[i]))
				{
				    s=pop(); 
                        push(infix[i]);
                         postfix=postfix+s;
		
				}
             }
		else if(isoperand(infix[i]) ==1 )
             {
  			postfix=postfix + infix[i];	
             }
	  cout<<"\npostdix ="<<postfix;}

while(isempty() !=1)
{  char m;
   s= pop();
cout<<"s="<<s;
if(pref(stk[top]) == pref(s))
{  m=pop();
  postfix= postfix + m;
 postfix= postfix + s;
  
}

// postfix=postfix + s;
}

cout<<"\npostdix ="<<postfix;
}

void intopo::eval()
{
 
 int op1 , op2 ,ans ;
 char ch;
 int k;
stack <int> st;
 
   for(i=0 ; i<postfix.size() ; i++)
	{  
		if(isoperator(postfix[i]) == 1 )
			{  cout<<"\n pos i : "<<postfix[i];
				ch=postfix[i];
                     op1=pop1();
				op2=pop1() ;
        cout<<"\nop 1 :"<<op1<<"   op2  :	"<<op2;	     
                 op1 =op1-48;
                 op2 =op2-48;

                
             cout<<"\nop 1 :"<<op1<<"   op2  :	"<<op2;	
				 switch(ch){
                         case '+' :
                                ans=op1+op2;
                   cout<<"\n Ans ="<<ans;
 							break;
					case '-' :
                                ans=op1-op2;
 							break;
		      		case '*' :
                                ans=op1*op2;
                                     cout<<"\n Ans ="<<ans;
 							break;
					case '/' :
                                ans=op1/op2;
 							break;
                        default :
                   cout<<"NOT avilable :";
             }
				
                      push1(ans+48);
       cout<<"\n top now "<<stk1[top1];
		   	}
         else if(isoperand(postfix[i]) == 1)
			{    //cout<<"\n pos i in : "<<postfix[i];
					k=postfix[i];				
					push1(k);		
			}
//	cout<<"\n top :"<<st.top();
}
cout<<"\n top1 = "<<top1;  
cout<<"\n  Evalution of the Postfix : ";
int ans1=pop1()-48;
cout<<" "<<ans1;

}

int main()
{ //system("clear");
  
	intopo i ; 
 
i.getexp();
i.conversion();
i
.eval();


}
