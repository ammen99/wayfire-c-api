#pragma once
#include "signal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * The type for a Wayfire view (wf::view_interface_t on the C++ side).
 * It is opaque for C plugins.
 */
typedef void* wf_view_t;

/**
 * Get the mapped view in a view-mapped signal.
 */
wf_view_t wf_signal_get_mapped_view(void *data);

/**
 * Get the view title, needs to be freed afterwards.
 */
char *wf_view_get_title(wf_view_t view);

/**
 * Get the view app_id, needs to be freed afterwards.
 */
char *wf_view_get_app_id(wf_view_t view);

#ifdef __cplusplus
}
#endif
