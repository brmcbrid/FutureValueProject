double futureVal(double monthly_investment, double apy_Rate, double years) {
    double fv=0;
    int months = years * 12;
    double monthlyInterest = apy_Rate / 100  / 12;
    for (int i = 0; i < months; i++) {
        fv += monthly_investment;
        fv += monthlyInterest * fv;
    }
    return fv;
}