#include <iostream>

#include "network.h"

using namespace std;

int main()
{
   // create a network;
   Network *net1 = new Network();

   net1->run();

   delete net1;
}