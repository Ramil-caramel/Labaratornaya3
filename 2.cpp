#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist]() -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    float sum_el = 0, sum_kv = 0, sum_6 = 0, k1, k2, sum_k = 0, s1, s2, sum_s = 0;
    std::vector<int> v = generate_random_vector<int>(10, 1, 50);
    std::cin >> k1 >> k2;
    std::cin >> s1 >> s2;

    for (int i = 0; i < 10; ++i) {
        std::cout << v[i] << " "; 

        sum_el += v[i];
        sum_kv += v[i] * v[i];

        if (i < 6) {
            sum_6 += v[i];
        }

        if (i >= k1 and i <= k2) {
            sum_k += v[i];
        }

        if (i >= s1 and i <= s2) {
            sum_s += v[i];
        }
    }
    std::cout << std::endl << sum_el << " " << sum_kv << " " << sum_6 << " " << sum_k << " " << sum_el / 10 << " " << sum_s / (s2 - s1 + 1);
    
    
}
