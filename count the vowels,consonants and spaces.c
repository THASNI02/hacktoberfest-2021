main()
{
	char W[25];
	int i,countvowel=0,countcons=0,countspace=0;
	printf("Enter a string:");
	gets(W);
	for(i=0;W[i]!='\0';i++)
	switch(W[i])
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':countvowel++;
		      break;
		case ' ':countspace++;
		      break;
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':countcons++;
		      break;
	}
	printf("The given word consist of %d vowels\n",countvowel);
	printf("The given word consist of %d consonents\n",countcons);
	printf("The given word consist of %d spaces\n",countspace);
}
