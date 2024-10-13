#include<iostream>
#include<string>
using namespace std;

string findZodiacSign(int day, string month);

main()
{
int day;
string month;
cout<<"Enter the day of birth: ";
cin>>day;
cout<<"Enter the month of birth (e.g., January, February): ";
cin>>month;
cout<<"Zodiac Sign: "<<findZodiacSign(day, month);
}

string findZodiacSign(int day, string month)
{
string sign;
if(month=="March")
   {
    if(day>=21 && day<=31)
        sign="Aries";

    if(day>=1 && day<=20)
        sign="Pisces";    
   }

if(month=="April")
   {
    if(day>=1 && day<=19)
        sign="Aries";

    if(day>=20 && day<=30)
        sign="Taurus";    
   }

if(month=="May")
   {
    if(day>=1 && day<=20)
        sign="Taurus";

    if(day>=21 && day<=31)
        sign="Gemini";    
   }

if(month=="June")
   {
    if(day>=1 && day<=20)
        sign="Gemini";

    if(day>=21 && day<=30)
        sign="Cancer";    
   }

if(month=="July")
   {
    if(day>=1 && day<=22)
        sign="Cancer";

    if(day>=23 && day<=31)
        sign="Leo";    
   }

if(month=="August")
   {
    if(day>=1 && day<=22)
        sign="Leo";

    if(day>=23 && day<=31)
        sign="Virgo";    
   }

if(month=="September")
   {
    if(day>=1 && day<=22)
        sign="Virgo";

    if(day>=23 && day<=30)
        sign="Libra";    
   }

if(month=="October")
   {
    if(day>=1 && day<=22)
        sign="Libra";

    if(day>=23 && day<=31)
        sign="Scorpio";    
   }

if(month=="November")
   {
    if(day>=1 && day<=21)
        sign="Scorpio";

    if(day>=22 && day<=30)
        sign="Sagittarius";    
   }

if(month=="December")
   {
    if(day>=1 && day<=21)
        sign="Sagittarius";

    if(day>=22 && day<=31)
        sign="Capricorn";    
   }

if(month=="January")
   {
    if(day>=11 && day<=19)
        sign="Capricorn";

    if(day>=20 && day<=31)
        sign="Aquarius";    
   }

if(month=="February")
   {
    if(day>=1 && day<=18)
        sign="Aquarius";

    if(day>=19 && day<=29)
        sign="Pisces";    
   }

return sign;
}