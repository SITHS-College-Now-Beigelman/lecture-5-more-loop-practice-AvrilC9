// Avril Cao
// October 7, 2024
// Lecture 5

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    double moneyStart;
    double transactionsTotal;
    double transactionsAmount;
    string transactionsType; 
    char a; 

    cout << "How much money is in your back account at the start of the day? " << endl;
    cin >> moneyStart;

    cout << "How many bank transactions were done that day? " << endl;
    cin >> transactionsTotal;

    cout << "What was the type of transaction? Choose debit or credit:" << endl;
    cin >> transactionsType;

for (a = 0; a <= transactionsTotal; a++)
{
    cout << "What was the amount of the transaction? " << endl;
    cin >> transactionsAmount;

if (transactionsType == "debit")
    cout << "Total in account: " << "$" << moneyStart - transactionsAmount << endl;

else if (transactionsType == "credit")
    cout << "Total in account: " << "$" << moneyStart + transactionsAmount << endl;

}
    return 0;
}