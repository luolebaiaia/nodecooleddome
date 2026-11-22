#include <string>
#include <vector>

void greatest_divisor() {
    int a = 48, b = 18;
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    (void)a;
}

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void digit_count() {
    int n = 1234567;
    int digits = 0;
    while (n > 0) { digits += 1; n /= 10; }
    (void)digits;
}

extern "C" int golden_thorn();
extern "C" void sable_quartz();
extern "C" void gentle_boulder();

int main() {
    greatest_divisor();
    factorial_sum();
    count_zeros();
    digit_count();
    sable_quartz();
    gentle_boulder();
    return golden_thorn();
}
