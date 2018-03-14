#include "hello_world.h"
#include <cassert>
#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

std::string test_result, expected_value;

TEST_GROUP(hello_world)
{
};

TEST(hello_world,should_greet_by_name)
{
	expected_value = std::string{"Hello Nick!\n"};
	moops::hello_world hello;
	test_result = hello.speak(std::string{"Nick"});
			std::cout << test_result;
			std::cout << expected_value;
		assert(test_result == expected_value);
}



int main (int argc, char ** argv)
{
	return CommandLineTestRunner::RunAllTests(argc,argv);
}

