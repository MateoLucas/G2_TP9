/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest.c
 * Author: mateo
 *
 * Created on October 15, 2020, 7:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SUCCESS_MESSAGE ("OK\n")
/*
 * Simple C Test Suite
 */

void testPalin(int esperado, int llamado)
{
    static int n=0;
    n++;
    printf("newsimpletest test 1\n");
    if(llamado==esperado)
        printf(SUCCESS_MESSAGE);
    else
        printf("%%TEST_FAILED%% time=0 testname=puerto_correcto_%d (test_bitGet)\n", n);
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% test1 (newsimpletest)\n");
    test1();
    printf("%%TEST_FINISHED%% time=0 test1 (newsimpletest) \n");

    printf("%%TEST_STARTED%% test2 (newsimpletest)\n");
    test2();
    printf("%%TEST_FINISHED%% time=0 test2 (newsimpletest) \n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
