#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../src/BaseDisplay.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../src/BaseDisplay.cxx");

class BaseDisplay_tests : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(BaseDisplay_tests);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_disp_type);
        CPPTEST_TEST(test_show_transactions);
        CPPTEST_TEST(test_show_transactions_invalid);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_disp_type();
        void test_show_transactions();
        void test_show_transactions_invalid();
};

CPPTEST_TEST_SUITE_REGISTRATION(BaseDisplay_tests);

void BaseDisplay_tests::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void BaseDisplay_tests::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void BaseDisplay_tests::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void BaseDisplay_tests::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_disp_type */
void BaseDisplay_tests::test_disp_type()
{
    BaseDisplay disp;
    BaseDisplay::DisplayType type = disp.getType();
    CPPTEST_ASSERT_EQUAL(BaseDisplay::DisplayType::SECURE, type);
}
/* CPPTEST_TEST_CASE_END test_disp_type */

/* CPPTEST_TEST_CASE_BEGIN test_show_transactions */
void BaseDisplay_tests::test_show_transactions()
{
    BaseDisplay disp;
    disp.showTransaction(::UserRequest::REQUEST_TRANSACTIONS, 0.0);
}
/* CPPTEST_TEST_CASE_END test_show_transactions */

/* CPPTEST_TEST_CASE_BEGIN test_show_transactions_invalid */
void BaseDisplay_tests::test_show_transactions_invalid()
{
    BaseDisplay disp;
    disp.showTransaction(::UserRequest::REQUEST_INVALID, 0.0);
}
/* CPPTEST_TEST_CASE_END test_show_transactions_invalid */
