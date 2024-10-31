#include <stdio.h>

int main() {
    for (int i = 1; i <= 15; ++i) {
        if (i % 2 == 0) {
            int kuadrat = i * i;
            printf("Bilangan genap: %d, Kuadrat: %d\n", i, kuadrat);
        }
    }
    return 0;
}