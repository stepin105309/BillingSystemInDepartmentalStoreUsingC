
#include <Basic.h>
#include <CUnit.h>
#include <Calculate_Bill.h>

#include <Authenticate.h>
#include <Add_Product.h>
#include <Edit_Product.h>
#define PROJECT_NAME "BillingSystemInDepartmentalStore"

/* Prototypes for all the test functions */
void test_authenticate();
void test_Search_Product();
void test_Edit_Product_NotAvailble();
void test_Edit_Product_Available();
void test_Calculate_Bill();
void test_Add_Product_NotAvailable();
void test_Add_Product_Available();
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/

    CU_add_test(suite, "Edit_Product", test_Edit_Product_NotAvailble);
    CU_add_test(suite, "Edit_Product", test_Edit_Product_Available);
     CU_add_test(suite, "authenticate", test_authenticate);
    CU_add_test(suite, "Search_Product_BYCode", test_Search_Product);
    CU_add_test(suite, "ADD_Product", test_Add_Product_NotAvailable);
    CU_add_test(suite, "ADD_Product", test_Add_Product_Available);
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
void test_authenticate(void) {
  CU_ASSERT(1 == authenticate("sachin","admin123"));
}

void test_Search_Product(void) {
    CU_ASSERT_STRING_EQUAL("AVAILABLE" ,Search_Product_BYCode("123"));
    CU_ASSERT_STRING_EQUAL("NOT AVAILABLE",Search_Product_BYCode("456"));
}


void test_Edit_Product_NotAvailble(void) {
    CU_ASSERT(1 == check("456"));
}

void test_Edit_Product_Available(void){
    CU_ASSERT(0 == check("123"));
}

void test_Add_Product_NotAvailable(void) {
    CU_ASSERT_STRING_EQUAL("ADDED SUCCESSFULLY",Add_Product_BYCode("145"));
}

void test_Add_Product_Available(void){
    CU_ASSERT_STRING_EQUAL("ALREADY AVAILABLE",Add_Product_BYCode("123"));
}






