#include "StockObject.h"
#include <iostream>
#include <string>

/*
void TestBalanceSheet();



int main()
{
    TestBalanceSheet();
    return 0;
}



void TestBalanceSheetVector()
{
    std::string name = "Coffee Holding Company Inc.";
    std::string ticker = "JVA";
    dollars price = 4.85;
    Stock st = Stock(name, ticker, price);
    
    std::cout << "Price: " << st.getPrice() << " name: " << st.getName() << " ticker: " << st.getTicker() << "\n";
    
    t_assets assets;
    t_current_assets current_assets;
    t_noncurrent_assets noncurrent_assets;
    
    current_assets.cash                         = 1;
    current_assets.receivables                  = 2;
    current_assets.inventory                    = 3;
    current_assets.short_term_investments       = 4;
    current_assets.prepaid_liabilities          = 5;
    noncurrent_assets.property_plant_equipment  = 6;
    noncurrent_assets.goodwill                  = 7;
    
    assets.current = current_assets;
    assets.noncurrent = noncurrent_assets;
    
    t_liabilities liabilities;
    t_current_liabilities current_liabilities;
    t_noncurrent_liabilities noncurrent_liabilities;
    
    current_liabilities.accounts_payable                        = 8;
    current_liabilities.sales_tax_payable                       = 9;
    current_liabilities.payroll_tax_payable                     = 10;
    current_liabilities.income_tax_payable                      = 11;
    current_liabilities.interest_payable                        = 12;
    current_liabilities.accrued_expenses                        = 13;
    current_liabilities.customer_deposits                       = 14;
    current_liabilities.dividends_declared                      = 15;
    current_liabilities.short_term_loans                        = 16;
    current_liabilities.current_maturities_of_long_term_debt    = 17;
    noncurrent_liabilities.long_term_bank_loan                  = 18;
    noncurrent_liabilities.long_term_other_loan                 = 19;
    noncurrent_liabilities.bonds_and_debentures                 = 20;
    noncurrent_liabilities.long_term_lease_obligations          = 21;
    
    liabilities.current = current_liabilities;
    liabilities.noncurrent = noncurrent_liabilities;
    
    t_equity equity;
    
    equity.capital_stock                = 22;
    equity.additional_paid_in_capital   = 23;
    equity.retained_earnings            = 24;
    equity.number_of_shares             = 25;
    equity.number_of_diluted_shares     = 26;
    
    t_balancesheet balancesheet;
    balancesheet.assets = assets;
    balancesheet.liabilities = liabilities;
    balancesheet.equity = equity;
    
    st.AddBalanceSheet(balancesheet);
    st.AddBalanceSheet(balancesheet);
    
    std::cout << "random element: " << st.getBalanceSheet().getEquity().number_of_diluted_shares << "\n";
}
*/