#include <benchmark/benchmark.h>
#include <exception>
#include <memory>
#include "c_plus_plus_template/c_plus_plus_template.hpp"

static void BM_TEST_INIT(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    std::shared_ptr<c_plus_plus_template::CPlusPlusTemplate> c_plus_plus_template =
        std::make_shared<c_plus_plus_template::CPlusPlusTemplate>();
  }
}
BENCHMARK(BM_TEST_INIT)->Threads(1)->Repetitions(10);

BENCHMARK_MAIN();