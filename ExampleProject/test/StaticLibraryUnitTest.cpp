#include <gtest/gtest.h>
#include <stdio.h>
#include <StaticSum.h>

TEST(StaticLibraryFixture, Test1)
{
	EXPECT_EQ(5, StaticSum(2, 3));
}
