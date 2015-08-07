#ifndef ASSETSOBJECT_H
#define ASSETSOBJECT_H

#include "Definitions.h"

typedef struct _current_assets
{
    dollars cash; 
    dollars receivables; 
    dollars inventory; 
    dollars short_term_investments;
    dollars prepaid_liabilities;
}t_current_assets;

typedef struct _noncurrent_assets
{
    dollars property_plant_equipment;
    dollars goodwill;
}t_noncurrent_assets;

typedef struct _assets
{
    t_current_assets current;
    t_noncurrent_assets noncurrent;
}t_assets;


class CurrentAssets
{
    private:
        dollars cash;
        dollars receivables;
        dollars inventory;
        dollars short_term_investments;
        dollars prepaid_liabilities;
    public:
        CurrentAssets(t_current_assets& current_assets);
        dollars getCash();
        void setCash(dollars cash);
        dollars getReceivables();
        void setReceivables(dollars receivables);
        dollars getInventory();
        void setInventory(dollars inventory);
        dollars getShortTermInvestments();
        void setShortTermInvestments(dollars short_term_investments);
        dollars getPrepaidLiabilities();
        void setPrepaidLiabilities(dollars prepaid_liabilities);
        dollars getSum();
};

class NonCurrentAssets
{
    private:
        dollars property_plant_equipment;
        dollars goodwill;
    public:
        NonCurrentAssets(t_noncurrent_assets& noncurrent_assets);
        dollars getPropertyPlantEquipment();
        void setPropertyPlantEquipment(dollars property_plant_equipment);
        dollars getGoodwill();
        void setGoodwill(dollars goodwill);
        dollars getSum();
};

class Assets
{
    private:
        dollars sum;
        CurrentAssets* current;
        NonCurrentAssets* noncurrent;
    public:
        Assets(t_assets& assets);
        CurrentAssets getCurrent();
        NonCurrentAssets getNonCurrent();
        dollars getSum();
        void setCash(dollars cash);
        void setReceivables(dollars receivables);
        void setInventory(dollars inventory);
        void setShortTermInvestments(dollars short_term_investments);
        void setPrepaidLiabilities(dollars prepaid_liabilities);
        void setPropertyPlantEquipment(dollars property_plant_equipment);
        void setGoodwill(dollars goodwill);
};

#endif