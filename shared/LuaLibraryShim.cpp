// ----------------------------------------------------------------------------
// 
// LuaLibraryShim.cpp
// Copyright (c) 2013 Corona Labs Inc. All rights reserved.
// 
// ----------------------------------------------------------------------------

#include "LuaLibraryShim.h"

#include "CoronaAssert.h"
#include "CoronaLibrary.h"

// ----------------------------------------------------------------------------

// TODO: Replace 'PLUGIN_NAME' with actual name
CORONA_EXPORT int CoronaPluginLuaLoad_plugin_PLUGIN_NAME( lua_State * );

// ----------------------------------------------------------------------------

CORONA_EXPORT
int luaopen_plugin_PLUGIN_NAME( lua_State *L )
{
	lua_CFunction factory = Corona::Lua::Open< CoronaPluginLuaLoad_plugin_PLUGIN_NAME >;
	int result = CoronaLibraryNewWithFactory( L, factory, NULL, NULL );

	return result;
}

// ----------------------------------------------------------------------------
