#include "testBalanceSheetObject.h"

void testBalanceSheetGetAssets(const int input_param, BalanceSheet bs_obj);
void testBalanceSheetGetLiabilities(const int input_param, BalanceSheet bs_obj);
void testBalanceSheetGetEquity(const int input_param, BalanceSheet bs_obj);

void testBalanceSheet(const int input_param)
{
    t_balancesheet bs;
    
    if (!createBalanceSheetStruct(&bs, input_param))
        return;
    
    
    BalanceSheet bs_obj = BalanceSheet(bs);
    testBalanceSheetGetAssets(input_param, bs_obj);
    testBalanceSheetGetLiabilities(input_param, bs_obj);
    testBalanceSheetGetEquity(input_param, bs_obj);
    
}

void testBalanceSheet(const int input_param, BalanceSheet bs_obj)
{
    testBalanceSheetGetAssets(input_param, bs_obj);
    testBalanceSheetGetLiabilities(input_param, bs_obj);
    testBalanceSheetGetEquity(input_param, bs_obj);
    
}

void testBalanceSheetGetAssets(int input_param, BalanceSheet bs_obj)
{
    t_assets assets = bs_obj.getAssets();
    assert(assets.current.cash                          == 1 * input_param);
    assert(assets.current.receivables                   == 2 * input_param);
    assert(assets.current.inventory                     == 3 * input_param);
    assert(assets.current.short_term_investments        == 4 * input_param);
    assert(assets.current.prepaid_liabilities           == 5 * input_param);
    assert(assets.noncurrent.property_plant_equipment   == 6 * input_param);
    assert(assets.noncurrent.goodwill                   == 7 * input_param);
}


void testBalanceSheetGetLiabilities(const int input_param, BalanceSheet bs_obj)
{
    t_liabilities liabilities = bs_obj.getLiabilities();
    assert(liabilities.current.accounts_payable                        == 8 * input_param);
    assert(liabilities.current.sales_tax_payable                       == 9 * input_param);
    assert(liabilities.current.payroll_tax_payable                     == 10 * input_param);
    assert(liabilities.current.income_tax_payable                      == 11 * input_param);
    assert(liabilities.current.interest_payable                        == 12 * input_param);
    assert(liabilities.current.accrued_expenses                        == 13 * input_param);
    assert(liabilities.current.customer_deposits                       == 14 * input_param);
    assert(liabilities.current.dividends_declared                      == 15 * input_param);
    assert(liabilities.current.short_term_loans                        == 16 * input_param);
    assert(liabilities.current.current_maturities_of_long_term_debt    == 17 * input_param);
    assert(liabilities.noncurrent.long_term_bank_loan                  == 18 * input_param);
    assert(liabilities.noncurrent.long_term_other_loan                 == 19 * input_param);
    assert(liabilities.noncurrent.bonds_and_debentures                 == 20 * input_param);
    assert(liabilities.noncurrent.long_term_lease_obligations          == 21 * input_param);
}


void testBalanceSheetGetEquity(const int input_param, BalanceSheet bs_obj)
{
    t_equity equity = bs_obj.getEquity();
    
    assert(equity.capital_stock                == 22 * input_param);
    assert(equity.additional_paid_in_capital   == 23 * input_param);
    assert(equity.retained_earnings            == 24 * input_param);
    assert(equity.number_of_shares             == 25 * input_param);
    assert(equity.number_of_diluted_shares     == 26 * input_param);
}
    
    
bool createBalanceSheetStruct(t_balancesheet* bs, int input_param)
{
    if (!bs)
    {
        std::cout << "bs is NULL\n";
        return false; 
    }
    t_assets assets;
    t_current_assets current_assets;
    t_noncurrent_assets noncurrent_assets;
    
    current_assets.cash                         = 1 * input_param;
    current_assets.receivables                  = 2 * input_param;
    current_assets.inventory                    = 3 * input_param;
    current_assets.short_term_investments       = 4 * input_param;
    current_assets.prepaid_liabilities          = 5 * input_param;
    noncurrent_assets.property_plant_equipment  = 6 * input_param;
    noncurrent_assets.goodwill                  = 7 * input_param;
    
    assets.current = current_assets;
    assets.noncurrent = noncurrent_assets;
    
    t_liabilities liabilities;
    t_current_liabilities current_liabilities;
    t_noncurrent_liabilities noncurrent_liabilities;
    
    current_liabilities.accounts_payable                        = 8 * input_param;
    current_liabilities.sales_tax_payable                       = 9 * input_param;
    current_liabilities.payroll_tax_payable                     = 10 * input_param;
    current_liabilities.income_tax_payable                      = 11 * input_param;
    current_liabilities.interest_payable                        = 12 * input_param;
    current_liabilities.accrued_expenses                        = 13 * input_param;
    current_liabilities.customer_deposits                       = 14 * input_param;
    current_liabilities.dividends_declared                      = 15 * input_param;
    current_liabilities.short_term_loans                        = 16 * input_param;
    current_liabilities.current_maturities_of_long_term_debt    = 17 * input_param;
    noncurrent_liabilities.long_term_bank_loan                  = 18 * input_param;
    noncurrent_liabilities.long_term_other_loan                 = 19 * input_param;
    noncurrent_liabilities.bonds_and_debentures                 = 20 * input_param;
    noncurrent_liabilities.long_term_lease_obligations          = 21 * input_param;
    
    liabilities.current = current_liabilities;
    liabilities.noncurrent = noncurrent_liabilities;
    
    t_equity equity;
    
    equity.capital_stock                = 22 * input_param;
    equity.additional_paid_in_capital   = 23 * input_param;
    equity.retained_earnings            = 24 * input_param;
    equity.number_of_shares             = 25 * input_param;
    equity.number_of_diluted_shares     = 26 * input_param;
    
    bs->assets = assets;
    bs->liabilities = liabilities;
    bs->equity = equity;
    
    return true;
}