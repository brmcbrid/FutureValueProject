#include <iostream>
#include <iomanip>
#include "./interface.cpp"

using namespace std;

int main() {
    double mon_invest, interest_rate, years;
    cout <<"FUTURE VALUE CALCULATOR\n";
    inputData(mon_invest, interest_rate, years);
    outputReport(mon_invest,interest_rate,years);

    return 0;
}