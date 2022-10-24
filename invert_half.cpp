#include "imageio.h"
#include "invert_half.h"

void invert_half(std::string if_name, std::string of_name)
{
	using IMG = int[MAX_H][MAX_W];
	IMG img;
	int h, w;
	readImage(if_name, img, h, w);
	IMG new_img;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w / 2; j++)
			new_img[i][j] = img[i][j];					

		for (int j = w / 2; j < w; j++)
			new_img[i][j] = 255 - img[i][j];
	}
	writeImage(of_name, new_img, h, w);
	return;
}
