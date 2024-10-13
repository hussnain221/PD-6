#include<iostream>
#include<string>
using namespace std;

string decideActivity(string temperature, string humidity);

main()
{
string temperature, humidity;
cout<<"Enter temperature (warm or cold): ";
cin>>temperature;
cout<<"Enter humidity (dry or humid): ";
cin>>humidity;
cout<<"Recommended activity: "<<decideActivity(temperature, humidity);
}

string decideActivity(string temperature, string humidity)
{
if(temperature=="warm" && humidity=="dry")
   return "Play tennis";

if(temperature=="warm" && humidity=="humid")
   return "Swim";

if(temperature=="cold" && humidity=="dry")
   return "Play basketball";

if(temperature=="cold" && humidity=="humid")
   return "Watch tv";
}
