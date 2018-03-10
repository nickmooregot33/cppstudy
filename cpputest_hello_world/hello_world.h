#include <iostream>
#include <string>

namespace moops {
	class hello_world {
	public:
		hello_world(): twriter{new basic_writer c()}{};
		std::string speak();
		std::string speak(std::string name);
		void write();
		static int main(int argc, char** argv);
		~hello_world(){ delete twriter;}
	private:
		basic_writer& twriter;
	};
	class basic_writer {
	public:
		basic_writer(){}
		void write(std::string s) {cout << s << '\n';}
	};
};

