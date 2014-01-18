cimport ctest

cdef class Test:
    def __cinit__(self, name):
        byte_name = bytes(name,"ascii")
        ctest.printz(byte_name);
