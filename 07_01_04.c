#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;	/* �� ������ �ʱ갪�� 5�� 3���� ���� */
	/* OR ������ */
	int result1 = 0 || 1;
	/* AND ������, 3 && -1�� 1 && 1�� ���� ������ ��� ���� �� */
	int result2 = 3 && -1;
	/* OR ������, data1 == 3�� ����, data2 == 3�� �� */
	int result3 = data1 == 3 || data2 == 3;
	/* AND ������, data == 1�� ����, data2 == 3�� �� */
	int result4 = data1 == 1 && data2 == 3;
	/* data1�� 0�� �ƴ϶� ��. ���� NOT ������ �ϸ� ���� */
	int result5 = !data1;
	/* ���� ������ ��� ���� 0 �Ǵ� 1 */
	printf("result : %d, %d, %d, %d, %d", result1, result2, result3, result4, result5);
}