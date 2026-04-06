// #include <stdio.h>
// int main()
// {
//     // int a = 10;
//     // int b = 20;
//     int a, b;

//     scanf("a = %d b = %d", &a, &b);
//     // addition
//     int sum = a + b;
//     printf("summation = %d\n", sum);
//     // subtraction
//     int sub = a - b;
//     printf("subtraction = %d\n", sub);
//     // multiplication
//     int mult = a * b;
//     printf("multiplication = %d\n", mult);

//     int div = a / b;
//     printf("division = %d\n", div);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     // int a = 10;
//     // int b = 20;
//     int a;
//     float b;

//     scanf("a = %d b = %f", &a, &b);

//     float div = a / b;
//     printf("division = %f\n", div);
//     printf("division = %.2f\n", div);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;

//     scanf("a = %d b = %d", &a, &b);

//     int rem = a % b;
//     printf("remaining = %d",rem);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int tk;

    scanf("tk = %d", &tk);

    if(tk <= 100){
        printf("Tumi Gorib!\n");

    }else{
        printf("Ore Borolok");
    }

    return 0;
}