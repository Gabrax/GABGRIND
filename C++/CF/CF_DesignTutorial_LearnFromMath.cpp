#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>
 
int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    if(T % 2 == 0) std::cout << 4 << " "<< T-4 << '\n';
    else std::cout << 9 << " " <<  T-9 << '\n';
    
}
