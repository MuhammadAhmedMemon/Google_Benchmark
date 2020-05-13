#include <iostream>
#include "benchmark.h"
using namespace std;

#pragma comment(lib,"Shlwapi.lib")


static void BM_FindMax(benchmark::State& state) {
    for (auto x : state)
        std::max(10, 2);
}
//Register the function as a benchmark
BENCHMARK(BM_FindMax);


BENCHMARK_MAIN();