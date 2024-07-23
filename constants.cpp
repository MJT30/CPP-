#include "pcap.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float usd = 0, gbp = 0;
    const float exchangeRate = 156.74;
    cout << "How much $USD do you have?" << endl;
    cin >> usd;
    gbp = usd * exchangeRate;
    cout << "You have ¥" << gbp << " in YEN ";
}