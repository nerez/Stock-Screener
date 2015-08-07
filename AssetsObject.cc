#include "AssetsObject.h"




Assets::Assets(t_assets& assets)
{
    current = new CurrentAssets(assets.current);
    noncurrent = new NonCurrentAssets(assets.noncurrent);
}

CurrentAssets Assets::getCurrent()
{
    return *current;
    
}

NonCurrentAssets Assets::getNonCurrent()
{
    return *noncurrent;
    
}

dollars Assets::getSum()
{
    return current->getSum() + noncurrent->getSum();
    
}

void Assets::setCash(dollars cash)
{
    current->setCash(cash);
}


void Assets::setReceivables(dollars receivables)
{
    current->setReceivables(receivables);
}


void Assets::setInventory(dollars inventory)
{
    current->setInventory(inventory);
    
}

void Assets::setShortTermInvestments(dollars short_term_investments)
{
    current->setShortTermInvestments(short_term_investments);
    
}


void Assets::setPrepaidLiabilities(dollars prepaid_liabilities)
{
    current->setPrepaidLiabilities(prepaid_liabilities);
    
}


void Assets::setPropertyPlantEquipment(dollars property_plant_equipment)
{
    noncurrent->setPropertyPlantEquipment(property_plant_equipment);
    
}

void Assets::setGoodwill(dollars goodwill)
{
    noncurrent->setGoodwill(goodwill);
    
}
        
        
CurrentAssets::CurrentAssets(t_current_assets& current_assets)
    :cash(current_assets.cash),
    receivables(current_assets.receivables),
    inventory(current_assets.inventory),
    short_term_investments(current_assets.short_term_investments),
    prepaid_liabilities(current_assets.prepaid_liabilities)
{
    
}

dollars CurrentAssets::getCash()
{
    return cash;
    
}

void CurrentAssets::setCash(dollars cash)
{
    this->cash = cash;
    
}

dollars CurrentAssets::getReceivables()
{
    return receivables;
    
}

void CurrentAssets::setReceivables(dollars receivables)
{
    this->receivables = receivables;
    
}

dollars CurrentAssets::getInventory()
{
    return inventory;
    
}

void CurrentAssets::setInventory(dollars inventory)
{
    this->inventory = inventory;
    
}

dollars CurrentAssets::getShortTermInvestments()
{
    return short_term_investments;
    
}

void CurrentAssets::setShortTermInvestments(dollars short_term_investments)
{
    this->short_term_investments = short_term_investments;
    
}

dollars CurrentAssets::getPrepaidLiabilities()
{
    return prepaid_liabilities;
    
}

void CurrentAssets::setPrepaidLiabilities(dollars prepaid_liabilities)
{
    this->prepaid_liabilities = prepaid_liabilities;
    
}

dollars CurrentAssets::getSum()
{
    return (getCash() + getReceivables() + getInventory() + getShortTermInvestments() + getPrepaidLiabilities());
    
}


NonCurrentAssets::NonCurrentAssets(t_noncurrent_assets& noncurrent_assets)
    :property_plant_equipment(noncurrent_assets.property_plant_equipment),
    goodwill(noncurrent_assets.goodwill)
{
    
}


dollars NonCurrentAssets::getPropertyPlantEquipment()
{
    return property_plant_equipment;
    
}

void NonCurrentAssets::setPropertyPlantEquipment(dollars property_plant_equipment)
{
    this->property_plant_equipment = property_plant_equipment;
    
}

dollars NonCurrentAssets::getGoodwill()
{
    return goodwill;
    
}

void NonCurrentAssets::setGoodwill(dollars goodwill)
{
    this->goodwill = goodwill;
    
}

dollars NonCurrentAssets::getSum()
{
    return getPropertyPlantEquipment() + getGoodwill();
}