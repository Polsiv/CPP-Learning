#include <iostream>
#include <string>
#include <array>
#include <random>
#include <set>

int main() {
    std::string originalString = "#####-#####-#####";
    std::array<char, 14> replacementChars = {'1', '2', '5', '9', '9', 'H', 'I', 'I', 'J', 'N', 'P', 'R', 'W', 'Y'};
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, replacementChars.size() - 1);
    for (int j = 0; j < 1000; j++) {
        std::string randomCode = originalString;
        std::set<char> usedChars;
        for (int i = 0; i < randomCode.length(); i++) {
            if (randomCode[i] == '#') {
                int randomIndex;
                do {
                    randomIndex = dist(rng);
                } while (usedChars.count(replacementChars[randomIndex]) != 0);
                usedChars.insert(replacementChars[randomIndex]);
                randomCode[i] = replacementChars[randomIndex];
            }
        }
        std::cout << "Random code: " << randomCode << std::endl;
    }
    return 0;
}