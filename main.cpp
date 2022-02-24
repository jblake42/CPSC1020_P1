#include <iomanip>
#include <iostream>
#include "Date.h"

using namespace std; 
int main()
{  
    //declaring needed variables
    int quarantineLength; 
    int userDay, userMonth, userYear;
    int vaccineDay, vaccineMonth, vaccine Year;
    char testStatus; 
    char exposeStatus, vaccineStatus; 
    //getting user data
    cout << "Test Result: \n";
    cin >> testStatus;
    //if(testStatus == "postive")
     /*
     {
        // ask date they tested postive
        // add 5 days for qurantine
        //qurantine for 5 days
        
     }
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