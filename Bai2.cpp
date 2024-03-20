#include <iostream>
#include <cmath>

bool is_chinh_phuong(int num) {
  
    if (num < 0)
        return false;
    int sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

void dem_so_chinh_phuong(int n) {
  
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (is_chinh_phuong(i)) {
            std::cout << i << std::endl;
            count++;
        }
    }
    std::cout << "Tổng số chính phương: " << count << std::endl;
}

int main() {
    
    int n;
    std::cout << "Số Chính Phương là: ";
    std::cin >> n;

    dem_so_chinh_phuong(n);

    return 0;
}
