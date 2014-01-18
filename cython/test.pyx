cimport ctest

cdef class Test:
    def __cinit__(self, name):
        ctest.printz(name)
