#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../src/Account.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM_Cpp14/src/Account.cxx");

class Account_tests : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(Account_tests);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_account_ctor_initial);
        CPPTEST_TEST(test_account_ctor_initial_zero);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST(test_move_ctor);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_account_ctor_initial();
        void test_account_ctor_initial_zero();
        void test_move_ctor();
};

CPPTEST_TEST_SUITE_REGISTRATION(Account_tests);

void Account_tests::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void Account_tests::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void Account_tests::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void Account_tests::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_account_ctor_initial */
void Account_tests::test_account_ctor_initial()
{
    ::Account acct(123.0);
    CPPTEST_ASSERT_DOUBLES_EQUAL(123.0, acct.getBalance(), 0.001);
}
/* CPPTEST_TEST_CASE_END test_account_ctor_initial */

/* CPPTEST_TEST_CASE_BEGIN test_account_ctor_initial_zero */
void Account_tests::test_account_ctor_initial_zero()
{
    ::Account acct(0.0);
    CPPTEST_ASSERT_DOUBLES_EQUAL(0.0, acct.getBalance(), 0.001);
}
/* CPPTEST_TEST_CASE_END test_account_ctor_initial_zero */

/* CPPTEST_TEST_CASE_BEGIN test_move_ctor */
void Account_tests::test_move_ctor()
{
	// const double d = 123.0;
	// ::Account tgt(::Account(d));
	// double ret = tgt.getBalance();

	// CPPTEST_ASSERT_DOUBLES_EQUAL(d, ret, 0.001);
	CPPTEST_FAIL("Account_tests::test_move_ctor - TBD");
}
/* CPPTEST_TEST_CASE_END test_move_ctor */
