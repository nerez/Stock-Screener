StockObject.o: StockObject.cc StockObject.h #BalanceSheetObject.cc BalanceSheetObject.h AssetsObject.cc AssetsObject.h LiabilitiesObject.cc LiabilitiesObject.h EquitiesObject.cc EquitiesObject.h Definitions.h testStockObject.cc 
	g++ -Wall StockObject.cc testStockObject.cc BalanceSheetObject.cc AssetsObject.cc LiabilitiesObject.cc EquitiesObject.cc
