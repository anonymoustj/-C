#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
FILE *fp;
char str[128];
if ((fp=fopen(argv[1], "w") )==NULL) {
printf("Cannot open file.\n");
exit (1);
}
while(!feof (fp)) {
if (fgets(str, 126, fp))
printf("%s", str);
}
fclose(fp);
return 0;
}
