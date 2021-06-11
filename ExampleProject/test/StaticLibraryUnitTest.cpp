#include <gtest/gtest.h>
#include <ExampleProjectStaticLibrary.h>

TEST(StaticLibraryFixture, StaticSum)
{
	EXPECT_EQ(5, StaticSum(2, 3));
}
