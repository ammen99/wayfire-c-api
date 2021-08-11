**This project is highly experimental!**

Currently targetting Wayfire 0.7.2

## Instructions

Compile the plugin.

```
meson build
ninja -C build
```

Now, add the plugin located in `./build/c-api/test/libc-api-test.so`
to the list of Wayfire plugins
(use absolute paths in `wayfire.ini` because the project is not installable yet).

Currently, you will see messages to the stdout when an output is added or removed, as well as when a view
is mapped/unmapped.

## Features, Roadmap, etc.

1. The exposed C API is **minimal**. Currently, it is more of a demo to show "yeah, it is possible to do".
2. I **do not plan to create a full wrapper** for the Wayfire API.
3. No guarantees of maintaining this, it may be abandoned at any time.
If you have serious intentions of maintaining a Wayfire C API, feel free to fork this.
4. The main goal is exploring whether plugins are possible in Rust. The C API is just an intermediate step,
    in the future I might start relying more on `bindgen`, if it turns out to be feasible.
    The plan is, however, not to create a feature-complete Rust wrapper (see previous points).
