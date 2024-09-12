// Sarah Naji sarah-naji 801-22-7451
#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){ 
    // Purpose of program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater. << endl;


    // Variables constant
    string movieName;
    double adult_tickets, child_tickets;

    // Constants of the prices of the tickets and theater's percentage
    double ADULT_TICKET_PRICE = 10.00;
    double CHILD_TICKET_PRICE = 6.00;
    double THEATER_PERCENTAGE = 0.20;

    // Get the input of the users
     cout << "Enter the name of the movie: ";
     getline(cin, movieName);

     cout << "Enter the amount of adult tickets sold: ";
     cin >> adult_tickets;

     cout << "Enter the amount of child tickets sold: ";
     cin >> child_tickets;

     // Calculate the profits
     double adultTotal = ADULT_TICKET_PRICE * adult_tickets; // Total adult tickets sold
     double childTotal = CHILD_TICKET_PRICE * child_tickets; // Total child tickets sold
     
     // Calcular the Gross Profit
    double grossProfit = adultTotal + childTotal;

    // Calculate the Net Box Office Profit
    double netProfit = grossProfit * theaterPercentage;

    // Calculate the Quantity/ Amount Paid to the Distributor
    double amountDistributor = grossProfit - netProfit;
    
    cout << endl;
    cout << fixed << showpoint << setprecision(2);


    cout << left << setw(30) << "Movie Name:" << "\"" << movieName << "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold:" << setw(5) << adult_tickets << endl;
    cout << left << setw(30) << "Child Tickets Sold:" << setw(5) << child_tickets << endl;
    cout << left << setw(30) << "Gross Box Office Profit:" << "$ " << setw(9) << grossBoxOfficeProfit << endl;
    cout << left << setw(30) << "Net Box Office Profit:" << "$ " << setw(9) << netBoxOfficeProfit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" << "$ " << setw(9) << amountPaidToDistributor << endl;

    return 0;
}
