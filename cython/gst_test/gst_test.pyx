cimport cgst_test

cdef class Gst_Test:
    def __cinit__(self):
        cgst_test.print_gst_version();
