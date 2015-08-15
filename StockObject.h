#ifndef STOCKOBJECT_H
#define STOCKOBJECT_H

#include <ctime>
#include <vector>
#include <string>
#include "Definitions.h"
#include "BalanceSheetObject.h"

typedef struct tm st_date;


class Stock
{
    private:
        std::string name;
        std::string ticker;
        dollars price;
        //dollars boughtprice;
        //st_date boughtdate; //TODO bought price and bought date should be a vector.
        //dollars average_bought_price
        std::vector<BalanceSheet> v_balancesheet;
        //IncomeStatement incomestatement;
        //CashFlow cashflow;
        
    public:
        
        Stock(std::string name, std::string ticker, dollars price);
        
        dollars getPrice();
        void setPrice(double price);
        
        std::string getName();
        std::string getTicker();
        
        /*
        dollars getBoughtprice();
        void setBoughtprice(dollars price);
       
        st_date getBoughtdate();
        void setBoughtdate(int mday, int mon, int year);
        void printBoughtdate();
        */
        
        void AddBalanceSheet(t_balancesheet balancesheet);
        BalanceSheet getBalanceSheet();
        //IncomeStatement getIncomestatement();
        //void setIncomestatement();
        //Cashflow getCashflow();
        //void setCashflow();
};




#endif