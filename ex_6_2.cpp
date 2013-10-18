#include <iostream>
#include <gst/gst.h>

int main(int argc, char **argv) {
    GstElement *player;

    gst_init(&argc, &argv);

    player = gst_element_factory_make("oggvorbisplayer","player");

    g_object_set(player, "location", "/home/allie/helloworld.ogg", nullptr);
    gst_element_set_state(GST_ELEMENT(player), GST_STATE_PLAYING);

    while(true);
    return 0;
}
