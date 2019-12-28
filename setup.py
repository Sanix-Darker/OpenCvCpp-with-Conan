# from setuptools import setup

# setup(
#     name='opencvcamcpp',
#     version='0.1',
#     py_modules=['./build/bin/OpencvCam']
# )
from setuptools import setup, Distribution


class BinaryDistribution(Distribution):
    def has_ext_modules(opcv):
        return True

setup(
    name='opcv',
    version='1.0',
    description='opcv Library',
    package_data={
        'opcv': ['./build/lib/opcv.so'],
    },
    distclass=BinaryDistribution
)