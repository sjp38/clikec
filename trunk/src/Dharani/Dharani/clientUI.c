/**@file	clientUI.c
 * @brief	�׽�Ʈ Ŭ���̾�Ʈ �ڵ带 ���� ui ����. entry point �� main �Լ��� �����ϰ� �ִ�.
 * @author	siva
 */

#include <stdio.h>
#include <string.h>

#define COMMAND_MAX_LENGTH	256


/**@brief	��Ʈ�� ����Ʈ. Dharani �� �׽�Ʈ�� ���� character user interface �� �����Ѵ�.
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