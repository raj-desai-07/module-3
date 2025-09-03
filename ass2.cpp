#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Event {
public:
    string EventName;
    string Gaustname;
    string Gaustname1;
    int noofguest;
    int minute;
};

int main() {

    // Rate card constants
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

    Event e1;

    cout << "*****************EVENT MANAGEMENT SYSTEM***************" << endl;
    cout << "Enter The Name Of Event: ";
    cin >> e1.EventName;
    cout << "Enter your First Name: ";
    cin >> e1.Gaustname;
    cout << "Enter your Last Name: ";
    cin >> e1.Gaustname1;
    cout << "Enter Your No of Guests: ";
    cin >> e1.noofguest;
    cout << "Enter Your Minutes: ";
    cin >> e1.minute;

    cout << "\n*********EVENT ESTIMATE FOR : " << e1.Gaustname << " " << e1.Gaustname1 << "***********" << endl;

    //  Number of servers required
    int servers = ceil(e1.noofguest / 20.0);
    cout << "Number Of Servers : " << servers << endl;

    //  Cost for one server
    double Cost1 = (e1.minute / 60) * CostPerHour;
    double Cost2 = (e1.minute % 60) * CostPerMinute;
    double CostForOneServer = Cost1 + Cost2;
    cout << "Cost for Server: " << CostForOneServer << endl;

    //  Total cost for food
    double TotalFoodCost = e1.noofguest * CostOfDinner;
    cout << "Cost for Food: " << TotalFoodCost << endl;

    //  Average cost per person
    double AverageCost = TotalFoodCost / e1.noofguest;
    cout << "Average Cost Per Person : " << AverageCost << endl;

	cout << "\n" << endl;
    //  Total cost 
    double TotalCost = TotalFoodCost + (CostForOneServer * servers);
    cout << "Total Cost: " << TotalCost << endl;
    
//    cout << "\n" << endl
    //  Deposit amount 
    double DepositAmount = TotalCost * 0.25;
    cout << "Please deposit a 25% amount to reserve the event." << endl;
    cout << "Deposit Needed: " << DepositAmount << endl;

    return 0;
}
