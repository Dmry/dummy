#include <benchmark/benchmark.h>

int some_function()
{
    return 1 == 1;
}

static void benchmark_some_function(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    some_function();
  }
}
// Register the function as a benchmark
BENCHMARK(benchmark_some_function);
// Run the benchmark
BENCHMARK_MAIN();