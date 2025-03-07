#include "pch.h"
#include "SwordItem.h"

SwordItem* SwordItem::SwordItem_C1(SwordItem* self, Item::Tier* tier)
{
    // Log that it was called
    LOGW(L"SwordItem ctor called");
    // Here we modify the attack damage bonus to be an insane amount. (FLT_MAX)
    // For some reason it also modifies a few other items... maybe they use the same constructor?
    tier->attackDamageBonus = FLT_MAX;
    // separate var incase we want to modify/view the value after it's created before we return.
    // this calls the original function to continue initializing.
    SwordItem* si = SwordItem_SwordItem_C1(self, tier);
    // Then we return the result
    return si;
}