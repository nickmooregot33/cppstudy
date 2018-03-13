#include "hello_world.h"

std::string moops::hello_world::speak() { return std::string("Hello world");}
std::string moops::hello_world::speak(string name) { return std::string("Hello ") + name};
void moops::hello_world::write(){twriter.write(speak())};
static int moops::hello_world::main(int argc, char** argv){
	cout << "I'm a dufus.";
}

