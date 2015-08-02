
#include "EquitiesObject.h"

Equity::Equity(dollars capital_stock, dollars additional_paid_in_capital, dollars retained_earnings, shares number_of_shares, shares number_of_diluted_shares)
    :capital_stock(capital_stock),
    additional_paid_in_capital(additional_paid_in_capital),
    retained_earnings(retained_earnings),
    number_of_shares(number_of_shares),
    number_of_diluted_shares(number_of_diluted_shares)
{
}


dollars Equity::getCapitalStock()
{
    return capital_stock;
}


void Equity::setCapitalStock(dollars capital_stock)
{
    this->capital_stock = capital_stock;
}


dollars Equity::getAdditionalPaidInCapital()
{
    return additional_paid_in_capital;
    
}

void Equity::setAdditionalPaidInCapital(dollars additional_paid_in_capital)
{
    this->additional_paid_in_capital = additional_paid_in_capital;
    
}

    
dollars Equity::getRetainedEarnings()
{
    return retained_earnings;
    
}


void Equity::setRetainedEarnings(dollars retained_earnings)
{
    this->retained_earnings = retained_earnings;
    
}

shares Equity::getNumberOfShares()
{
    return number_of_shares;
    
}

void Equity::setNumberOfShares(shares number_of_shares)
{
    this->number_of_shares = number_of_shares;
    
}

dollars Equity::getNumberOfDilutedShares()
{
    return number_of_diluted_shares;
    
}

void Equity::setNumberOfDilutedShares(shares number_of_diluted_shares)
{
    this->number_of_diluted_shares = number_of_diluted_shares;
    
}
