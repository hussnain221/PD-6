#include <iostream>
#include <string>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main()
 {
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter exam starting time (hour): ";
    cin >> examHour;
    cout << "Enter exam starting time (minutes): ";
    cin >> examMinute;
    cout << "Enter student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter student minutes of arrival: ";
    cin >> studentMinute;

    string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result << endl;

    return 0;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
 {

    int examTimeInMinutes = examHour * 60 + examMinute;
    int studentTimeInMinutes = studentHour * 60 + studentMinute;
    
    int timeDifference = studentTimeInMinutes - examTimeInMinutes;

    if (timeDifference > 0)
     { 
        string lateMessage = "Late";
        if (timeDifference < 60) {
            lateMessage += "\n" + to_string(timeDifference) + " minutes after the start";
        } else
         {
            int hoursLate = timeDifference / 60;
            int minutesLate = timeDifference % 60;
            lateMessage += "\n" + to_string(hoursLate) + ":" + (minutesLate < 10 ? "0" : "") + to_string(minutesLate) + " hours after the start";
        }
        return lateMessage;
    } 
    else if (timeDifference >= -30)
     { 
        string onTimeMessage = "On time";
        if (timeDifference < 0) 
        {
            int minutesBefore = -timeDifference;
            if (minutesBefore < 60)
             {
                onTimeMessage += "\n" + to_string(minutesBefore) + " minutes before the start";
            } 
            else 
            {
                int hoursBefore = minutesBefore / 60;
                int minutesRemaining = minutesBefore % 60;
                onTimeMessage += "\n" + to_string(hoursBefore) + ":" + (minutesRemaining < 10 ? "0" : "") + to_string(minutesRemaining) + " hours before the start";
            }
        }
        return onTimeMessage;
    } 
    else 
    { 
        string earlyMessage = "Early";
        int minutesEarly = -timeDifference;
        if (minutesEarly < 60) 
        {
            earlyMessage += "\n" + to_string(minutesEarly) + " minutes before the start";
        } else 
        {
            int hoursEarly = minutesEarly / 60;
            int minutesRemaining = minutesEarly % 60;
            earlyMessage += "\n" + to_string(hoursEarly) + ":" + (minutesRemaining < 10 ? "0" : "") + to_string(minutesRemaining) + " hours before the start";
        }
        return earlyMessage;
    }
}
