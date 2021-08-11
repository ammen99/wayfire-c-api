#include <wayfire/output.hpp>
#include <cstring>

#include "output.h"

extern "C"
{
char *wf_output_get_name(wf_output_t output)
{
    auto wo = (wf::output_t*)output;
    auto name = wo->to_string();
    return strdup(name.c_str());
}
}
