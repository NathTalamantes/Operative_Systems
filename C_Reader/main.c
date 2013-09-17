#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
	{
		FILE *fp;
        int c,cnext;
        if (!(fp = fopen("output.txt", "r"))) {
        perror(argv[1]);
        exit(1);
        }
        while ((c = fgetc(fp)) != EOF) {
            if(c=='/'){
                cnext=fgetc(fp);
                if(cnext=='*'){
                    while(c=fgetc(fp)!='*'){
                    //no se imprime
                    }
                    if(c=fgetc(fp)!=EOF && c!='/'){
                    }
                }
                if(cnext=='/'){
                    while(c=fgetc(fp)!='\n'){
                        //pasa renglon
                    }
                    puts("\n");
                }

            }


           else printf("%c",c);

        }
        fclose(fp);
		return 0;
	}
