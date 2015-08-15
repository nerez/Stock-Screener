#include <assert.h>
#include "testBalanceSheetMapObject.h"
#include "testBalanceSheetObject.h"
#include <stdio.h>

void testBalanceSheetMapYearNTerm();
void testBalanceSheetMapGetBalanceSheet();
void testBalanceSheetMapDeleteBalanceSheet();

/*
 * creates a BalanceSheet object with input_param
 * throws 1 in case the balancesheet object cannot be created
 */
BalanceSheet& createBalanceSheetObject(int input_param);




void testBalanceSheetMap()
{
    printf("testBalanceSheetMapYearNTerm\n");
    testBalanceSheetMapYearNTerm();
    printf("testBalanceSheetMapGetBalanceSheet\n");
    testBalanceSheetMapGetBalanceSheet();
    printf("testBalanceSheetMapDeleteBalanceSheet\n");
    testBalanceSheetMapDeleteBalanceSheet();
}

void testBalanceSheetMapDeleteBalanceSheet()
{
    BalanceSheetMap bs_obj_map = BalanceSheetMap();
    
    //Test Delete Balancesheet that doesn't exist
    printf("Test1\n");
    try
    {
        bs_obj_map.DeleteBalanceSheet(Year(2010), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    
    //Test Delete Balancesheet from one year
    bs_obj_map.AddBalanceSheet(Year(2011), Term("Q1"), createBalanceSheetObject(1));
    bs_obj_map.AddBalanceSheet(Year(2011), Term("Q2"), createBalanceSheetObject(2));
    bs_obj_map.AddBalanceSheet(Year(2011), Term("Q3"), createBalanceSheetObject(3));
    bs_obj_map.AddBalanceSheet(Year(2011), Term("Q4"), createBalanceSheetObject(4));
    bs_obj_map.AddBalanceSheet(Year(2011), Term("K") , createBalanceSheetObject(5));
    
    printf("Test2\n");
    bs_obj_map.DeleteBalanceSheet(Year(2011), Term("Q3"));
    try
    {
        bs_obj_map.GetBalanceSheet(Year(2011), Term("Q3"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    
    printf("Test3\n");
    bs_obj_map.GetBalanceSheet(Year(2011), Term("Q1"));
    printf("Test4\n");
    bs_obj_map.GetBalanceSheet(Year(2011), Term("Q2"));
    printf("Test5\n");
    bs_obj_map.GetBalanceSheet(Year(2011), Term("Q4"));
    printf("Test6\n");
    bs_obj_map.GetBalanceSheet(Year(2011), Term("K"));
    
    //Test Delete Balancesheet from one year
    bs_obj_map.AddBalanceSheet(Year(2010), Term("Q1"), createBalanceSheetObject(6));
    bs_obj_map.AddBalanceSheet(Year(2009), Term("Q1"), createBalanceSheetObject(7));
    bs_obj_map.AddBalanceSheet(Year(2008), Term("Q1"), createBalanceSheetObject(8));
    bs_obj_map.AddBalanceSheet(Year(2007), Term("Q1"), createBalanceSheetObject(9));
    bs_obj_map.AddBalanceSheet(Year(2006), Term("Q1") , createBalanceSheetObject(10));
    
    printf("Test7\n");
    bs_obj_map.DeleteBalanceSheet(Year(2008), Term("Q1"));
    try
    {
        bs_obj_map.GetBalanceSheet(Year(2008), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    
    printf("Test8\n");
    bs_obj_map.GetBalanceSheet(Year(2010), Term("Q1"));
    printf("Test9\n");
    bs_obj_map.GetBalanceSheet(Year(2009), Term("Q1"));
    printf("Test10\n");
    bs_obj_map.GetBalanceSheet(Year(2007), Term("Q1"));
    printf("Test11\n");
    bs_obj_map.GetBalanceSheet(Year(2006), Term("Q1"));
    
    //Test Delete All BalanceSheets and then try to delete again
    printf("Test12\n");
    bs_obj_map.DeleteBalanceSheet(Year(2010), Term("Q1"));
    printf("Test13\n");
    bs_obj_map.DeleteBalanceSheet(Year(2009), Term("Q1"));
    printf("Test14\n");
    bs_obj_map.DeleteBalanceSheet(Year(2007), Term("Q1"));
    printf("Test15\n");
    bs_obj_map.DeleteBalanceSheet(Year(2006), Term("Q1"));
    
    try
    {
        printf("Test16\n");
        bs_obj_map.DeleteBalanceSheet(Year(2010), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    try
    {
        bs_obj_map.GetBalanceSheet(Year(2010), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
}

void testBalanceSheetMapGetBalanceSheet()
{
    BalanceSheetMap bs_obj_map = BalanceSheetMap();
    
    //Test for empty Map
    try
    {
        BalanceSheet bs_obj1 = bs_obj_map.GetBalanceSheet(Year(2000), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    try
    {
        BalanceSheet bs_obj2 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q3"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    
    
    
    //Test for one BalanceSheet in Map
    bs_obj_map.AddBalanceSheet(Year(2010), Term("Q1"), createBalanceSheetObject(1));
    try
    {
        BalanceSheet bs_obj1 = bs_obj_map.GetBalanceSheet(Year(2000), Term("Q1"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    try
    {
        BalanceSheet bs_obj2 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q3"));
    }
    catch (int n)
    {
        assert (n == 1);
    }
    
    printf("Test1\n");
    BalanceSheet bs_obj3 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q1"));
    testBalanceSheet(1, bs_obj3);
    
    //Test for multiple BalanceSheets in the same Year
    bs_obj_map.AddBalanceSheet(Year(2010), Term("Q2"), createBalanceSheetObject(2));
    bs_obj_map.AddBalanceSheet(Year(2010), Term("Q3"), createBalanceSheetObject(3));
    bs_obj_map.AddBalanceSheet(Year(2010), Term("Q4"), createBalanceSheetObject(4));
    bs_obj_map.AddBalanceSheet(Year(2010), Term("K") , createBalanceSheetObject(5));
    
    BalanceSheet bs_obj4 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q1"));
    printf("Test2\n");
    testBalanceSheet(1, bs_obj4);
    BalanceSheet bs_obj5 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q2"));
    printf("Test3\n");
    testBalanceSheet(2, bs_obj5);
    BalanceSheet bs_obj6 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q3"));
    printf("Test4\n");
    testBalanceSheet(3, bs_obj6);
    BalanceSheet bs_obj7 = bs_obj_map.GetBalanceSheet(Year(2010), Term("Q4"));
    printf("Test5\n");
    testBalanceSheet(4, bs_obj7);
    BalanceSheet bs_obj8 = bs_obj_map.GetBalanceSheet(Year(2010), Term("K"));
    printf("Test6\n");
    testBalanceSheet(5, bs_obj8);
    
    //Test for numerous Years
    bs_obj_map.AddBalanceSheet(Year(2011), Term("Q2"), createBalanceSheetObject(6));
    BalanceSheet bs_obj9 = bs_obj_map.GetBalanceSheet(Year(2011), Term("Q2"));
    printf("Test7\n");
    testBalanceSheet(6, bs_obj9);
}

void testBalanceSheetMapYearNTerm()
{
    BalanceSheetMap bs_obj_map = BalanceSheetMap();
    
    Year y1 = Year(2015);
    assert(y1.GetInt() == 2015);
    Year y2 = Year(1990);
    assert(y2.GetInt() == 1990);
    try
    {
        Year y3 = Year(2016);
        assert(y3.GetInt() == 0);
        
    }
    catch (int n)
    {
        assert(n == 1);
        
    }
    Term t1 = Term("Q1");
    assert(!t1.GetStr().compare("Q1"));
    Term t2 = Term("Q2");
    assert(!t2.GetStr().compare("Q2"));
    Term t3 = Term("Q3");
    assert(!t3.GetStr().compare("Q3"));
    Term t4 = Term("Q4");
    assert(!t4.GetStr().compare("Q4"));
    try
    {
        Term t5 = Term("Q5");
        assert(!t5.GetStr().compare("nothing1234"));
    }
    catch (int n)
    {
        assert(n == 1);
        
    }
    Term t6 = Term("K");
    assert(!t6.GetStr().compare("K"));
}


BalanceSheet& createBalanceSheetObject(int input_param)
{
    t_balancesheet bs;
    
    if (!createBalanceSheetStruct(&bs, input_param))
    {
       throw 1;
    }
    BalanceSheet* bs_obj = new BalanceSheet(bs);
    return *bs_obj;
    
    
}