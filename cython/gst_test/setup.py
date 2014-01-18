from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

setup(
    cmdclass = {'build_ext': build_ext},
    ext_modules = [Extension("cygst",
                   sources=["gst_test.pyx", "gst_test2.c"],
                   include_dirs=["/usr/include/gstreamer-1.0", 
                                 "/usr/include/glib-2.0",
                                 "/usr/lib/x86_64-linux-gnu/glib-2.0/include"],
                   libraries=["gstreamer-1.0","gobject-2.0","glib-2.0"])]
)
