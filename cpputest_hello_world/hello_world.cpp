#include "hello_world.h"

std::string moops::hello_world::speak() { return std::string("Hello world");}
std::string moops::hello_world::speak(std::string name) { return std::string("Hello ") + name;}
void moops::hello_world::write(){twriter.write(speak());}
int moops::hello_world::main(int argc, char** argv){
	std::cout << "I'm a dufus.";
}

