#include <iostream>
#include <iomanip>
#include "./futureValue.cpp"
#include "./doubleMoney.cpp"
using namespace std;

void inputData(double& monthlyInvestment, double& rate, double& term) {
    cout << "Enter your monthly investment: ";
    cin >> monthlyInvestment;
    cout << "Enter APY for investment: %";
    cin >> rate;
    cout << "Enter term for investment: ";
    cin >> term;
}

void outputReport(double investment, double APY, double years) {
    cout << "------------------------------------\n";
    cout << "The future value will be $";
    cout << fixed << setprecision(2);
    cout << futureVal(investment,APY,years) << std::endl;
    cout << "The account balance would double every ";
    cout << doubleMoneyCalc(APY);
    cout << " years after.";

}

