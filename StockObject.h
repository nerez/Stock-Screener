#ifndef STOCKOBJECT_H
#define STOCKOBJECT_H

#include <ctime>
#include "Definitions.h"
#include "BalanceSheetObject.h"

typedef tm st_date;


class Stock
{
    private:
        dollars price;
        dollars boughtprice;
        st_date boughtdate;
        BalanceSheet balancesheet;
        //IncomeStatement incomestatement;
        //CashFlow cashflow;
        
    public:
        
        Stock(dollars cash, dollars receivables, dollars inventory, dollars short_term_investments, dollars prepaid_liabilities, dollars property_plant_equipment, 
                        dollars goodwill, dollars accounts_payable, dollars sales_tax_payable, dollars payroll_tax_payable, dollars income_tax_payable, 
                        dollars customer_deposits, dollars dividends_declared, dollars short_term_loans, dollars current_maturities_of_long_term_debt, 
                        dollars long_term_bank_loan, dollars long_term_other_loan, dollars bonds_and_debtures, dollars long_term_lease_obligations,
                        dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares);
        
        dollars getPrice();
        void setPrice(double price);
        
        dollars getBoughtprice();
        void setBoughtprice(dollars price);
       
        st_date getBoughtdate();
        void setBoughtdate(int mday, int mon, int year);
        void printBoughtdate();
        
        BalanceSheet getBalanceSheet();
        void setCash(dollars cash);
        void setReceivables(dollars receivables);
        void setInventory(dollars inventory);
        void setShortTermInvestments(dollars short_term_investments);
        void setPrepaidLiabilities(dollars prepaid_liabilities);
        void setPropertyPlantEquipment(dollars property_plant_equipment);
        void setGoodwill(dollars goodwill);
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
        void setCapitalStock(dollars capital_stock);
        void setAdditionalPaidInCapital(dollars additional_paid_in_capital);
        void setRetainedEarnings(dollars retained_earnings);
        void setNumberOfShares(shares number_of_shares);
        void setNumberOfDilutedShares(shares number_of_diluted_shares);
        
        //IncomeStatement getIncomestatement();
        //void setIncomestatement();
        //Cashflow getCashflow();
        //void setCashflow();
};




#endif