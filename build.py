from distutils.core import setup
from Cython.Build import cythonize

setup(
    name='add',
    ext_modules=cythonize('add.pyx'),
)