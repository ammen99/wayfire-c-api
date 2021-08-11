c_api_test = shared_module('c-api-test',
    ['test-plugin.c'],
    link_with: [c_api],
    include_directories: [include_directories('../')],
    install: true,
    install_dir: wayfire.get_variable(pkgconfig: 'plugindir'))
