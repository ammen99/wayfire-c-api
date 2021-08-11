#include <wayfire/output.hpp>
#include <wayfire/object.hpp>
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

wf_signal_connection_t wf_output_connect_signal(wf_output_t output,
    const char *name,
    wf_signal_callback_t callback, void *user_data)
{
    auto conn = new wf::signal_connection_t{};
    conn->set_callback([callback, user_data](wf::signal_data_t *data)
    {
        callback(data, user_data);
    });

    auto wo = (wf::output_t*)output;
    wo->connect_signal(name, conn);
    return conn;
}
}
