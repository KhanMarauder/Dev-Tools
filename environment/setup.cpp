#include <iostream>


int main() {
	std::cout << "Starting setup...\n";
	system("mkdir -p build/elf build/bin build/o src/rust src/cpp src/lib src/asm");
	std::cout << "Made directories! Starting Makefile...";
	system("touch Makefile");
	std::cout << "Done!\n";
	std::cout << "Done setting up! If you need help with the Makefile,\nclick here: 'https://github.com/KhanMarauder/Dev-Tools/tutorials/Makefile.md'\n(You may have to copy-paste the link in a browser)!\n";
}
