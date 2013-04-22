local Library = require "CoronaLibrary"

-- Create library
local lib = Library:new{ name='PLUGIN_NAME', publisherId='REVERSE_PUBLISHER_URL' }

-------------------------------------------------------------------------------
-- BEGIN (Insert your implementation startine here)
-------------------------------------------------------------------------------

-- This sample implements the following Lua:
-- 
--    local PLUGIN_NAME = require "plugin_PLUGIN_NAME"
--    PLUGIN_NAME.test()
--    
lib.test = function()
	native.showAlert( 'Hello, World!', 'PLUGIN_NAME.test() invoked', { 'OK' } )
	print( 'Hello, World!' )
end

-------------------------------------------------------------------------------
-- END
-------------------------------------------------------------------------------

-- Return an instance
return lib
