#include <iostream>
#include <gst/gst.h>

int main(int argc, char **argv) {
    bool silent = false;
    gchar * savefile = nullptr;
    GOptionContext * ctx;
    GError * err = nullptr;
    GOptionEntry entries[] =  {
        {
            "silent", 's', 0, G_OPTION_ARG_NONE, &silent,
            "do not output status information", nullptr
        },
        {
            "output",  'o', 0, G_OPTION_ARG_STRING, &savefile,
            "save xml  representation of pipeline  to FILE and exit", "FILE"
        }, {nullptr}
    };

    ctx = g_option_context_new("- Your Application");
    g_option_context_add_main_entries(ctx, entries, nullptr);
    g_option_context_add_group(ctx, gst_init_get_option_group());

    if(!g_option_context_parse(ctx, &argc, &argv, &err)) {
        std::cerr << "Failed to initialize: "<< err->message << std::endl;
        g_error_free(err);
        return 1;
    }
    std::cout <<
        "Run me with --help to see the Application options appended." <<
        std::endl;
    return 0;
}
