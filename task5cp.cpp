#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

main()
{
string fruit, day;
double quantity;
cout<<"Enter the fruit name: ";
cin>>fruit;
cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
cin>>day;
cout<<"Enter the quantity: ";
cin>>quantity;
if(day!="Monday" && day!="Tuesday" && day!="Wednesday" && day!="Thursday" && day!="Friday" && day!="Saturday" && day!="Sunday")
{
  cout<<"Error";
  return 0;
}
cout<< calculateFruitPrice(fruit, day, quantity);
}

float calculateFruitPrice(string fruit, string day, double quantity)
{
float amount;
if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" || day=="Saturday")
  {
    if(fruit=="banana")
      amount=quantity*2.5;

    if(fruit=="apple")
      amount=quantity*1.2;

    if(fruit=="orange")
      amount=quantity*0.85;

    if(fruit=="grapefruit")
      amount=quantity*1.45;

    if(fruit=="kiwi")
      amount=quantity*2.70;

    if(fruit=="pineapple")
      amount=quantity*5.50;

    if(fruit=="grapes")
      amount=quantity*3.85;
  }

if(day=="Sunday")
  {
    if(fruit=="banana")
      amount=quantity*2.70;

    if(fruit=="apple")
      amount=quantity*1.25;

    if(fruit=="orange")
      amount=quantity*0.90;

    if(fruit=="grapefruit")
      amount=quantity*1.60;

    if(fruit=="kiwi")
      amount=quantity*3.00;

    if(fruit=="pineapple")
      amount=quantity*5.60;

    if(fruit=="grapes")
      amount=quantity*4.20;
  }

return amount;  
}