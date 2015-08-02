#include <iostream>
#include "StockObject.h"

Stock::Stock(dollars cash, dollars receivables, dollars inventory, dollars short_term_investments, dollars prepaid_liabilities, dollars property_plant_equipment, 
                dollars goodwill, dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations,
                dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares)
    :balancesheet(cash, receivables, inventory, short_term_investments, prepaid_liabilities, property_plant_equipment, 
                goodwill, accounts_payable, sales_tax_payable, payroll_tax_payable, income_tax_payable, 
                customer_deposits, dividends_declared, short_term_loans, current_maturities_of_long_term_debt, 
                long_term_bank_loan, long_term_other_loan, bonds_and_debtures, long_term_lease_obligations,
                capital_stock, additional_paid_in_capital, retained_earnings, number_of_shares, number_of_diluted_shares)
{
}

double Stock::getPrice()
{
    return price;
    
}

void Stock::setPrice(double price)
{
    this->price = price;
    
}

double Stock::getBoughtprice()
{
    return boughtprice;
    
}

void Stock::setBoughtprice(double boughtprice)
{
    this->boughtprice = boughtprice;
    
}

st_date Stock::getBoughtdate()
{
    return boughtdate;
    
}

void Stock::setBoughtdate(int mday, int mon, int year)
{
    this->boughtdate.tm_mday= mday;
    this->boughtdate.tm_mon  = mon;
    this->boughtdate.tm_year = year;
    
}

void Stock::printBoughtdate()
{
    std::cout << getBoughtdate().tm_mday << "/" << getBoughtdate().tm_mon << "/" << getBoughtdate().tm_year << "\n";
    
}


BalanceSheet Stock::getBalanceSheet()
{
    return balancesheet; 
}
    
void Stock::setCash(dollars cash)
{
    balancesheet.setCash(cash);
}


void Stock::setReceivables(dollars receivables)
{
    balancesheet.setReceivables(receivables);
}


void Stock::setInventory(dollars inventory)
{
    balancesheet.setInventory(inventory);
    
}

void Stock::setShortTermInvestments(dollars short_term_investments)
{
    balancesheet.setShortTermInvestments(short_term_investments);
    
}


void Stock::setPrepaidLiabilities(dollars prepaid_liabilities)
{
    balancesheet.setPrepaidLiabilities(prepaid_liabilities);
    
}


void Stock::setPropertyPlantEquipment(dollars property_plant_equipment)
{
    balancesheet.setPropertyPlantEquipment(property_plant_equipment);
    
}

void Stock::setGoodwill(dollars goodwill)
{
    balancesheet.setGoodwill(goodwill);
    
}
        
void Stock::setAccountsPayable(dollars accounts_payable)
{
    balancesheet.setAccountsPayable(accounts_payable);
    
}

void Stock::setSalesTaxPayable(dollars sales_tax_payable)
{
    balancesheet.setSalesTaxPayable(sales_tax_payable);
    
}

void Stock::setPayrollTaxPayable(dollars payroll_tax_payable)
{
    balancesheet.setPayrollTaxPayable(payroll_tax_payable);
    
}
        
void Stock::setIncomeTaxPayable(dollars income_tax_payable)
{
    balancesheet.setIncomeTaxPayable(income_tax_payable);
    
}

void Stock::setCustomerDeposits(dollars customer_deposits)
{
    balancesheet.setCustomerDeposits(customer_deposits);
    
}

void Stock::setDividendsDeclared(dollars dividends_declared)
{
    balancesheet.setDividendsDeclared(dividends_declared);
    
}

void Stock::setShortTermLoans(dollars short_term_loans)
{
    balancesheet.setShortTermLoans(short_term_loans);
    
}

void Stock::setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt)
{
    balancesheet.setCurrentMaturitiesOfLongTermDebt(current_maturities_of_long_term_debt);
    
}

void Stock::setLongTermBankLoan(dollars long_term_bank_loan)
{
    balancesheet.setLongTermBankLoan(long_term_bank_loan);
    
}

void Stock::setLongTermOtherLoan(dollars long_term_other_loan)
{
    balancesheet.setLongTermOtherLoan(long_term_other_loan);
    
}

void Stock::setBondsAndDebentures(dollars bonds_and_debentures)
{
    balancesheet.setBondsAndDebentures(bonds_and_debentures);
    
}

void Stock::setLongTermLeaseObligations(dollars long_term_lease_obligations)
{
    balancesheet.setLongTermLeaseObligations(long_term_lease_obligations);
    
}
    
void Stock::setCapitalStock(dollars capital_stock)
{
    balancesheet.setCapitalStock(capital_stock);
    
}

void Stock::setAdditionalPaidInCapital(dollars additional_paid_in_capital)
{
    balancesheet.setAdditionalPaidInCapital(additional_paid_in_capital);
    
}


void Stock::setRetainedEarnings(dollars retained_earnings)
{
    balancesheet.setRetainedEarnings(retained_earnings);
    
}

void Stock::setNumberOfShares(shares number_of_shares)
{
    balancesheet.setNumberOfShares(number_of_shares);
    
}

void Stock::setNumberOfDilutedShares(shares number_of_diluted_shares)
{
    balancesheet.setNumberOfDilutedShares(number_of_diluted_shares);
    
}