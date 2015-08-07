#include "BalanceSheetObject.h"

BalanceSheet::BalanceSheet(dollars cash, dollars receivables, dollars inventory, dollars short_term_investments, dollars prepaid_liabilities, dollars property_plant_equipment, 
                        dollars goodwill, dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                        dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations,
                        dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares)
                        
    :liabilities(accounts_payable, sales_tax_payable, payroll_tax_payable, income_tax_payable, customer_deposits, dividends_declared, short_term_loans, current_maturities_of_long_term_debt, 
                        long_term_bank_loan, long_term_other_loan, bonds_and_debtures, long_term_lease_obligations),
    equity(capital_stock, additional_paid_in_capital, retained_earnings, number_of_shares, number_of_diluted_shares)
{
    t_assets assets;
    t_current_assets current_assets;
    t_noncurrent_assets noncurrent_assets;
    
    current_assets.cash                         = cash;
    current_assets.receivables                  = receivables;
    current_assets.inventory                    = inventory;
    current_assets.short_term_investments       = short_term_investments;
    current_assets.prepaid_liabilities          = prepaid_liabilities;
    assets.current = current_assets;
    
    noncurrent_assets.property_plant_equipment  = property_plant_equipment;
    noncurrent_assets.goodwill                  = goodwill;
    assets.noncurrent = noncurrent_assets;
    
    this->assets = new Assets(assets);  
    
}

Assets BalanceSheet::getAssets()
{
    return *assets;
    
}

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

Liabilities BalanceSheet::getLiabilities()
{
    return liabilities;
    
}

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

Equity BalanceSheet::getEquity()
{
    return equity;
    
}
    
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