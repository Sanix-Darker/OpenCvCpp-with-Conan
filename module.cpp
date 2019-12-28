//#include <boost/python/module.hpp>
// #include <boost/python/class.hpp>
// #include <boost/python/scope.hpp>

#include <boost/python.hpp>
#include <iostream>


void printt(std::string strr)
{
    std::cout << "Working Fine!" << std::endl;
    std::cout << "You said : " << strr;
}


BOOST_PYTHON_MODULE(opcv)
{
    using namespace boost::python;
    def("printt", printt);
}