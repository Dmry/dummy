bench_files = files('dummy.cpp')

googlebenchmark = subproject('google-benchmark')
googlebenchmark_dep = googlebenchmark.get_variable('google_benchmark_dep')

exe = executable('dummy_benchmark', bench_files, dependencies : [googlebenchmark_dep])