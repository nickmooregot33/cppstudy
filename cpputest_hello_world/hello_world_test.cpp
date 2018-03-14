#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

std::string test_result, expected_value;

TEST_GROUP(hello_world)
{
};

TEST(hello_world,should_greet_by_name)
{
	expected_value = std::string{"Hello Nick!"};
	moops::hello_world hello;
	assert hello.speak("Nick") == expected_value;
}



int main (int argc, char ** argv)
{
	return CommandLineTestRunner::RunAllTests(argc,argv);
}

