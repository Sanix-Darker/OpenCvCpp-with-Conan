# Build a py module from cpp source code

Commands am running for this:

```shell
sh ./shells/install.sh # To install conan

sh ./shells/build.sh # To build the .so library

sh ./shells/build_whl.sh # To build the wheel and install the lib on the ./sites-package...
```


But when `python3 test.py`, getting this :

```python
Traceback (most recent call last):
  File "test.py", line 4, in <module>
    from opencv_lib import *
ImportError: dynamic module does not define module export function (PyInit_opencv_lib)
```