#include <iostream>
#include "invert.h"
#include "invert_half.h"

int main()
{
	invert("image1.pgm", "taskA.pgm");
	invert_half("image1.pgm", "taskB.pgm");
	return 0;
}
