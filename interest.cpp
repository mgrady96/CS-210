//Mikayla Grady
//CS-210

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //Variables
   float initInv, monDep, AnuInt, months, years;
   //Variables
   float totalAm, intAmt, yearTotInt;


   //User inputs 
   cout << "********************************\n";
   cout << "********** Data Input **********\n";
   cout << "Initial Investment Amount: $";
   cin >> initInv;
   cout << "Monthly Deposit: $";
   cin >> monDep;
   cout << "Annual Interest: %";
   cin >> AnuInt;
   cout << "Number of years: ";
   cin >> years;
   months = years * 12;


   //Total
   totalAm = initInv;

   //No additional monthly payments
   cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\t\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";


   for (int i = 0; i < years; i++) {

       //Yearly interest
       intAmt = (totalAm) * ((AnuInt / 100));

       //End of year total
       totalAm = totalAm + intAmt;

       //Results
       cout << (i + 1) << "\t\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t\t$" << intAmt << "\n";

   }

   totalAm = initInv;

    //Including additional payments
   cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";

   for (int i = 0; i < years; i++) {

    //Yearly interest at start 
       yearTotInt = 0;

       for (int j = 0; j < 12; j++) {

           //Monthly interest
           intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

           //Totals
           yearTotInt = yearTotInt + intAmt;

           //Totals
           totalAm = totalAm + monDep + intAmt;

       }

       //Results table
       cout << (i + 1) << "\t\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";


   }

   return 0;
}