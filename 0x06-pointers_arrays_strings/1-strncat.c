/**
 * _strancat-concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Returm: char value
 */
char*_strncat(char*dest, char*src,intn)
{
	int i;
	int j;
	for (j=0; dest[j]!='\0';j++)
	{}
	for (i=0; i<n&&src[i]!='\0';i++)
	{
		dest[j+i]=src[i];
	}
	dest[j+i]='\0';
	return(dest);
}
