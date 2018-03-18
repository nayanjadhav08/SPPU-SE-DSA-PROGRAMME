/*In Second year Computer Engineering class of M students, set A of students play cricket and
set B of students play badminton. Write C/C++ program to find and display-
i.
Set of students who play either cricket or badminton or both
ii.
Set of students who play both cricket and badminton
iii. Set of students who play only cricket
iv.
Set of students who play only badminton
v.
Number of students who play neither cricket nor badminton
*/




#include<iostream>
using namespace std;
#define max 30
class student
{
   int m,n[max],setA[max],setB[max],setC[max];
   int i,j,k,c1;
    int c,b;
   public :

     void getdata();
     void uni();
     void inter();
     void oncrick();
     void onbad();
     void nogame();
     void putdata();

};


void student::getdata()
{

    cout<<"\n Enter the total students in the class : " ;
    cin>>m ;
       for(i=0;i<m;i++)
          {  
              n[i]=i+1;  
          }
     cout<<"\n Enter the total of student who play's cricket : ";
      cin>>c;

          for(j=0;j<c;j++)
            {
               setA[j]=j+2;   
            }
  
       cout<<"\n Enter the total of student who play's badminton : ";
      cin>>b;

          for(j=0;j<b;j++)
            {
               setB[j]=j+3;   
            }


}

void student::putdata()
{  cout<<"\n All roll no: ";
   for(i=0;i<m;i++)
          {  
                cout<<"  "<<n[i];
          }   
    
   cout<<"\n cricket ";
     for(i=0;i<c;i++)
          {  
              cout<<"  "<<setA[i];  
          }

    cout<<"\n BAdminton ";
     for(i=0;i<b;i++)
          {  
              cout<<"  "<<setB[i];  
          }cout<<"\n";
}

void student::uni()
{ 

  cout<<" \n union :"  ;
   int flag1=0;
     c1=0;
   for(j=0;j<c;j++)
    {
       setC[c1]=setA[j];                 // 1st array copied
          c1++;
     }

   for(j=0;j<b;j++)
    {
       setC[c1]=setB[j];                 // 1st array copied
          c1++;
     }
   
 /*  for(i=0;i<b;i++)
     {  
         for(j=0;j<c;j++)
            {
                if(setB[i]==setA[j])
                   {
                       flag1=1;  
                      cout<<"\n flag ="<<flag1;
                   }  
               else if(setB[i]!=setA[j])
                  {
                     setC[c1]=setB[i];
                     c1++;
                      cout<<"\n c1= "<<c1 ;
                      
                    }    
             }//flag1=0;
          
     }*/
//for deleting repetation 
 for(i=0;i<c1;i++)
   {
      for(j=i+1;j<c1;)
         {
             if(setC[i]==setC[j])
               {
                    for(k=j;k<c1;k++)
                       {
                           setC[k]=setC[k+1];
                           
                       }c1--;
               }
              else 
                     j++;
          }
   }

   

    cout<<"\n";
cout<<"\n union set ";
   for(k=0;k<c1;k++)
     {
         cout<<" "<<setC[k];

    }    cout<<"\n";

}


void student::oncrick()
{
   int flag=0;
      cout<<"\n  only cricket  ";
        for(i=0;i<c;i++)
          {
               for(j=0;j<b;j++)
                   {
                     if(setA[i]==setB[j])
                       {
                          flag=1;
                          break;
                       }     
                  }
            if(flag==0)
             {
              cout<<" " <<setA[i];
             }flag=0;
         }
        
 }

void student::onbad()
{
   int flag=0;
   cout<<"\n only badminton";
    for(i=0;i<b;i++)
      {
          for(j=0;j<c;j++)
             {
                 if(setA[j]==setB[i])
                    {
                       flag=1;
                    }
             }
               if(flag==0)
            {
                  cout<<" "<<setB[i];
            }flag=0;
        }
      

}

void student::inter()
 {
     cout<<"\n intersection :";
     for(i=0;i<c;i++)
        {
           for(j=0;j<b;j++)
           {
              if(setA[i]==setB[j])
                 {cout<<" "<<setA[i];}
            }
        }

}

void student::nogame()
{
   cout<<" \n PLays no game :" ;
    int flag=0;
   for(i=0;i<m;i++)
     { 
        for(j=0;j<c1;j++)
            {  
                 if(n[i]==setC[j])
                   {    flag=1;
                        break; 
                   }
             } if(flag==0)
               {
                   cout<<"  "<<n[i];
               }flag=0; 
     }
cout<<"\n";





}
int main()
{
   student s;

   s.getdata();
   s.putdata();
   s.inter();
   s.oncrick();
   s.onbad();
    s.uni();
    s.nogame();
return 0;


}
