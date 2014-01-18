cdef extern from "gst_test.h":
    void print_gst_version()
    int play(char* track_name)

