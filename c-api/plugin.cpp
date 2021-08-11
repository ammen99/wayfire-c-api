#include <wayfire/plugin.hpp>

#include "plugin.h"

class wayfire_c_plugin_base : public wf::plugin_interface_t
{
    const wf_plugin_interface_t *c_interface;
  public:
    wayfire_c_plugin_base(const wf_plugin_interface_t *c_interface)
    {
        this->c_interface = c_interface;
    }

    void init() override
    {
        c_interface->init(this->output);
    }

    void fini() override
    {
        c_interface->fini(this->output);
    }
};

extern "C"
{
void *wf_create_plugin(const wf_plugin_interface_t *interface)
{
    return new wayfire_c_plugin_base(interface);
}
}
