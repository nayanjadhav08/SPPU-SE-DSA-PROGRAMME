//In any language program mostly syntax error occurs due to
//unbalancing delimiter such as (),{},[]. Write C++ program using stack
//to check whether given expression is well parenthesized or not.



#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#define max 5
class exp
{ int top,top1,len;
  int flag,flag1;
  char ch,e[max];
  char st[max];
public :
exp()
{flag1=0;
 len=0; 
 flag=0;
 top=-1;
}
void push(char c);
char pop();
int empty();
int full();
//void display();
void getdata();
void display();

};

int exp::full()
{
	if(top==max)
	{
		return 1;
	}
else
return 0;
}

int exp::empty()
{
	if(top==-1)
	{
		return 1;
	}
else
return 0;
}

void exp::push(char c)
{ int ch;
   ch=full();
if(ch==0) 
	{top++;
	
st[top]= c;
}
else
{cout<<"\n it is full";
  exit(0);}
}

char exp::pop()
{
  char q;
     q=st[top];
	top--;
return q;

}

void exp::display()
{
   for(int p=0 ; p<top;p++)
{
     cout<< "st = "<<st[p];

}


}
void exp::getdata()
{
  
 cout<<"\n Enter the expresion : ";
	cin>>e;
int i=0;
char temp;
while(e[i]!='\0')
{
  len++;
i++;
}
cout<<"lenth = "<<len;

	for(int j=0;j<i;j++)
		{ //cout<<"\n top == "<<top;
            //cout<<"\n flag1 == "<<flag1;
		  ch=e[j];			
		
			if(ch=='{' || ch=='[' || ch=='(')
			  { 
   			      push(e[j]);
				flag++ ;
			  }
		
  if(ch==')')	
	{
		temp=pop() ;
		  if(temp=='(')
		    { flag1++;
			  continue ;	
		    }
		else 
			{ flag1-- ;
			   cout<<"\n '(' Not found " ;
  			   //cout<<"\n Expression not parenthisized "<<endl;
				break;
			}
	}

if(ch==']')
 {
    temp=pop();
    if(temp=='[')
	  {flag1++;
		continue;
	  }
	else
		{ flag1-- ;
			cout<<"\n '[' Not found "<<endl;
			//cout<<" Expression is not well parenthised ";
			break;
		}
	
 }

if(ch=='}')
 {
    temp=pop();
    if(temp=='{')
	  {flag1++;
		continue;
	  }
	else
		{  flag1-- ;
			cout<<"\n '{' Not found "<<endl;
			//cout<<" Expression is not well parenthsized ";
			break;		
		}
	
 }
	   	
		}

//flag1=flag1/2;
//cout<<"flag 1 == "<<flag1<<"   top=="<<top<<"    flag=="<<flag;
if(flag1==flag)
{
	cout<<"\nExpression is WELL parenthsized\n";
}
else
{
  cout<<"\n NOt parentisez\n";
}

}


int main()
{
	exp e;

e.getdata();
e.display();
return 0;

}
