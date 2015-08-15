#ifndef TESTBALANCESHEETOBJECT_H
#define TESTBALANCESHEETOBJECT_H

#include <assert.h>
#include <iostream>
#include "BalanceSheetObject.h"

/*
 * Create a balancesheet struct with predefiend values and test that the getAssets
 * getLiabilities and getEquity work appropriately.
 * assert exception in case the values are false
 */
void testBalanceSheet(const int input_param);

/*
 * test getAssets, getLiabilities and getEquity work appropriately
 * asset exception in case thr values are false
 */
void testBalanceSheet(const int input_param, BalanceSheet bs_obj);
/*
 * The function create a struct t_balancesheet with a running input of 1..<last field> * input_param
 */
bool createBalanceSheetStruct(t_balancesheet* bs, int input_param);

#endif