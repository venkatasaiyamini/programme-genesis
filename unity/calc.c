#include <CUnit/Basic.h>



#include <CUnit/CUnit.h>







/* Modify these two lines according to the project */



#include <file.h>



#define PROJECT_NAME    "calc"







/* Prototypes for all the test functions */



void test_add(void);



void test_subtract(void);



void test_multiply(void);



void test_divide(void);







/* Start of the application test */



int main() {



/* Note: Do not edit START*/



  /*Initialize and setup the Test Framework */



  if (CUE_SUCCESS != CU_initialize_registry())



    return CU_get_error();



  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);



/* Note: Do not edit END */



  



  



  /* Add your test functions in this format for testing*/



  CU_add_test(suite, "add", test_add);



  CU_add_test(suite, "subtract", test_subtract);



  CU_add_test(suite, "multiply", test_multiply);



  CU_add_test(suite, "divide", test_divide);











/* Note: Do not edit START*/



  /* Setup Test Framework to output the result to Screen */



  CU_basic_set_mode(CU_BRM_VERBOSE);



  



  /* run the unit test framework*/



  CU_basic_run_tests();



  



  /* Cleaning the Resources used by Unit test framework */



  CU_cleanup_registry();



/* Note: Do not edit END */



  return 0;



}







/* Write all the test functions */ 



void test_add(void) {



  CU_ASSERT(30 == add(10, 20));







 



  CU_ASSERT(40 == add(20, 20));







  



  CU_ASSERT(30 == add(10, 150));



  



  /* Dummy fail*/



  CU_ASSERT(1500 == add(750, 7500));



}







void test_subtract(void) {



  CU_ASSERT(-3 == subtract(0, 3));



  



 



  CU_ASSERT(2 == subtract(5, 3));







  



  CU_ASSERT(-3 == subtract(4, 3));







  /* Dummy fail*/



  CU_ASSERT(1 == subtract(1000, 900));



}







void test_multiply(void) {



  CU_ASSERT(0 == multiply(1, 0));







  



  CU_ASSERT(25 == multiply(5, 5));







 



  CU_ASSERT(12 == multiply(2, 33));



  



  /* Dummy fail*/



  CU_ASSERT(2 == multiply(2, 5));



}







void test_divide(void) {



  CU_ASSERT(0 == divide(1, 0));







 



  CU_ASSERT(2 == divide(4, 2));







  



  CU_ASSERT(5 == divide(4,4));



  



  /* Dummy fail*/



  CU_ASSERT(3 == divide(2, 2));


}
