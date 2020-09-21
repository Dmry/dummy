python_files = files('python.cpp')

python = import('python')
python3 = python.find_installation('python3')
pybind11_dep = dependency('pybind11', fallback: ['pybind11', 'pybind11_dep'])

python3.extension_module('dummy', python_files, dependencies: [pybind11_dep])