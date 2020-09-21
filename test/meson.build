catch2 = subproject('catch2')
catch2_dep = catch2.get_variable('catch2_dep')

exe = executable('dummy_test', 'test.cpp', dependencies : catch2_dep)
test('Dummy test', exe)