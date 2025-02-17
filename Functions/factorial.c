// program to find factorial of any given number.

// #include <stdio.h>
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // shows error if the user enters a negative integer
//     if (n < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");
//     else {
//         for (i = 1; i <= n; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", n, fact);
//     }

//     return 0;
// }


#include <stdio.h>
 int factorial(int a) {
    if (a == 0) return 1; 
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}
int main (){
    int n;
    printf ("Enter the no :");
    scanf ("%d", &n);
    printf ("%d! = %d",n,factorial(n));
    return 0;
}



// #include <stdio.h>

// int factorial(int a) {
//     if (a == 0) return 1; // Handling the edge case for 0! = 1
//     int fact = 1;
//     for (int i = 1; i <= a; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     // Adding a check for very large values
//     if (n < 0) {
//         printf("Factorial of negative numbers is not defined.\n");
//     } else if (n > 20) { // Adjust this threshold based on your needs
//         printf("Please enter a smaller number (<= 20) to avoid long computation times.\n");
//     } else {
//         printf("%d! = %d\n", n, factorial(n));
//     }

//     return 0;
// }
