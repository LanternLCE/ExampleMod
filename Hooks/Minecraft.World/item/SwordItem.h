#pragma once
#include <Psapi.h>
#include <iostream>
#include <cstdio>
#include <cstdint>
#include "Util/Logger.h"
#include "Util/HookHelper.h"
#include "Item.h"

class SwordItem : Item {
public:
	// Fake constructor, static so it can be used when registering the hook.
	static SwordItem* SwordItem_C1(SwordItem* self, Item::Tier* tier);
};

// "Create" funcs down here
CREATE_FUNC(SwordItem_SwordItem_C1, 0x1404b5100, SwordItem*, SwordItem* self, Item::Tier* tier);
