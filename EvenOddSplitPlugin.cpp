#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "EvenOddSplitPlugin.h"

void EvenOddSplitPlugin::input(std::string file) {
 inputfile = file;
}

void EvenOddSplitPlugin::run() {}

void EvenOddSplitPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "sed -n 2~2p "+inputfile+" | sort -n -k2,2 >"+file+".evenfile.txt; ";
 myCommand += "sed -n 1~2p "+inputfile+" > "+file+".oddfile.txt";
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<EvenOddSplitPlugin> EvenOddSplitPluginProxy = PluginProxy<EvenOddSplitPlugin>("EvenOddSplit", PluginManager::getInstance());

