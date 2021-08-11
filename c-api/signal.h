#pragma once
#ifdef __cplusplus
extern "C"
{
#endif

typedef void* wf_signal_connection_t;
typedef void (*wf_signal_callback_t)(void *data, void *user);

void wf_signal_callback_disconnect(wf_signal_connection_t *connection);

#ifdef __cplusplus
}
#endif
