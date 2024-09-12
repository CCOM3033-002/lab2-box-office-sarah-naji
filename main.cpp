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
    
