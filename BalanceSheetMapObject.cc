#include "BalanceSheetMapObject.h"
#include <iostream>
#include <stdio.h>



int GetCurrentYear();



Year::Year(const int year)
{
    int current_year = GetCurrentYear();
    if ((year >= 1990) && (year <= current_year))
        this->year = year;
    else
        throw 1;
}

int Year::GetInt()
{
    return year;
    
}

Term::Term(const std::string term)
{
    if ((!term.compare("Q1")) || 
        (!term.compare("Q2")) || 
        (!term.compare("Q3")) || 
        (!term.compare("Q4")) || 
        (!term.compare("K")))
    {
        this->term = term;
        return;
    }
    throw 1;
}

std::string Term::GetStr()
{
    return this->term;
    
}

BalanceSheetMap::~BalanceSheetMap()
{
    std::map<int, t_annual_balancesheet>::iterator it;
    
    for (it = balancesheet_map.begin(); it != balancesheet_map.end(); ++it)
    {
        Year y = Year(it->first);
        try
        {
            DeleteBalanceSheet(y, Term("Q1"));
        }
        catch (int n){}
        try
        {
            DeleteBalanceSheet(y, Term("Q2"));
        }
        catch (int n){}
        try
        {
            DeleteBalanceSheet(y, Term("Q3"));
        }
        catch (int n){}
        try
        {
            DeleteBalanceSheet(y, Term("Q4"));
        }
        catch (int n){}
        try
        {
            DeleteBalanceSheet(y, Term("K"));
        }
        catch (int n){}
    }
    
    
}

void BalanceSheetMap::AddBalanceSheet(Year year, Term term, BalanceSheet& bs)
{
    std::map<int, t_annual_balancesheet>::iterator it;
    
    it = balancesheet_map.find(year.GetInt());
    t_annual_balancesheet ann_bs = {}; 
    ann_bs.alloc_10K   = false;
    ann_bs.alloc_10Q_1 = false;
    ann_bs.alloc_10Q_2 = false;
    ann_bs.alloc_10Q_3 = false;
    ann_bs.alloc_10Q_4 = false;
    
    //the year is found in the map
    if (it != balancesheet_map.end())
    {
        ann_bs = it->second;
    }
    
    if (!term.GetStr().compare("Q1"))
    {
        ann_bs._10Q_1 = &bs;
        ann_bs.alloc_10Q_1 = true;
    }
    else if (!term.GetStr().compare("Q2"))
    {
        ann_bs._10Q_2 = &bs;
        ann_bs.alloc_10Q_2 = true;
    }
    else if (!term.GetStr().compare("Q3"))
    {
        ann_bs._10Q_3 = &bs;
        ann_bs.alloc_10Q_3 = true;
    }
    else if (!term.GetStr().compare("Q4"))
    {
        ann_bs._10Q_4 = &bs;
        ann_bs.alloc_10Q_4 = true;
    }
    else if (!term.GetStr().compare("K"))
    {
        ann_bs._10K = &bs;
        ann_bs.alloc_10K   = true;
    }
    
    balancesheet_map[year.GetInt()] = ann_bs;
}




void BalanceSheetMap::DeleteBalanceSheet(Year year, Term term)
{
    std::map<int, t_annual_balancesheet>::iterator it;
    
    BalanceSheet& bs = GetBalanceSheet(year, term);
    delete &bs;
    
    if (!term.GetStr().compare("Q1"))
    {
        balancesheet_map[year.GetInt()].alloc_10Q_1 = false;
    }
    else if (!term.GetStr().compare("Q2"))
    {
        balancesheet_map[year.GetInt()].alloc_10Q_2 = false;
    }
    else if (!term.GetStr().compare("Q3"))
    {
        balancesheet_map[year.GetInt()].alloc_10Q_3 = false;
    }
    else if (!term.GetStr().compare("Q4"))
    {
        balancesheet_map[year.GetInt()].alloc_10Q_4 = false;
    }
    else if (!term.GetStr().compare("K"))
    {
        balancesheet_map[year.GetInt()].alloc_10K   = false;
    }
    
}


BalanceSheet& BalanceSheetMap::GetBalanceSheet(Year year, Term term)
{
    std::map<int, t_annual_balancesheet>::iterator it;
    
    it = balancesheet_map.find(year.GetInt());
    
    if (it == balancesheet_map.end())
        throw 1; //The year was not found in the map
        
        
    //the year was found in the map
    do
    {
        if (!term.GetStr().compare("Q1"))
        {
            if (it->second.alloc_10Q_1)
                return *it->second._10Q_1;
            else break;
        }
        if (!term.GetStr().compare("Q2"))
        {
            if (it->second.alloc_10Q_2)
                return *it->second._10Q_2;
            else break;
        }
        if (!term.GetStr().compare("Q3"))
        {
            if (it->second.alloc_10Q_3)
                return *it->second._10Q_3;
            else break;
        }
        if (!term.GetStr().compare("Q4"))
        {
            if (it->second.alloc_10Q_4)
                return *it->second._10Q_4;
            else break;
        }
        if (!term.GetStr().compare("K"))
        {
            if (it->second.alloc_10K)
                return *it->second._10K;
            else break;
        }
    }while(0);
    // the specified term is not filled with a BalanceSheet
    throw 1;
    
}



int GetCurrentYear()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    return aTime->tm_year + 1900; // Year is # years since 1900
}
