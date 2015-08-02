#ifndef EQUITIESOBJECT_H 
#define EQUITIESOBJECT_H

#include "Definitions.h"


class Equity
{
    private:
        dollars capital_stock;
        dollars additional_paid_in_capital;
        dollars retained_earnings;
        shares number_of_shares;
        shares number_of_diluted_shares;
        
    public:
        Equity(dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares); 
        dollars getCapitalStock();
        void setCapitalStock(dollars capital_stock);
        dollars getAdditionalPaidInCapital();
        void setAdditionalPaidInCapital(dollars additional_paid_in_capital);
        dollars getRetainedEarnings();
        void setRetainedEarnings(dollars retained_earnings);
        shares getNumberOfShares();
        void setNumberOfShares(shares number_of_shares);
        dollars getNumberOfDilutedShares();
        void setNumberOfDilutedShares(shares number_of_diluted_shares);
};

#endif
