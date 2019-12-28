# from setuptools import setup

# setup(
#     name='opencvcamcpp',
#     version='0.1',
#     py_modules=['./build/bin/OpencvCam']
# )
from setuptools import setup, Distribution


class BinaryDistribution(Distribution):
    def has_ext_modules(opencv_lib):
        return True

setup(
    name='opencv_lib',
    version='1.0',
    description='opencv_lib Library',
    package_data={
        'opencv_lib': ['./build/lib/opencv_lib.so'],
    },
    distclass=BinaryDistribution
)