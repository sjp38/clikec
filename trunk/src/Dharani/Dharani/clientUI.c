/**@file	clientUI.c
 * @brief	테스트 클라이언트 코드를 위한 ui 구성. entry point 인 main 함수를 포함하고 있다.
 * @author	siva
 */

#include <stdio.h>
#include <string.h>

#define COMMAND_MAX_LENGTH	256


/**@brief	엔트리 포인트. Dharani 의 테스트를 위한 character user interface 를 구성한다.
 */
int main(void)
{
	char input[COMMAND_MAX_LENGTH];

	while(1)
	{
		printf(" >> ");
		gets_s(input, COMMAND_MAX_LENGTH);

		printf("your input : %s\n", input);
		if(strcmp(input, "quit") == 0)
		{
			break;
		}
	}

	return 0;
}