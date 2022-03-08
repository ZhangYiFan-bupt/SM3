#include <string.h>
#include <stdio.h>
#include "sm3.h"
#include <string>
#include <iostream>

// 这个是可用的
int main(int argc, char* argv[])
{
	// string转成unsigned char即可
	// 再封装一次
	std::string input_str;
	std::cin >> input_str;

	int ilen = input_str.size();


	unsigned char* input = (unsigned char*)input_str.c_str();
	unsigned char output[32];

	printf("Message:\n");
	printf("%s\n", input);

	sm3(input, ilen, output);
	printf("Hash:\n   ");
	for (int i = 0; i < 32; i++)
	{
		printf("%02x", output[i]);
		// 打空格
		if (((i + 1) % 4) == 0) printf(" ");
	}
	printf("\n");

	
}