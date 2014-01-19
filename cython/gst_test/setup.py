from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
from subprocess import check_output
from re import search

lib = "gstreamer-1.0"

def fsh(arg):
    r=[]
    for i in str(check_output(arg)).split():
        m=search("-[Il]([\w\d/.-]+)",i)
        if m:
            print("hit")
            r.append(m.group(1))
    print(r)
    return r

cflags = fsh(["pkg-config",lib,"--cflags"])
libs = fsh(["pkg-config",lib,"--libs"])

setup (
    cmdclass = {'build_ext': build_ext},
    ext_modules = [Extension("cygst",
                   sources=["gst_test.pyx", "gst_test2.c"],
                   include_dirs=cflags,             
                   libraries=libs)]
)
