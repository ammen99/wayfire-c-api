#include <wayfire/object.hpp>
#include "signal.h"

extern "C"
{
void wf_signal_callback_disconnect(wf_signal_connection_t *connection)
{
    auto conn = (wf::signal_connection_t*)connection;
    // will disconnect everything
    delete conn;
}
}
