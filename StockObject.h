#ifndef STOCKOBJECT_H
#define STOCKOBJECT_H

//#include <ctime>
#include <string>
#include "Definitions.h"
#include "BalanceSheetMapObject.h"

typedef struct tm st_date;

typedef struct _stock_purchase
{
    dollars price;
    shares num_of_shares;
    st_date date;
} t_stock_purchase;


class Stock
{
    private:
        std::string name;
        std::string ticker;
        std::vector<t_stock_purchase> v_stock_purchase;
        BalanceSheetMap bs_map;
        //IncomeStatement incomestatement;
        //CashFlow cashflow;
        
    public:
        //Stock();
        //Stock(Stock & obj);
        //~Stock();
        //const Stock& operator=(const Stock& obj );
        Stock(std::string name, std::string ticker, dollars price);
        
        /*
         * Get the Average market price of the stock
         */ 
        dollars getAveragePrice();
        
        /*
         * Get the Current market price of the stock
         */ 
        dollars getCurrentPrice();
        
        /*
         * Add a new purchase with price, shares and date
         */
        void setNewStockPurchase(dollars price, shares num_of_shares, st_date date);
        
        /*
         * Get Company's name
         */ 
        std::string getName();
        
        /*
         * Get Company's ticker
         */
        std::string getTicker();
        
        void AddBalanceSheet(Year y, Term t, t_balancesheet balancesheet);
        BalanceSheet& getBalanceSheet(Year y, Term t);
        //IncomeStatement getIncomestatement();
        //void setIncomestatement();
        //Cashflow getCashflow();
        //void setCashflow();
};




#endif