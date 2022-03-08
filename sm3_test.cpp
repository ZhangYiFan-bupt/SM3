#include <string.h>
#include <stdio.h>
#include "sm3.h"
#include <string>
#include <iostream>

// ����ǿ��õ�
int main(int argc, char* argv[])
{
	// stringת��unsigned char����
	// �ٷ�װһ��
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
		// ��ո�
		if (((i + 1) % 4) == 0) printf(" ");
	}
	printf("\n");

	
}