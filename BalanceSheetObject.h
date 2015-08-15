#ifndef BALANCESHEETOBJECT_H
#define BALANCESHEETOBJECT_H

#include "Definitions.h"

typedef struct _current_assets
{
    dollars cash; 
    dollars receivables; 
    dollars inventory; 
    dollars short_term_investments;
    dollars prepaid_liabilities;
}t_current_assets;

typedef struct _noncurrent_assets
{
    dollars property_plant_equipment;
    dollars goodwill;
}t_noncurrent_assets;

typedef struct _assets
{
    t_current_assets current;
    t_noncurrent_assets noncurrent;
}t_assets;


typedef struct _current_liabilities
{
    dollars accounts_payable;
    dollars sales_tax_payable;
    dollars payroll_tax_payable;
    dollars income_tax_payable;
    dollars interest_payable;
    dollars accrued_expenses;
    dollars customer_deposits;
    dollars dividends_declared;
    dollars short_term_loans;
    dollars current_maturities_of_long_term_debt;
}t_current_liabilities;


typedef struct _noncurrent_liabilities
{
    dollars long_term_bank_loan;
    dollars long_term_other_loan;
    dollars bonds_and_debentures;
    dollars long_term_lease_obligations;
}t_noncurrent_liabilities;


typedef struct _liabilities
{
    t_current_liabilities current;
    t_noncurrent_liabilities noncurrent;
}t_liabilities;


typedef struct _equity
{
    dollars capital_stock;
    dollars additional_paid_in_capital;
    dollars retained_earnings;
    shares number_of_shares;
    shares number_of_diluted_shares;
}t_equity;

typedef struct _balancesheet
{
    t_assets assets;
    t_liabilities liabilities;
    t_equity equity;
}t_balancesheet;



class BalanceSheet
{
    private:
        t_assets assets;
        t_liabilities liabilities;
        t_equity equity;
    
    public:
        //BalanceSheet();
        //BalanceSheet(BalanceSheetMap & obj);
        //~BalanceSheet();
        //const BalanceSheet& operator=(const BalanceSheet& obj );
        BalanceSheet(t_balancesheet balancesheet);
        
        t_assets getAssets();
        /*
        void setCash(dollars cash);
        void setReceivables(dollars receivables);
        void setInventory(dollars inventory);
        void setShortTermInvestments(dollars short_term_investments);
        void setPrepaidLiabilities(dollars prepaid_liabilities);
        void setPropertyPlantEquipment(dollars property_plant_equipment);
        void setGoodwill(dollars goodwill);
        */
        
        t_liabilities getLiabilities();
        /*
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
        */
        
        
        t_equity getEquity();
        /*
        void setCapitalStock(dollars capital_stock);
        void setAdditionalPaidInCapital(dollars additional_paid_in_capital);
        void setRetainedEarnings(dollars retained_earnings);
        void setNumberOfShares(shares number_of_shares);
        void setNumberOfDilutedShares(shares number_of_diluted_shares);
        */
        
};

#endif

