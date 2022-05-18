#define FBXIMP_IMPL
#include "fbximp/fbximp.hpp"

int main(int argc, char** argv)
{
	if (argc >= 2)
	{
		fbximp::FBX fbx{ argv[1] };
	}

	return 0;
}