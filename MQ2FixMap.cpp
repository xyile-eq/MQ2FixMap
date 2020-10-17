// MQ2FixMap.cpp : Defines the entry point for the DLL application.
//

// PLUGIN_API is only to be used for callbacks.  All existing callbacks at this time
// are shown below. Remove the ones your plugin does not use.  Always use Initialize
// and Shutdown for setup and cleanup, do NOT do it in DllMain.



#include "../MQ2Plugin.h"


PreSetup("MQ2FixMap");

// Called once, when the plugin is to initialize
PLUGIN_API VOID InitializePlugin(VOID)
{
    DebugSpewAlways("Initializing MQ2FixMap");

    //Add commands, MQ2Data items, hooks, etc.
    //AddCommand("/mycommand",MyCommand);
    //AddXMLFile("MQUI_MyXMLFile.xml");
    //bmMyBenchmark=AddMQ2Benchmark("My Benchmark Name");
}

// Called once, when the plugin is to shutdown
PLUGIN_API VOID ShutdownPlugin(VOID)
{
    DebugSpewAlways("Shutting down MQ2FixMap");

    //Remove commands, MQ2Data items, hooks, etc.
    //RemoveMQ2Benchmark(bmMyBenchmark);
    //RemoveCommand("/mycommand");
    //RemoveXMLFile("MQUI_MyXMLFile.xml");
}

// Called after entering a new zone
PLUGIN_API VOID OnZoned(VOID)
{
    DebugSpewAlways("MQ2FixMap::OnZoned()");
	WriteChatColor("OnZoned");
	DoCommand((PSPAWNINFO)pLocalPlayer, "/mapshow npc");
}
