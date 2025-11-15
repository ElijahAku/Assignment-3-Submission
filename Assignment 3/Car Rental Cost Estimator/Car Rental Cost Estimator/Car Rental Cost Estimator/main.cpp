//
//  main.cpp
//  Car Rental Cost Estimator
//
//  Created by Elijah Akumbom on 11/13/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
        
    cout << setfill('*');
    cout << setw(50) << " Welcome to the Car Rental Cost Estimator " << setw(8) << "*" << endl;
    cout << setfill('*') << endl;

    int RentalDays = 0;
    int MilesDriven = 0;
    int MileageAllowancePerDay = 0;
    
    double DailyRentalRate = 0.00;
    double InsurancePerDay = 0.00;
    double OverMileageChargePerMile = 0.00;
    
    cout << "Enter Rental Days: ";
    cin >> RentalDays;
    cout << "Enter Miles Driven: ";
    cin >> MilesDriven;
    cout << "Enter Mileage Allowance Per Day: ";
    cin >> MileageAllowancePerDay;
    
     
    
    cout << endl;
    
    double BaseCost = RentalDays * DailyRentalRate;
    double InsuranceCost = RentalDays * InsurancePerDay;
    double MileageLimit = RentalDays * MileageAllowancePerDay;
    int ExtraMiles = MilesDriven - MileageLimit;
    double OverageFee = ExtraMiles * OverMileageChargePerMile;
    double TotalCost = BaseCost + InsurancePerDay + OverageFee;
    
    cout << endl;
    
    cout << setfill('=');
    cout << setw(40) << " CAR RENTAL INVOICE " << setw(20) << "=" << endl;
    cout << setfill('=') << endl;
    
    cout << setfill(' ');
    setprecision(2);
    cs
    cout << "Rental Days:          " << RentalDays << endl;
    cout << "Daily Rate:         $ " << DailyRentalRate << endl;
    cout << "Insurance per Day:  $ " << InsurancePerDay << endl;
    
    cout << setfill('-') << setw(40) << "-" << endl;
    
    cout << "Base Cost:       $ " << BaseCost << endl;
    cout << "Insurance Cost:  $ " << InsuranceCost << endl;
    cout << "Mileage Limit:     " << MileageLimit << endl;
    cout << "Miles Driven:      " << MilesDriven << endl;
    cout << "Extra Miles:       " << ExtraMiles << endl;
    cout << "Overage Fee:     $ " << OverageFee << endl;

    cout << setfill('-') << setw(40) << "-" << endl;
                 
    cout << "Total Cost: $ " << TotalCost << endl;
    
    return 0;
}
