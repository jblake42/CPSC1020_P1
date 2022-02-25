#include <iomanip>
#include <iostream>
#include "Date.h"
#include "Date.cpp"
#include <string>

using namespace std; 
int main()
{  
    //declaring needed variables
    //int quarantineLength; 
    int userDay, userMonth, userYear;
    //int vaccineDay, vaccineMonth, vaccineYear;

    //Date dateExposed, dateSecondDose;
    string testStatus; 
    string exposeStatus, vaccineStatus; 
    //getting user data
    cout << "Test Result: ";
    cin >> testStatus;

    if(testStatus == "postive")
    {
        Date datePositive;
        cout << "Month tested positive: ";
        cin >> userMonth;
        datePositive.setMonth(userMonth);
        cout << "Day tested positive: ";
        cin >> userDay;
        datePositive.setDay(userDay);
        cout << "Year tested positive: ";
        cin >> userYear;
        datePositive.setYear(userYear);
        cout << "5 day quarantine" << endl;
        cout << datePositive.getMonth() << datePositive.getDay() << datePositive.getYear();
    }
     /*
     else
     {
        cout << "Exposed to positive case: ";
        cin >> exposeStatus;
        if(exposeStatus == "no")
        {
            //assign quarantine length to 0
            //no quarantine
            
        }
        else
        {
            //asking user exposed date
            cout << "month exposed";
            cin >> userMonth;
            cout <<"day exposed"; 
            cin >> userDay;
            cout << "year exposed";
            cin >> userYear;
            
            //asking user vaccine date
            cout<< "second dose recieved? "
            cin >> vaccineStatus; 

            if(vaccineStatus == "no")
            {
                //cout << "Vaccine status at time of exposure: not fully vaccinated"
                // assign isolation length to 10 days 
            }
            else 
            {
                cout << "month vaxxed";
                cin >> vaccineMonth;
                cout <<"day vaxxed"; 
                cin >> vaccineDay;
                cout << "year vaxxed";
                cin >> vaccineYear;

                //call calc days and see if its been two weeks
                if(twoWeeks == true)
                {
                    //assign quarantine date to 5 days
                    // calc 5 days from exposure and print date
                }
                else
                {
                    //assign quarantine date to 10 days
                    // calc 10 days from exposure and print date 
                }
            }
                

        }
     }
     */
}