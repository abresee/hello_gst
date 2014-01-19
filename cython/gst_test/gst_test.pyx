cdef extern from "gst_test.h":
    cdef cppclass Gst_Test:
        Gst_Test()
        void print_gst_version()

cdef class PyGst_Test:
    cdef Gst_Test *thisptr
    def __cinit__(self):
        self.thisptr = new Gst_Test()
    def gst_init(self):
        self.thisptr.print_gst_version()
