#ifndef EVENODDSPLITPLUGIN_H
#define EVENODDSPLITPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class EvenOddSplitPlugin : public Plugin
{
public: 
 std::string toString() {return "EvenOddSplit";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
