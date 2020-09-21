#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

PYBIND11_MODULE(dummy_python, m)
{
    m.def("hello", []() { std::cout << "Hello, world!"; });
}