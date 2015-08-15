#include <iostream>
#include "StockObject.h"

Stock::Stock(std::string name, std::string ticker, dollars price)
    :name(name),
    ticker(ticker), //TODO Check Ticker
    price(price)
{
}

double Stock::getPrice()
{
    return price;
    
}

void Stock::setPrice(double price)
{
    this->price = price;
    
}

std::string Stock::getName()
{
    return name;
}

std::string Stock::getTicker()
{
    return ticker;
}

/*
void Stock::setBoughtdate(int mday, int mon, int year)
{
    this->boughtdate.tm_mday= mday;
    this->boughtdate.tm_mon  = mon;
    this->boughtdate.tm_year = year;
    
}

void Stock::printBoughtdate()
{
    std::cout << getBoughtdate().tm_mday << "/" << getBoughtdate().tm_mon << "/" << getBoughtdate().tm_year << "\n";
    
}
*/

void Stock::AddBalanceSheet(t_balancesheet balancesheet)
{
    BalanceSheet bs = BalanceSheet(balancesheet);    
    v_balancesheet.push_back(bs);
}


//TODO get BalanceSheet by Term (2015 Q1)
BalanceSheet Stock::getBalanceSheet()
{
    return v_balancesheet.front();
    
}