/* Range dei tipi integrali */

#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("Range di Char Max %d\n", CHAR_MAX); /* 127 */
	printf("Range di Char Min %d\n", CHAR_MIN); /* - 128 */ 
	printf("Range di Int Max %d\n", INT_MAX); /* 2147483647 2^31*/
	printf("Range di Int Min %d\n", INT_MIN); /* - 2147483648 */ 
	return 0;
}
