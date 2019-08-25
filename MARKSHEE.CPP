#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
char *name;
float totalmax;
float percentage;

float bee,em,bme, ep,fcp;

cout<<"Enter student name :: "<<endl;
gets(name);
cout<<"Enter Father name ::  "<<endl;
gets(name);
cout<<"Enetr Bee max ::"<<endl;
cin>>bee;
cout<<"Enter Bme max ::"<<endl;
cin>>bme;
cout<<"Enter Ep max  ::"<<endl;
cin>>ep;
cout<<"Enetr em max  ::"<<endl;
cin>>em;
cout<<"Enter fcp max  ::"<<endl;
cin>>fcp;
   totalmax=bee+bme+ep+em+fcp;
  percentage= (totalmax)/5;
  cout<<"Total max  ::"<<totalmax <<endl;
  cout<<"Percentage  ::"<<percentage <<endl;
  {
  if(percentage>75)
  {
  cout<<"Grade A and you are pass "<<endl;
  }
  if(percentage>60 && percentage<75)
  {
  cout<<"Grade B and you are pass "<<endl;
  }
  if(percentage>45 && percentage<60)
  {cout<<"Grade C and you are pass "<<endl;
  }
  if(percentage>33 && percentage<45)
  { cout<<"Grade  D and you are pass "<<endl;
  }

  if(percentage>0 && percentage<33)
  { cout<<"Grade e  and you are fail "<<endl;
  }

 }
getch();
}