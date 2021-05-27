#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../src/Bank.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../src/Bank.cxx");

class Bank_tests : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(Bank_tests);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_invalid_account);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_invalid_account();
};

CPPTEST_TEST_SUITE_REGISTRATION(Bank_tests);

void Bank_tests::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void Bank_tests::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void Bank_tests::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void Bank_tests::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_invalid_account */
void Bank_tests::test_invalid_account()
{
	Bank bank;
    Account & acct = *bank.addAccount();
	Account * pAcct = bank.getAccount(acct.getAccountNumber(), "incorrect password");
	CPPTEST_ASSERT_EQUAL(0, pAcct);
}
/* CPPTEST_TEST_CASE_END test_invalid_account */
