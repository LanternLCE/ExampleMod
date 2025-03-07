#pragma once
#include "TestMod.h"

extern "C" {
	__declspec(dllexport) TestMod* Initialize();
};

