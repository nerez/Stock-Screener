#include "StockObject.h"
#include <iostream>

void testBalanceSheet();



int main()
{
    //testPrice();
    //testBoughtdate();
    //testBalanceSheet();
    //testStockAndBalanceSheet();
    testBalanceSheet();
    return 0;
}

/*
void testBalanceSheet()
{
    BalanceSheet bs(9);
    std::cout << "type: " << bs.type << "\n";
    
}
*/

/*
void testStockAndBalanceSheet()
{
    Stock st;
    std::cout << "type: " << st.balancesheet.type << "\n";
    
}
*/

void testBalanceSheet()
{
    Stock st(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);
    
    std::cout << "cash: " << st.getBalanceSheet().getAssets().getCurrent().getCash()<< "\n";
    std::cout << "receivables: " << st.getBalanceSheet().getAssets().getCurrent().getReceivables()<< "\n";
    std::cout << "inventory: " << st.getBalanceSheet().getAssets().getCurrent().getInventory()<< "\n";
    std::cout << "short_term_investments: " << st.getBalanceSheet().getAssets().getCurrent().getShortTermInvestments()<< "\n";
    std::cout << "prepaid_liabilities: " << st.getBalanceSheet().getAssets().getCurrent().getPrepaidLiabilities()<< "\n";
    std::cout << "current sum: " << st.getBalanceSheet().getAssets().getCurrent().getSum()<< "\n";
    std::cout << "property_plant_equipment: " << st.getBalanceSheet().getAssets().getNonCurrent().getPropertyPlantEquipment()<< "\n";
    std::cout << "goodwill: " << st.getBalanceSheet().getAssets().getNonCurrent().getGoodwill()<< "\n";
    std::cout << "non current sum: " << st.getBalanceSheet().getAssets().getNonCurrent().getSum()<< "\n";
    std::cout << "assets sum: " << st.getBalanceSheet().getAssets().getSum()<< "\n";
    std::cout << "accounts_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getAccountsPayable()<< "\n";
    std::cout << "sales_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getSalesTaxPayable()<< "\n";
    std::cout << "payroll_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getPayrollTaxPayable()<< "\n";
    std::cout << "income_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getIncomeTaxPayable()<< "\n";
    std::cout << "customer_deposits: " << st.getBalanceSheet().getLiabilities().getCurrent().getCustomerDeposits()<< "\n";
    std::cout << "dividends_declared: " << st.getBalanceSheet().getLiabilities().getCurrent().getDividendsDeclared()<< "\n";
    std::cout << "short_term_loans: " << st.getBalanceSheet().getLiabilities().getCurrent().getShortTermLoans()<< "\n";
    std::cout << "current_maturities_of_long_term_debt: " << st.getBalanceSheet().getLiabilities().getCurrent().getCurrentMaturitiesOfLongTermDebt()<< "\n";
    std::cout << "current sum: " << st.getBalanceSheet().getLiabilities().getCurrent().getSum()<< "\n";
    std::cout << "long_term_bank_loan: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermBankLoan()<< "\n";
    std::cout << "long_term_other_loan: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermOtherLoan()<< "\n";
    std::cout << "bonds_and_debentures: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getBondsAndDebentures()<< "\n";
    std::cout << "long_term_lease_obligations: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermLeaseObligations()<< "\n";
    std::cout << "non current sum: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getSum()<< "\n";
    std::cout << "liabilities sum: " << st.getBalanceSheet().getLiabilities().getSum()<< "\n";  
    std::cout << "capital_stock: " << st.getBalanceSheet().getEquity().getCapitalStock()<< "\n";  
    std::cout << "additional_paid_in_capital: " << st.getBalanceSheet().getEquity().getAdditionalPaidInCapital()<< "\n";  
    std::cout << "retained_earnings: " << st.getBalanceSheet().getEquity().getRetainedEarnings()<< "\n";  
    std::cout << "number_of_shares: " << st.getBalanceSheet().getEquity().getNumberOfShares()<< "\n";  
    std::cout << "number_of_diluted_shares: " << st.getBalanceSheet().getEquity().getNumberOfDilutedShares()<< "\n";  
    
    st.setCash(8);
    st.setReceivables(9);
    st.setInventory(10);
    st.setShortTermInvestments(11);
    st.setPrepaidLiabilities(12);
    st.setPropertyPlantEquipment(13);
    st.setGoodwill(14);
    st.setAccountsPayable(15);
    st.setSalesTaxPayable(16);
    st.setPayrollTaxPayable(17);
    st.setIncomeTaxPayable(18);
    st.setCustomerDeposits(19);
    st.setDividendsDeclared(20);
    st.setShortTermLoans(21);
    st.setCurrentMaturitiesOfLongTermDebt(22);
    st.setLongTermBankLoan(23);
    st.setLongTermOtherLoan(24);
    st.setBondsAndDebentures(25);
    st.setLongTermLeaseObligations(26);
    st.setCapitalStock(27);
    st.setAdditionalPaidInCapital(28);
    st.setRetainedEarnings(29);
    st.setNumberOfShares(30);
    st.setNumberOfDilutedShares(31);
    
    std::cout << "cash: " << st.getBalanceSheet().getAssets().getCurrent().getCash()<< "\n";
    std::cout << "receivables: " << st.getBalanceSheet().getAssets().getCurrent().getReceivables()<< "\n";
    std::cout << "inventory: " << st.getBalanceSheet().getAssets().getCurrent().getInventory()<< "\n";
    std::cout << "short_term_investments: " << st.getBalanceSheet().getAssets().getCurrent().getShortTermInvestments()<< "\n";
    std::cout << "prepaid_liabilities: " << st.getBalanceSheet().getAssets().getCurrent().getPrepaidLiabilities()<< "\n";
    std::cout << "current sum: " << st.getBalanceSheet().getAssets().getCurrent().getSum()<< "\n";
    std::cout << "property_plant_equipment: " << st.getBalanceSheet().getAssets().getNonCurrent().getPropertyPlantEquipment()<< "\n";
    std::cout << "goodwill: " << st.getBalanceSheet().getAssets().getNonCurrent().getGoodwill()<< "\n";
    std::cout << "non current sum: " << st.getBalanceSheet().getAssets().getNonCurrent().getSum()<< "\n";
    std::cout << "assets sum: " << st.getBalanceSheet().getAssets().getSum()<< "\n";
    std::cout << "accounts_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getAccountsPayable()<< "\n";
    std::cout << "sales_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getSalesTaxPayable()<< "\n";
    std::cout << "payroll_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getPayrollTaxPayable()<< "\n";
    std::cout << "income_tax_payable: " << st.getBalanceSheet().getLiabilities().getCurrent().getIncomeTaxPayable()<< "\n";
    std::cout << "customer_deposits: " << st.getBalanceSheet().getLiabilities().getCurrent().getCustomerDeposits()<< "\n";
    std::cout << "dividends_declared: " << st.getBalanceSheet().getLiabilities().getCurrent().getDividendsDeclared()<< "\n";
    std::cout << "short_term_loans: " << st.getBalanceSheet().getLiabilities().getCurrent().getShortTermLoans()<< "\n";
    std::cout << "current_maturities_of_long_term_debt: " << st.getBalanceSheet().getLiabilities().getCurrent().getCurrentMaturitiesOfLongTermDebt()<< "\n";
    std::cout << "current sum: " << st.getBalanceSheet().getLiabilities().getCurrent().getSum()<< "\n";
    std::cout << "long_term_bank_loan: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermBankLoan()<< "\n";
    std::cout << "long_term_other_loan: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermOtherLoan()<< "\n";
    std::cout << "bonds_and_debentures: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getBondsAndDebentures()<< "\n";
    std::cout << "long_term_lease_obligations: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getLongTermLeaseObligations()<< "\n";
    std::cout << "non current sum: " << st.getBalanceSheet().getLiabilities().getNonCurrent().getSum()<< "\n";
    std::cout << "liabilities sum: " << st.getBalanceSheet().getLiabilities().getSum()<< "\n";  
    std::cout << "capital_stock: " << st.getBalanceSheet().getEquity().getCapitalStock()<< "\n";  
    std::cout << "additional_paid_in_capital: " << st.getBalanceSheet().getEquity().getAdditionalPaidInCapital()<< "\n";  
    std::cout << "retained_earnings: " << st.getBalanceSheet().getEquity().getRetainedEarnings()<< "\n";  
    std::cout << "number_of_shares: " << st.getBalanceSheet().getEquity().getNumberOfShares()<< "\n";  
    std::cout << "number_of_diluted_shares: " << st.getBalanceSheet().getEquity().getNumberOfDilutedShares()<< "\n";  
}

/*
void testBoughtdate()
{
    Stock st;
    st.setBoughtdate(8,1,1984);
    st.printBoughtdate();
}

void testPrice()
{
    Stock st;
    st.setPrice (5.01);
    st.setBoughtprice(4.74);
    std::cout << "current price: " << st.getPrice() << " bought price: " << st.getBoughtprice() << "\n";
}
*/