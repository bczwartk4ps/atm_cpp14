#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../../src/ATM.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../../src/ATM.cxx");

class ATM_tests : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(ATM_tests);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_withdraw);
        CPPTEST_TEST(test_deposit);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST(test_show_balance);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_withdraw();
        void test_deposit();
        void test_show_balance();
};

CPPTEST_TEST_SUITE_REGISTRATION(ATM_tests);

void ATM_tests::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void ATM_tests::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void ATM_tests::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void ATM_tests::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_withdraw */
void ATM_tests::test_withdraw()
{
    Bank bank;
    Account & acct = *bank.addAccount();
    BaseDisplay display;
    ATM atm(& bank, &display);

    acct.deposit(100.0);
    atm.viewAccount(acct.getAccountNumber(), acct.getPassword());

    atm.withdraw(30.0);

    CPPTEST_ASSERT_DOUBLES_EQUAL(70.0, acct.getBalance(), 0.001);

}
/* CPPTEST_TEST_CASE_END test_withdraw */

/* CPPTEST_TEST_CASE_BEGIN test_deposit */
void ATM_tests::test_deposit()
{
    Bank bank;
    Account & acct = *bank.addAccount();
    BaseDisplay display;
    ATM atm(& bank, &display);

    acct.deposit(100.0);
    atm.viewAccount(acct.getAccountNumber(), acct.getPassword());

    atm.makeDeposit(30.0);

    CPPTEST_ASSERT_DOUBLES_EQUAL(130.0, acct.getBalance(), 0.001);
}
/* CPPTEST_TEST_CASE_END test_deposit */

/* CPPTEST_TEST_CASE_BEGIN test_show_balance */
void ATM_tests::test_show_balance()
{
    Bank bank;
    Account & acct = *bank.addAccount();
    BaseDisplay display;
    ATM atm(& bank, &display);
    atm.viewAccount(acct.getAccountNumber(), acct.getPassword());

    atm.showBalance();
}
/* CPPTEST_TEST_CASE_END test_show_balance */
