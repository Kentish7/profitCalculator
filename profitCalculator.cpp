#include <iostream>
using namespace std;

int main() {
    cout << "This program will give your profit on Crypto!\n";
    cout << "Type here the amount that you bought: ";
    double amountBought;
    cin >> amountBought;

    cout << "Now, type here the price that you bought: ";
    double priceBought;
    cin >> priceBought;

    double initialValue = amountBought * priceBought;
    cout << "Your initial investment was: " << initialValue <<"!\n";

    cout << "Finally, type here your sell price: ";
    double sellPrice;
    cin >> sellPrice;

    cout << "\n";
    cout << "Your profit is: " << (sellPrice * amountBought) - initialValue << " USD!\n";
    
    int currentProfit = (sellPrice - priceBought) / priceBought * 100;
    cout << "Your profit in percentage is: " << currentProfit << "%!\n";
    return 0;
