#ifndef BALANCESHEETOBJECT_H
#define BALANCESHEETOBJECT_H

#include "AssetsObject.h"
#include "LiabilitiesObject.h"
#include "EquitiesObject.h"

class BalanceSheet
{
    private:
        Assets* assets;
        Liabilities liabilities;
        Equity equity;
    
    public:
        BalanceSheet(dollars cash, dollars receivables, dollars inventory, dollars short_term_investments, dollars prepaid_liabilities, dollars property_plant_equipment, 
                        dollars goodwill, dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                        dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations,
                        dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares);
        
        Assets getAssets();
        void setCash(dollars cash);
        void setReceivables(dollars receivables);
        void setInventory(dollars inventory);
        void setShortTermInvestments(dollars short_term_investments);
        void setPrepaidLiabilities(dollars prepaid_liabilities);
        void setPropertyPlantEquipment(dollars property_plant_equipment);
        void setGoodwill(dollars goodwill);
        
        Liabilities getLiabilities();
        void setAccountsPayable(dollars accounts_payable);
        void setSalesTaxPayable(dollars sales_tax_payable);
        void setPayrollTaxPayable(dollars payroll_tax_payable);
        void setIncomeTaxPayable(dollars income_tax_payable);
        void setCustomerDeposits(dollars customer_deposits);
        void setDividendsDeclared(dollars dividends_declared);
        void setShortTermLoans(dollars short_term_loans);
        void setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt);
        void setLongTermBankLoan(dollars long_term_bank_loan);
        void setLongTermOtherLoan(dollars long_term_other_loan);
        void setBondsAndDebentures(dollars bonds_and_debentures);
        void setLongTermLeaseObligations(dollars long_term_lease_obligations);
        
        Equity getEquity();
        void setCapitalStock(dollars capital_stock);
        void setAdditionalPaidInCapital(dollars additional_paid_in_capital);
        void setRetainedEarnings(dollars retained_earnings);
        void setNumberOfShares(shares number_of_shares);
        void setNumberOfDilutedShares(shares number_of_diluted_shares);
        
};

#endif

