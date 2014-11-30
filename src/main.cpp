#include <iostream>

#include <upstream1/upstream1.h>
#include <upstream2/upstream2.h>

int main(int argc, char* argv[])
{
    std::cout << "Hello from upstream packages " <<
        upstream1::upstream_version() << " and " <<
        upstream2::upstream_version() << std::endl;
    return 0;
}

