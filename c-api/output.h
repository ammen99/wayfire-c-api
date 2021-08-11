#pragma once
#include "signal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * The type for a Wayfire output (wf::output_t on the C++ side).
 * It is opaque for C plugins.
 */
typedef void* wf_output_t;

/**
 * Get the output name, needs to be freed afterwards.
 */
char *wf_output_get_name(wf_output_t output);

wf_signal_connection_t wf_output_connect_signal(wf_output_t output, const char *name,
    wf_signal_callback_t callback, void *user_data);

#ifdef __cplusplus
}
#endif
