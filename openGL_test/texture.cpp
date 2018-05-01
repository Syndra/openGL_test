//#include "commonLib.h"
//GLuint loadBMP_custom(const char* imagepath) 
//{
//	unsigned char header[54];
//	unsigned int dataPos;
//	unsigned int width, height;
//	unsigned int imageSize;
//
//	unsigned char *data;
//
//	FILE *file = fopen(imagepath, "rb");
//	if (!file) 
//	{
//		printf("image could not be opened\n");
//		return 0;
//	}
//	if (fread(header, 1, 54, file) != 54) 
//	{
//		printf("Not a correct BMP file\n");
//		return false;
//	}
//	if (header[0] != 'B' || header[1] != 'M') 
//	{
//		printf("Not a corrent BMP file\n");
//		return 0;
//	}
//	dataPos = *(int*)&(header[0x0A]);
//	imageSize = *(int*)&(header[0x22]);
//	width = *(int*)&(header[0x12]);
//	height = *(int*)&(header[0x16]);
//	if (imageSize == 0) imageSize = width * height * 3;
//	if (dataPos == 0) dataPos = 54;
//
//	data = new unsigned char[imageSize];
//	fread(data, 1, imageSize, file);
//	fclose(file);
//}