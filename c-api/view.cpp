#include <wayfire/view.hpp>
#include <wayfire/signal-definitions.hpp>
#include "view.h"

#include <cstring>

extern "C"
{
wf_view_t wf_signal_get_mapped_view(void *data)
{
    auto dt = (wf::signal_data_t*)data;
    auto ev = static_cast<wf::view_mapped_signal*>(dt);
    return ev->view.get();
}

char *wf_view_get_title(wf_view_t view)
{
    auto v = (wf::view_interface_t*)view;
    auto title = v->get_title();
    return strdup(title.c_str());
}

char *wf_view_get_app_id(wf_view_t view)
{
    auto v = (wf::view_interface_t*)view;
    auto app_id = v->get_app_id();
    return strdup(app_id.c_str());
}
}
