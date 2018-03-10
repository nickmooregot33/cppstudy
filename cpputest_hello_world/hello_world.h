#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H
#include <iostream>
#include <string>

namespace moops {
	class hello_world {
	public:
		hello_world(): twriter{new basic_writer{}}{};
		std::string speak();
		std::string speak(std::string name);
		void write();
		int main(int argc, char** argv);
		~hello_world(){ delete twriter;}
	private:
		basic_writer& twriter;
	};
	class basic_writer {
	public:
		basic_writer(){}
		void write(std::string s) {std::cout << s << '\n';}
	};
};

#endif

