#include "pch.h"
#include "Item.h"

void Item::registerItem(int id, std::wstring* str_id, Item* item)
{
    LOGW("Registering item ", *str_id, " (", L10N::GetString(item->descriptionId), ") with ID ", id);
    Item_registerItem(id, str_id, item);
}
