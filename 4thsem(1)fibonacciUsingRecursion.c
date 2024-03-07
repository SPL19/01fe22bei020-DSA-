#include <stdio.h>
void fibonacci(int,int,int);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    fibonacci(n, 0, 1);


}

void fibonacci(int n, int a, int b)
 {
    if (n <= 0)
        return;
    else
    printf(" %d", a);
    fibonacci(n - 1, b, a + b);
}


