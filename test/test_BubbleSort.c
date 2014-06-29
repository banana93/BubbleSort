#include "unity.h"
#include "BubbleSort.h"

void setUp(void){}

void tearDown(void){}

void test_swap_should_swap_4_with_2(void)
{
	int array[] = {4, 2};
	swap(array, 0, 1);
	TEST_ASSERT_EQUAL(2, array[0]);
	TEST_ASSERT_EQUAL(4, array[1]);
}

void test_singleBubbleSort_given_3_and_6_should_return_3_and_6(void)
{
	int array[] = {3, 5};
	singleBubbleSort(array, 2, 2);
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
}

void test_singleBubbleSort_given_6_and_3_should_return_3_and_6(void)
{
	int array[] = {6, 3};
	singleBubbleSort(array, 2, 2);
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(6, array[1]);
}

void test_singleBubbleSort_given_3_10_9_4_should_return_3_9_10_4(void)
{
	int array[] = {3, 10, 9, 4};
	singleBubbleSort(array, 3, 3);
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(9, array[1]);
	TEST_ASSERT_EQUAL(10, array[2]);
	TEST_ASSERT_EQUAL(4, array[3]);
}

void test_singleBubbleSort_given_11_1_2_3_should_return_1_11_2_3(void)

{
	int array[] = {11, 1, 2, 3};
	singleBubbleSort(array, 4, 4);
	TEST_ASSERT_EQUAL(1, array[0]);
	TEST_ASSERT_EQUAL(11, array[1]);
	TEST_ASSERT_EQUAL(2, array[2]);
	TEST_ASSERT_EQUAL(3, array[3]);
}

void test_BubbleSort_given_1_20_14_13_11_should_return_1_11_13_14_20(void)
{
	int array[] = {1, 20, 14, 13, 11};
	BubbleSort(array, 5);
	TEST_ASSERT_EQUAL(1, array[0]);
	TEST_ASSERT_EQUAL(11, array[1]);
	TEST_ASSERT_EQUAL(13, array[2]);
	TEST_ASSERT_EQUAL(14, array[3]);
	TEST_ASSERT_EQUAL(20, array[4]);
}