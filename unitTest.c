#include <stdio.h>
#include "minunit.h"
#include "excercise.c"

int tests_run = 0;

static char * test_mp_of_a_number1(){
    mu_assert("Error calculating multiplicative persistence of 39.\n", Persistence(39) == 3);
    return 0;
} 

static char * test_mp_of_a_number2(){
    mu_assert("Error calculating multiplicative persistence of 2677889.\n", Persistence(2677889) == 8);
    return 0;
} 

static char * test_mp_of_a_number3(){
    mu_assert("Error calculating multiplicative persistence of 26888999.\n", Persistence(26888999) == 9);
    return 0;
} 

static char * all_tests(){
    mu_run_test(test_mp_of_a_number1);
    mu_run_test(test_mp_of_a_number2);
    mu_run_test(test_mp_of_a_number3);
    return 0;
}

int main(){
    char *result = all_tests();
    if(result != 0) printf("%s\n", result);
    else{
        printf("All tests passed.\n");
    }
    printf("Tests run: %d\n", tests_run);
    return result != 0;
}
