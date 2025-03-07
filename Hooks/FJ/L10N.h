#pragma once
#include <Psapi.h>
#include <iostream>
#include <cstdio>
#include <cstdint>
#include "Util/Logger.h"
#include "Util/HookHelper.h"

class L10N {
public:
	/// <summary>
	/// Gets a string from the LOC string table
	/// </summary>
	/// <param name="id">The ID of the string</param>
	/// <returns></returns>
	static wchar_t* GetString(uint32_t id);
};

CREATE_FUNC(L10N_GetString, 0x14078ee20, wchar_t*, uint32_t id);