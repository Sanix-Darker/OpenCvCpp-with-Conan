//#include <boost/python/module.hpp>
// #include <boost/python/class.hpp>
// #include <boost/python/scope.hpp>

#include <boost/python.hpp>
#include "opcv.hpp"

BOOST_PYTHON_MODULE(opcv)
{
    using namespace boost::python;
    def("printt", printt);
    def("test_cam", test_cam);
}