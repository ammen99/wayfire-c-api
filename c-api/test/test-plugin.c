#include "../plugin.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void plugin_init(wf_output_t output)
{
    char *name = wf_output_get_name(output);
    printf("Creating a test plugin instance for the output %s\n", name);
    free(name);
}

void plugin_fini(wf_output_t output)
{
    char *name = wf_output_get_name(output);
    printf("Destroying a test plugin instance for the output %s\n", name);
    free(name);
}

static struct wf_plugin_interface_t interface = {
    .init = plugin_init,
    .fini = plugin_fini,
};

void* newInstance()
{
    return wf_create_plugin(&interface);
}

uint32_t getWayfireVersion()
{
    return WAYFIRE_API_ABI_VERSION;
}
