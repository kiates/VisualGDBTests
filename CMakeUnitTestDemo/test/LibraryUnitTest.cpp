#include <gtest/gtest.h>
#include <stdio.h>

TEST(LibraryFixture, Test1)
{
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 2); 	//<= This test should fail here
}
