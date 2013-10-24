#include <iostream>
#include <gst/gst.h>

int main(int argc, char ** argv) {
    GstElementFactory * factory;

    gst_init(&argc, &argv);

    const char * elem = "fakesrc";
    factory = gst_element_factory_find(elem);

    if(!factory) {
        std::cerr<<"You don't have the "<<elem<<" element installed!\n";
        return -1;
    }

    g_print("The %s element is a member of the category %s.\n"
        "Description: %s\n",
        gst_plugin_feature_get_name(GST_PLUGIN_FEATURE(factory)),
        gst_element_factory_get_metadata(
            factory, GST_ELEMENT_METADATA_KLASS),
        gst_element_factory_get_metadata(
            factory, GST_ELEMENT_METADATA_DESCRIPTION));

    return 0;
}
