#include <iostream>
#include <random>
#include <cmath>
#include <tuple>

auto randbits(int k){
 
    int int_result = 0;
    std::string bin_result;

    //random
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);

    for (int i = 0; i < k; ++i){
        int r = dis(gen);
        int_result += r * pow(2, i);
        bin_result = std::to_string(r) + bin_result;
    }

    struct result {int i; std::string k;};
    return result {int_result, bin_result};
}

int main(){

    int k;
    std::cout << "Enter the bit count:"; 
    std::cin >> k;
    
    auto [int_r, str_r] = randbits(k);

    std::cout << "dec: " << int_r
              << " / hex: " << std::hex << int_r
              << " / bin: " << str_r
              << std::endl;
    return 0;
}