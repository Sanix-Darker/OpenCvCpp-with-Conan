# Create a Python lib

```python
from setuptools import setup

setup(
    name='foo',
    version='0.1.2.3',
    py_modules=['foo']
)
```

Then you need to add MANIFEST.in file to pick your binary module file:

```shell
include foo.so
```

So you need 3 files:

```shell
foo.so
MANIFEST.in
setup.py
```


Now install Wheel library

```shell
pip install wheel
```


Now generate the wheel:

```shell
python setup.py bdist_wheel
```