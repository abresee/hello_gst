#include <iostream>
#include <gst/gst.h>

int main(int argc, char ** argv) {
    GstElementFactory * factory;
    GstElement * element;

    gst_init(&argc, &argv);

    const char * elem = "fakesrc";
    factory = gst_element_factory_find(elem);
    if(!factory) {
        std::cout<<"Failed to find factory of type "<<elem<<"\n";
    }

    element = gst_element_factory_make(elem, "source");
    if (!element) {
        std::cout<<"Failed to create element, even though its factory exists!";
        return -1;
    }

    gst_object_unref(GST_OBJECT(element));
    return 0;
}
