#include <iostream>
#include <string>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

int main()
 {
    string month;
    int numberOfStays;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> numberOfStays;

    string prices = calculateHotelPrices(month, numberOfStays);
    cout << prices << endl;

    return 0;
}

string calculateHotelPrices(string month, int numberOfStays)

{
    float studioPrice;
    float apartmentPrice;

    if (month == "May" || month == "October") 
    {
        studioPrice = 50.0;
        apartmentPrice = 65.0;
    } 
    else if (month == "June" || month == "September")
     {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    } 
    else if (month == "July" || month == "August") 
    {
        studioPrice = 76.0;
        apartmentPrice = 77.0;
    }
     else 
    {
        return "Invalid month";
    }


    float totalStudioPrice = studioPrice * numberOfStays;
    if (numberOfStays > 14)
     {
        totalStudioPrice *= 0.70; 
    } else if (numberOfStays > 7) 
    {
        totalStudioPrice *= 0.95; 
    } else if (numberOfStays > 14) 
    {
        totalStudioPrice *= 0.80;
    }


    float totalApartmentPrice = apartmentPrice * numberOfStays;
    if (numberOfStays > 14)
     {
        totalApartmentPrice *= 0.90; 
    }

   
    string result = "Apartment:$ " + to_string(totalApartmentPrice)+"\n";
    result += "Studio:$ "+ to_string(totalStudioPrice);
    
    return result;
}
