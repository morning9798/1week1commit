#include <stdio.h>
// ¼·¾¾¸¦ È­¾¾·Î °è»ê ÇÔ¼ö Á¤ÀÇ
double getFer(int cel) {
	return cel * 1.8 + 32;
}

int main() {
	int cel; // ¼·¾¾°ª ÀúÀåÇÏ´Â º¯¼ö ¼±¾ð
	printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ã¿À>>");
	scanf_s("%d", &cel);
	printf("¼·¾¾ ¿Âµµ = %d¡ÆC, È­¾¾ ¿Âµµ = %.1f¡ÆF\n", cel, getFer(cel));
}