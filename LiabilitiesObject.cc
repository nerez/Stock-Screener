#include "LiabilitiesObject.h"

Liabilities::Liabilities(dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                            dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                            dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations)
    :current(accounts_payable, sales_tax_payable, payroll_tax_payable, income_tax_payable, customer_deposits, dividends_declared, short_term_loans, current_maturities_of_long_term_debt),
    noncurrent(long_term_bank_loan, long_term_other_loan, bonds_and_debtures, long_term_lease_obligations)
{
}

CurrentLiabilities Liabilities::getCurrent()
{
    return current;
    
}

NonCurrentLiabilities Liabilities::getNonCurrent()
{
    return noncurrent;
    
}

dollars Liabilities::getSum()
{
    return current.getSum() + noncurrent.getSum();
    
}

void Liabilities::setAccountsPayable(dollars accounts_payable)
{
    current.setAccountsPayable(accounts_payable);
}


void Liabilities::setSalesTaxPayable(dollars sales_tax_payable)
{
    current.setSalesTaxPayable(sales_tax_payable);
}


void Liabilities::setPayrollTaxPayable(dollars payroll_tax_payable)
{
    current.setPayrollTaxPayable(payroll_tax_payable);
    
}

void Liabilities::setIncomeTaxPayable(dollars income_tax_payable)
{
    current.setIncomeTaxPayable(income_tax_payable);
    
}

    
void Liabilities::setCustomerDeposits(dollars customer_deposits)
{
    current.setCustomerDeposits(customer_deposits);
    
}


void Liabilities::setDividendsDeclared(dollars dividends_declared)
{
    current.setDividendsDeclared(dividends_declared);
    
}

void Liabilities::setShortTermLoans(dollars short_term_loans)
{
    current.setShortTermLoans(short_term_loans);
    
}
void Liabilities::setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt)
{
    current.setCurrentMaturitiesOfLongTermDebt(current_maturities_of_long_term_debt);
    
}

void Liabilities::setLongTermBankLoan(dollars long_term_bank_loan)
{
    noncurrent.setLongTermBankLoan(long_term_bank_loan);
    
}

void Liabilities::setLongTermOtherLoan(dollars long_term_other_loan)
{
    noncurrent.setLongTermOtherLoan(long_term_other_loan);
    
}

void Liabilities::setBondsAndDebentures(dollars bonds_and_debentures)
{
    noncurrent.setBondsAndDebentures(bonds_and_debentures);
    
}

void Liabilities::setLongTermLeaseObligations(dollars long_term_lease_obligations)
{
    noncurrent.setLongTermLeaseObligations(long_term_lease_obligations);
    
}
        
CurrentLiabilities::CurrentLiabilities(dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt)
    :accounts_payable(accounts_payable),
    sales_tax_payable(sales_tax_payable),
    payroll_tax_payable(payroll_tax_payable),
    income_tax_payable(income_tax_payable),
    customer_deposits(customer_deposits),
    dividends_declared(dividends_declared),
    short_term_loans(short_term_loans),
    current_maturities_of_long_term_debt(current_maturities_of_long_term_debt)
{
}

        
dollars CurrentLiabilities::getAccountsPayable()
{
    return accounts_payable;
    
}

void CurrentLiabilities::setAccountsPayable(dollars accounts_payable)
{
    this->accounts_payable = accounts_payable;
    
}

dollars CurrentLiabilities::getSalesTaxPayable()
{
    return sales_tax_payable;
    
}

void CurrentLiabilities::setSalesTaxPayable(dollars sales_tax_payable)
{
    this->sales_tax_payable = sales_tax_payable;
    
}

dollars CurrentLiabilities::getPayrollTaxPayable()
{
    return payroll_tax_payable;
    
}

void CurrentLiabilities::setPayrollTaxPayable(dollars payroll_tax_payable)
{
    this->payroll_tax_payable = payroll_tax_payable;
    
} 

dollars CurrentLiabilities::getIncomeTaxPayable()
{
    return income_tax_payable;
    
}

void CurrentLiabilities::setIncomeTaxPayable(dollars income_tax_payable)
{
    this->income_tax_payable = income_tax_payable;
    
}
        
dollars CurrentLiabilities::getCustomerDeposits()
{
    return customer_deposits;
    
}

void CurrentLiabilities::setCustomerDeposits(dollars customer_deposits)
{
    this->customer_deposits = customer_deposits;
    
}

dollars CurrentLiabilities::getDividendsDeclared()
{
    return dividends_declared;
    
}

void CurrentLiabilities::setDividendsDeclared(dollars dividends_declared)
{
    this->dividends_declared = dividends_declared;
    
}
dollars CurrentLiabilities::getShortTermLoans()
{
    return short_term_loans;
    
}

void CurrentLiabilities::setShortTermLoans(dollars short_term_loans)
{
    this->short_term_loans = short_term_loans;
    
}

dollars CurrentLiabilities::getCurrentMaturitiesOfLongTermDebt()
{
    return current_maturities_of_long_term_debt;
    
}

void CurrentLiabilities::setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt)
{
    this->current_maturities_of_long_term_debt = current_maturities_of_long_term_debt;
    
}
dollars CurrentLiabilities::getSum()
{
    return (getAccountsPayable() + getSalesTaxPayable() + getPayrollTaxPayable() + getIncomeTaxPayable() + getCustomerDeposits() + getDividendsDeclared() + getShortTermLoans() + getCurrentMaturitiesOfLongTermDebt());
    
}


NonCurrentLiabilities::NonCurrentLiabilities(dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debentures, dollars long_term_lease_obligations)
    :long_term_bank_loan(long_term_bank_loan),
    long_term_other_loan(long_term_other_loan),
    bonds_and_debentures(bonds_and_debentures),
    long_term_lease_obligations(long_term_lease_obligations)
{
    
}


dollars NonCurrentLiabilities::getLongTermBankLoan()
{
    return long_term_bank_loan;
    
}

void NonCurrentLiabilities::setLongTermBankLoan(dollars long_term_bank_loan)
{
    this->long_term_bank_loan = long_term_bank_loan;
    
}

dollars NonCurrentLiabilities::getLongTermOtherLoan()
{
    return long_term_other_loan;
    
}

void NonCurrentLiabilities::setLongTermOtherLoan(dollars long_term_other_loan)
{
    this->long_term_other_loan = long_term_other_loan;
    
}

dollars NonCurrentLiabilities::getBondsAndDebentures()
{
    return bonds_and_debentures;
    
}

void NonCurrentLiabilities::setBondsAndDebentures(dollars bonds_and_debentures)
{
    this->bonds_and_debentures = bonds_and_debentures;
    
}
dollars NonCurrentLiabilities::getLongTermLeaseObligations()
{
    return long_term_lease_obligations;
    
}

void NonCurrentLiabilities::setLongTermLeaseObligations(dollars long_term_lease_obligations)
{
    this->long_term_lease_obligations = long_term_lease_obligations;
    
}

dollars NonCurrentLiabilities::getSum()
{
    return getLongTermBankLoan() + getLongTermOtherLoan() + getBondsAndDebentures() + getLongTermLeaseObligations();
}