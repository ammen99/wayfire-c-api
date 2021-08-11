#include "../plugin.h"
#include "../output.h"
#include "../view.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void plugin_handle_view_mapped(void *signal_data, void *user)
{
    (void)user;

    wf_view_t view = wf_signal_get_mapped_view(signal_data);
    char *name = wf_view_get_title(view);
    char *app_id = wf_view_get_app_id(view);

    printf("Created a view title=\"%s\" app_id=\"%s\"\n", name, app_id);
    free(name);
    free(app_id);
}

void plugin_init(wf_output_t output)
{
    char *name = wf_output_get_name(output);
    printf("Creating a test plugin instance for the output %s\n", name);
    free(name);

    wf_output_connect_signal(output, "view-mapped",
            plugin_handle_view_mapped, NULL);
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
