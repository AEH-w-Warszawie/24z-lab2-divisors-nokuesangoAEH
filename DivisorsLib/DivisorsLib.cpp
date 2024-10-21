#include <vector>
#include <cmath> // for std::sqrt

std::vector<unsigned long long> divisors(unsigned long long number) {
    std::vector<unsigned long long> result;
    unsigned long long limit = std::sqrt(number);

    for (unsigned long long i = 1; i <= limit; ++i) {
        if (number % i == 0) {
            result.push_back(i);  // i is a divisor
            if (i != number / i) {
                result.push_back(number / i);  // number / i is a divisor, add only if it's different from i
            }
        }
    }
    return result;
}