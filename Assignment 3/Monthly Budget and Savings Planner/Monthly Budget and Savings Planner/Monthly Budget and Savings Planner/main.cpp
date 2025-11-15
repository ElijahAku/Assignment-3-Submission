//
//  main.cpp
//  Monthly Budget and Savings Planner
//
//  Created by Elijah Akumbom on 11/14/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << setfill('*');
    cout << setw(60) << " Welcome to the Monthly Budget & Savings Planner " << setw(10) << "*" << endl;
    cout << setfill('*') << endl;
    
    double MonthlyIncome = 0.00;
    double MortgageCost = 0.00;
    double UtilitiesCost = 0.00;
    double GroceriesCost = 0.00;
    double TransportationCost = 0.00;
    double SavingsGoalPercentage = 0.00;
    
    cout << "Enter Monthly Income:  $";
    cin >> MonthlyIncome;
    cout << "Enter Mortgage Cost:   $";
    cin >> MortgageCost;
    cout << "Enter Utilities Cost:  $";
    cin >> UtilitiesCost;
    cout << "Enter Groceries Cost:  $";
    cin >> GroceriesCost;
    cout << "Enter Transportation Cost:  $";
    cin >> TransportationCost;
    cout << "Enter Savings Goal (Percentage of income):  %";
    cin >> SavingsGoalPercentage;
    
    cout << endl;

    double TotalExpenses = MortgageCost + UtilitiesCost + GroceriesCost + TransportationCost;
    double SavingsGoalDollars = (SavingsGoalPercentage / 100) * MonthlyIncome;
    double RemainingBalance = MonthlyIncome - TotalExpenses - SavingsGoalDollars;
    
    cout << setfill('=');
    cout << setw(40) << " MONTHLY BUDGET REPORT " << setw(20) << "=" << endl;
    cout << setfill('=') << endl;
    
    cout << "Monthly Income: $" << MonthlyIncome << endl;
    
    cout << setfill('-') << setw(40) << "-" << endl;
    
    cout << "Mortgage:       $" << MortgageCost << endl;
    cout << "Utilities:      $" << UtilitiesCost << endl;
    cout << "Groceries:      $" << GroceriesCost << endl;
    cout << "Transportation: $" << TransportationCost << endl;
    
    cout << setfill('-') << setw(40) << "-" << endl;
    
    cout << setw(30) << setfill('.') << left << "Total Expenses:" << "$" << fixed
    << setprecision(2) << TotalExpenses << endl;
    
    cout << "Total Expenses:          $" << TotalExpenses << endl;
    
    cout << "Savings Goal (%15):      $" << SavingsGoalDollars << endl;
    cout << "Remaining Balance:       $" << RemainingBalance << endl;

    cout << setfill('=') << setw(40) << "=" << endl;
    
    cout << "Smart planning leads to financial freedom!" << endl;
    
    return 0;
}
