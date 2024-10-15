#include <iostream>
#include <string>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

int main() 
{
    string yearType;
    int holidays, hometownWeekends;

    cout << "Enter year type (leap/normal): ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends traveling to hometown: ";
    cin >> hometownWeekends;

    int totalGames = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << "Total volleyball games played: " << totalGames << endl;

    return 0;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
 {
     int totalWeekends = 48;
    
    int weekendsInSofia = totalWeekends - hometownWeekends;

    int gamesInSofia = weekendsInSofia * 3 / 4; 
    gamesInSofia += 1; 


    int gamesOnHolidays = (holidays * 2) / 3; 

    
    int totalGames = gamesInSofia + gamesOnHolidays + hometownWeekends; 

    
    if (yearType == "leap") 
    {
        totalGames = (totalGames * 1.15); 
    }

    return totalGames;
}
