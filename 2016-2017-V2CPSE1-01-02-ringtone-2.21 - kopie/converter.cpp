#include <iostream>

int main( int argc, char **argv ){
   std::cout 
      << "#include \"player.hpp\"\n"
      << "const char * write_player::" << argv[ 1 ] << "(){\n"
      << "   return \"" << argv[ 2 ] << "\";\n"
      << "}\n";
}