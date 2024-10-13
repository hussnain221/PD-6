#include<iostream>
using namespace std;

float cellularBill(char service, char time, float minutes);

main()
{
char service;
float minutes;
char time;
cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>>service;

string serviceType;

if(service=='r' || service=='R')
   serviceType="Regular";

else if(service=='p' || service=='P')
  {
   serviceType="Premium";
   cout<<"Enter time of the call (D/d for day, N/n for night): ";  
   cin>>time; 
  }

else
  {
   cout<<"Invalid Service Type.";
   return 0;
  }

cout<<"Enter the number of minutes used: ";
cin>>minutes;
cout<<"Service type: "<<serviceType<<endl;
cout<<"Total Minutes Used: "<<minutes<<" minutes"<<endl;
cout<<"Amount Due: $"<<cellularBill(service, time, minutes);
}

float cellularBill(char service, char time, float minutes)
{
float amount=0;
if(service=='r' || service=='R')
  {
   if(minutes<=50)
      amount=10;

   else
    {
      float over50=minutes-50;
      amount=10+(over50*0.2);
    }
  }

if(service=='p' || service=='P')
  {
   if(time=='d' || time=='D')
     {
       if(minutes<=75)
          amount=25;

       else{
          float over75=minutes-75;
          amount=25+(over75*0.1);}
     }

   if(time=='n' || time=='N')
     {
       if(minutes<=100)
          amount=25;

       else{
          float over100=minutes-100;
          amount=25+(over100*0.05);}
     }
  }
return amount;
}