StockObject.o: StockObject.cc StockObject.h BalanceSheetObject.cc BalanceSheetObject.h BalanceSheetMapObject.cc BalanceSheetMapObject.h Definitions.h testStockObject.cc  testMain.cc testBalanceSheetObject.cc testBalanceSheetObject.h testBalanceSheetMapObject.cc testBalanceSheetMapObject.h
	g++ -Wall -Wno-unused-but-set-variable StockObject.cc testStockObject.cc BalanceSheetObject.cc BalanceSheetMapObject.cc testMain.cc testBalanceSheetObject.cc testBalanceSheetMapObject.cc

