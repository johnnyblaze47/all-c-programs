#include<stdio.h>//switch statement: check whether the entered lowercase character is vowel or 'z' or a consonant//
 main()
{
	char ch;
	printf("\nEnter a lower cased alphabet (a-z):");
	scanf("%C", &ch);
	if (ch < 'a' || ch > 'z')
	printf("\nCHARACTER NOT A LOWER CASED ALPHABET");
	else
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("\nCHARACTER IS A VOWEL");
		break;
		case 'z':
		printf("\nLAST ALPHABET (z) WAS ENTERED");
		break;
		default:
		printf("\nCHARACTER IS A CONSONANT");	
	}
	
}
