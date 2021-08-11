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

#ifdef __cplusplus
}
#endif
