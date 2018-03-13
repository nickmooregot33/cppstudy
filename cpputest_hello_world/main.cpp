#include "hello_world.h"

int main (int argument_count, char** arguments){
	moops::hello_world hello;
	return hello.main(argument_count, arguments);
}
