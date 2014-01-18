cimport cgst_test

cdef class Gst_Test:
    def __cinit__(self):
        cgst_test.print_gst_version();
    def play(self, track_name):
        cgst_test.play(track_name);
