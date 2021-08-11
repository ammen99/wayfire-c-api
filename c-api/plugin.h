#include <output.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define WAYFIRE_API_ABI_VERSION 20200124


/**
 * The main entry point for a plugin.
 */
struct wf_plugin_interface_t
{
    void (*init)(wf_output_t output);
    void (*fini)(wf_output_t output);
};

/**
 * Create a C++ plugin which calls the entry points of the interface for each
 * Wayfire output created.
 *
 * This is supposed to be used inside the newInstance() function necessary
 * for each plugin.
 */
void *wf_create_plugin(const struct wf_plugin_interface_t *interface);

#ifdef __cplusplus
}
#endif
