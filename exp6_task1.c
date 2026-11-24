#include <stdio.h>

void counterFunction() {
    static int count = 0; // Retains its value between function calls
    count++;
    printf("Function called %d time(s).\n", count);
}

int main() {
    printf("Demonstrating Storage Classes (Static Counter):\n");
    
    // Calling the function multiple times
    counterFunction();
    counterFunction();
    counterFunction();
    
    return 0;
}
