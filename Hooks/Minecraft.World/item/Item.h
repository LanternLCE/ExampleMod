#pragma once
#include <Psapi.h>
#include <iostream>
#include <cstdio>
#include <cstdint>
#include "Util/Logger.h"
#include "Util/HookHelper.h"
#include "Hooks/FJ/L10N.h"

class Item {
public:
    VTable vftable;
    uint64_t* unk1;
    uint64_t* unk2;
    int maxStackSize;
    int uses;
    uint64_t* unk4;
    uint64_t* unk5;
    bool handEquipped;
    uint8_t unk6[7];
    uint64_t* unk7;
    std::wstring unk8;
    uint32_t descriptionId;
    uint32_t useDescriptionId;
    std::wstring name;
    bool unk12;

    class Tier {
    public:
        int level;
        int uses;
        float speed;
        float attackDamageBonus;
        int enchantmentValue;
        int unk;
    };

    /// <summary>
    /// Registers an Item
    /// </summary>
    /// <param name="id">The numerical ID of the item</param>
    /// <param name="str_id">The string ID of the item</param>
    /// <param name="item">An instance of the Item</param>
    static void registerItem(int id, std::wstring* str_id, Item* item);
};

CREATE_FUNC(Item_registerItem, 0x140313f10, void, int param_1, std::wstring* param_2, Item* param_3);