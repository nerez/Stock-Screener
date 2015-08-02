#ifndef LIABILITIESOBJECT_H
#define LIABILITIESOBJECT_H

#include "Definitions.h"


class CurrentLiabilities
{
    private:
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
        
    public:
        CurrentLiabilities(dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt);
        dollars getAccountsPayable();
        void setAccountsPayable(dollars accounts_payable);
        dollars getSalesTaxPayable();
        void setSalesTaxPayable(dollars sales_tax_payable);
        dollars getPayrollTaxPayable();
        void setPayrollTaxPayable(dollars payroll_tax_payable);
        dollars getIncomeTaxPayable();
        void setIncomeTaxPayable(dollars income_tax_payable);
        dollars getCustomerDeposits();
        void setCustomerDeposits(dollars customer_deposits);
        dollars getDividendsDeclared();
        void setDividendsDeclared(dollars dividends_declared);
        dollars getShortTermLoans();
        void setShortTermLoans(dollars short_term_loans);
        dollars getCurrentMaturitiesOfLongTermDebt();
        void setCurrentMaturitiesOfLongTermDebt(dollars current_maturities_of_long_term_debt);
        dollars getSum();
};

class NonCurrentLiabilities
{
    private:
        dollars long_term_bank_loan;
        dollars long_term_other_loan;
        dollars bonds_and_debentures;
        dollars long_term_lease_obligations;
        
    public:
        NonCurrentLiabilities(dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations);
        dollars getLongTermBankLoan();
        void setLongTermBankLoan(dollars long_term_bank_loan);
        dollars getLongTermOtherLoan();
        void setLongTermOtherLoan(dollars long_term_other_loan);
        dollars getBondsAndDebentures();
        void setBondsAndDebentures(dollars bonds_and_debentures);
        dollars getLongTermLeaseObligations();
        void setLongTermLeaseObligations(dollars long_term_lease_obligations);
        dollars getSum();
};

class Liabilities
{
    private:
        dollars sum;
        CurrentLiabilities current;
        NonCurrentLiabilities noncurrent;
    public:
        Liabilities(dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                        dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations);
        CurrentLiabilities getCurrent();
        NonCurrentLiabilities getNonCurrent();
        dollars getSum();
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
};

#endif