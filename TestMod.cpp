#include "pch.h"
#include "TestMod.h"
#include "Util/HookHelper.h"
#include "Hooks/Minecraft.World/item/Item.h"
#include "InternalHooks/Minecraft.h"
#include "Hooks/Minecraft.World/item/SwordItem.h"

// This stores all the hooks
std::vector<std::tuple<PVOID*, PVOID>> hooks;

void TestMod::Enable()
{
	Minecraft::onMain->addEventListener([]()
		{
			LOG("Main called");
			// Things that require the game to be started such as UWP dependant methods can be called here.
		});

	// Register hooks down here (May change in the future)
	registerHook(&(PVOID&)SwordItem_SwordItem_C1, &SwordItem::SwordItem_C1); // Swords do a lot of damage
	registerHook(&(PVOID&)Item_registerItem, &Item::registerItem); // Item::registerItem logging
}

void TestMod::Disable()
{
	unregisterHooks(hooks);
}

std::wstring TestMod::GetVersion()
{
	return L"1.0.0";
}

std::wstring TestMod::GetName()
{
	return L"Lantern Example Mod";
}
