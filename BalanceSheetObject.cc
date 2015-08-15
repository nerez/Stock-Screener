#include "BalanceSheetObject.h"

BalanceSheet::BalanceSheet(t_balancesheet balancesheet)
    :assets(balancesheet.assets),                    
    liabilities(balancesheet.liabilities),
    equity(balancesheet.equity)
{
    
}

t_assets BalanceSheet::getAssets()
{
    return assets;
    
}

/*
void BalanceSheet::setCash(dollars cash)
{
    assets->setCash(cash);
}


void BalanceSheet::setReceivables(dollars receivables)
{
    assets->setReceivables(receivables);
}


void BalanceSheet::setInventory(dollars inventory)
{
    assets->setInventory(inventory);
    
}

void BalanceSheet::setShortTermInvestments(dollars short_term_investments)
{
    assets->setShortTermInvestments(short_term_investments);
    
}


void BalanceSheet::setPrepaidLiabilities(dollars prepaid_liabilities)
{
    assets->setPrepaidLiabilities(prepaid_liabilities);
    
}


void BalanceSheet::setPropertyPlantEquipment(dollars property_plant_equipment)
{
    assets->setPropertyPlantEquipment(property_plant_equipment);
    
}

void BalanceSheet::setGoodwill(dollars goodwill)
{
    assets->setGoodwill(goodwill);
    
}
*/

t_liabilities BalanceSheet::getLiabilities()
{
    return liabilities;
    
}

/*
void BalanceSheet::setAccountsPayable(dollars accounts_payable)
{
    liabilities.setAccountsPayable(accounts_payable);
    
}

void BalanceSheet::setSalesTaxPayable(dollars sales_tax_payable)
{
    liabilities.setSalesTaxPayable(sales_tax_payable);
    
}

void BalanceSheet::setPayrollTaxPayable(dollars payroll_tax_payable)
{
    liabilities.setPayrollTaxPayable(payroll_tax_payable);
    
}

void BalanceSheet::setIncomeTaxPayable(dollars income_tax_payable)
{
    liabilities.setIncomeTaxPayable(income_tax_payable);
    
}

void BalanceSheet::setCustomerDeposits(dollars customer_deposits)
{
    liabilities.setCustomerDeposits(customer_deposits);
    
}

void BalanceSheet::setDividendsDeclared(dollars dividends_declared)
{
    liabilities.setDividendsDeclared(dividends_declared);
    
}

void BalanceSheet::setShortTermLoans(dollars short_term_loans)
{
    liabilities.setShortTermLoans(short_term_loans);
    
}

void BalanceSheet::setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt)
{
    liabilities.setCurrentMaturitiesOfLongTermDebt(current_maturities_of_long_term_debt);
    
}

void BalanceSheet::setLongTermBankLoan(dollars long_term_bank_loan)
{
    liabilities.setLongTermBankLoan(long_term_bank_loan);
    
}

void BalanceSheet::setLongTermOtherLoan(dollars long_term_other_loan)
{
    liabilities.setLongTermOtherLoan(long_term_other_loan);
    
}

void BalanceSheet::setBondsAndDebentures(dollars bonds_and_debentures)
{
    liabilities.setBondsAndDebentures(bonds_and_debentures);
    
}

void BalanceSheet::setLongTermLeaseObligations(dollars long_term_lease_obligations)
{
    liabilities.setLongTermLeaseObligations(long_term_lease_obligations);
    
}
*/

t_equity BalanceSheet::getEquity()
{
    return equity;
    
}
    
    /*
void BalanceSheet::setCapitalStock(dollars capital_stock)
{
    equity.setCapitalStock(capital_stock);
    
}

void BalanceSheet::setAdditionalPaidInCapital(dollars additional_paid_in_capital)
{
    equity.setAdditionalPaidInCapital(additional_paid_in_capital);
    
}


void BalanceSheet::setRetainedEarnings(dollars retained_earnings)
{
    equity.setRetainedEarnings(retained_earnings);
    
}

void BalanceSheet::setNumberOfShares(shares number_of_shares)
{
    equity.setNumberOfShares(number_of_shares);
    
}

void BalanceSheet::setNumberOfDilutedShares(shares number_of_diluted_shares)
{
    equity.setNumberOfDilutedShares(number_of_diluted_shares);
    
}
*/