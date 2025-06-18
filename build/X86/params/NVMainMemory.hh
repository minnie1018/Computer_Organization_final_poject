#ifndef __PARAMS__NVMainMemory__
#define __PARAMS__NVMainMemory__

class NVMainMemory;

#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include <string>
#include <cstddef>
#include <string>

#include "params/AbstractMemory.hh"

struct NVMainMemoryParams
    : public AbstractMemoryParams
{
    NVMainMemory * create();
    bool NVMainWarmUp;
    Tick atomic_latency;
    bool atomic_mode;
    Tick atomic_variance;
    std::string config;
    std::string configparams;
    std::string configvalues;
    unsigned int port_port_connection_count;
};

#endif // __PARAMS__NVMainMemory__
