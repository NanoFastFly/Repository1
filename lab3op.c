#include <stdio.h> 
#define N 100 
int Konec(char c)
{
	if (c == '!' || c == '?' || c == '.' || c == '\0')
		return 1;
	return 0;
}
int Razdelitel(char c)
{
	if (c >= 'a' && c <= 'z')
		return 0;
	if (c >= 'A' && c <= 'Z')
		return 0;
	if (Konec(c))
		return 0;
	return 1;
}
int Lenght(char s[])
{
	int count = 0;
	for (int i = 0; !(Konec(s[i]) || Razdelitel(s[i])); i++)
		count++;
	return count;
}
//int Words(char s[]) {}

void main()
{
	char s[N], b;
	//int g = Words(s);

	int i = 0;
	int k = 0;
	int count = 0;
	int l = 0;
	char b, x;

	while (1) {
		scanf_s("%c", &s[i]);
		if (s[i] == '!' || s[i] == '?' || s[i] == '.' || s[i] == '\0') {
			break;
		}

		++i;
	}
	scanf_s("%c", &x);
	scanf_s("%c", &b);
	if (!(b >= 'a' && b <= 'z' || b >= 'A' && b <= 'Z')) {
		printf_s("I've changed this string");
		return 0;
	}

	i = 0;
	while (!Konec(s[i]))
	{
		while (Razdelitel(s[i])) {
			i++;
		}
		if (Konec(s[i]))
			return count;
		while (Razdelitel(s[i]) || Konec(s[i])) {
			k++;
			i++;

		}
		if (!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || ' ')) {
			printf_s("Error symbol");
			return 0;
		}
		if (k > 20) {
			printf_s("Error word");
			return 0;
		}
		count++;
		k = 1;
		if (s[i - 1] == b) {
			l = count;
		}
	}
	if (count > 30) {
		printf_s("Error sentence");
		return 0;
	}
	if (l >= 0) {
		printf_s("Error symbol2");
		return 0;
	}
	printf_s("%d", l);
	//return l;

	printf_s("\nEnter key");
	scanf_s("%d");
}