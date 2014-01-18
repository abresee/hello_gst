from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

setup(
    cmdclass = {'build_ext': build_ext},
    ext_modules = [Extension("test", 
                   sources=["test.pyx", "test2.c"])]
)

#compile with the following command:
# python setup.py build_ext -i

#then run the following:
#python
#import test
#x = test.Test("cool story, bro")
