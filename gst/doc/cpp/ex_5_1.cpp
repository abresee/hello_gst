#include <iostream>
#include <gst/gst.h>

int main(int argc, char ** argv) {
    GstElement * element;
    gst_init(&argc, &argv);

    const char * elem = "fakesrc";
    element = gst_element_factory_make(elem, "source");
    if (!element) {
        std::cout << "Failed to create element of type"<< elem << std::endl;
        return -1;
    }

    gst_object_unref(GST_OBJECT(element));
    return 0;
}
