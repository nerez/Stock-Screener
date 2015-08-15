#ifndef BALANCESHEETMAPOBJECT_H
#define BALANCESHEETMAPOBJECT_H

#include "Definitions.h"
#include "BalanceSheetObject.h"
#include <map>
#include <time.h>
#include <string>

typedef struct _annual_balancesheet
{
    BalanceSheet* _10K;
    BalanceSheet* _10Q_1;
    BalanceSheet* _10Q_2;
    BalanceSheet* _10Q_3;
    BalanceSheet* _10Q_4;
    bool alloc_10K;
    bool alloc_10Q_1;
    bool alloc_10Q_2;
    bool alloc_10Q_3;
    bool alloc_10Q_4;
}t_annual_balancesheet;

/*
 * The constructor throws exception 1 in case the year is not valid: 
 * 1990 < year < current_year 
 */
class Year
{
    private:
        int year;
    public:
        //Year();
        //Year(Year& obj);
        //~Year();
        //const Year& operator=(const Year& obj );
        Year(const int year);
        int GetInt();
};

/*
 * The constructor throws exception 1 in case the term is not valid: 
 * "Q1", "Q2", "Q3", "Q4", "K"
 */
class Term
{
    private:
        std::string term;
    public:
        //Term();
        //Term(Term& obj);
        //~Term();
        //const Term& operator=(const Term& obj );
        Term(std::string term);
        std::string GetStr();
};


//TODO Create objects for 'year' and 'term'
class BalanceSheetMap
{
    private:
        std::map<int, t_annual_balancesheet> balancesheet_map;
        
    public:
        //BalanceSheetMap();
        //BalanceSheetMap(BalanceSheetMap & obj);
        
        /*
         * Deletes all the BalanceSheets from all the annual_balancesheet structs of the map
         */ 
        ~BalanceSheetMap();
        //const BalanceSheetMap & operator=(const BalanceSheetMap & obj );
        
        /*
         * The function receives a year, string 'term' and a BalanceSheet Object
         * and adds the balancesheet to the corresponding year and term.
         * In case the balancesheet exists, the function overrides the old one
         * with the new one.
         */
        void AddBalanceSheet(Year year, Term term, BalanceSheet& bs);
        
        /*
         * The function deletes the balancesheet from the appropriate year and
         * term
         */
        void DeleteBalanceSheet(Year year, Term term);
        
        /*
         * The function returns the corresponding BalanceSheet object to 'year'
         * and 'term'.
         * Throws 1 in case the balancesheet is not found
         */
        BalanceSheet& GetBalanceSheet(Year year, Term term);
        
};

#endif

