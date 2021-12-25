/*
 * FreeRTOS PKCS #11 V2.2.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/*------------------------------------------------------------------------------ */
/* */
/* This code was auto-generated by a tool. */
/* */
/* Changes to this file may cause incorrect behavior and will be */
/* lost if the code is regenerated. */
/* */
/*----------------------------------------------------------------------------- */

#include "iot_test_pkcs11_globals.h"

TEST_GROUP( Full_PKCS11_ModelBased_VerifyMachine );

TEST_SETUP( Full_PKCS11_ModelBased_VerifyMachine )
{
    CK_RV rv = prvBeforeRunningTests();

    if( rv == CKR_CRYPTOKI_NOT_INITIALIZED )
    {
        rv = CKR_OK;
    }

    TEST_ASSERT_EQUAL_MESSAGE( CKR_OK, rv, "Setup for the PKCS #11 routine failed.  Test module will start in an unknown state." );

    rv = xInitializePkcs11Session( &xGlobalSession );
    TEST_ASSERT_EQUAL_MESSAGE( CKR_OK, rv, "Failed to open PKCS #11 session." );

    resetCredentials();
    generateValidSingingKeyPair();

    C_SignInit_normal_behavior();
    C_Sign_normal_behavior();
}

TEST_TEAR_DOWN( Full_PKCS11_ModelBased_VerifyMachine )
{
    pxGlobalFunctionList->C_Finalize( NULL_PTR );
    prvAfterRunningTests_Object();
}

void runAllVerifyTestCases()
{
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_0 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_1 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_2 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_3 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_4 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_5 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_6 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_7 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_8 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_9 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_10 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_11 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_12 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_13 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_14 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_15 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_16 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_17 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_18 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_VerifyMachine, path_19 );
}

TEST_GROUP_RUNNER( Full_PKCS11_ModelBased_VerifyMachine )
{
    xGlobalSlotId = 1;

    xGlobalMechanismType = CKM_ECDSA;
    runAllVerifyTestCases();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_0 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_normal_behavior();
    C_VerifyInit_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_1 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_2 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_exceptional_behavior_2();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_3 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_exceptional_behavior_3();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_4 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_exceptional_behavior_4();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_5 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    /*C_VerifyInit_exceptional_behavior_5(); */
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_6 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_exceptional_behavior_6();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_7 )
{
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_VerifyInit_exceptional_behavior_7();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_8 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_9 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_VerifyInit_exceptional_behavior_0();
    C_Verify_normal_behavior();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_10 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_1();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_11 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_2();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_12 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_3();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_13 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_4();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_14 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_5();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_15 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_4();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_16 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_3();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_17 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_2();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_18 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_1();
    C_Verify_normal_behavior();
    C_Verify_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_VerifyMachine, path_19 )
{
    C_Verify_exceptional_behavior_0();
    C_VerifyInit_normal_behavior();
    C_Verify_exceptional_behavior_1();
    C_Verify_normal_behavior();
    C_VerifyInit_normal_behavior();
    C_Verify_normal_behavior();
    C_Verify_exceptional_behavior_0();
}
