#include <stdio.h>
#include <stdint.h>
//learning how to create a program (with io functionality) that can copy files

typedef uint8_t BYTE; //getting an unsigned integer of 8 bits, called BYTE

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb"); //opening a file in location 1 called src, and reading it in binary mode using "rb"
    FILE *dst = fopen(argv[2], "wb"); //opening a file n location 2 called dst, and writing to it in binary mode using "wb"

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) !=0) //read 'b' one byte at a time while there is something to be read (ie. =1), from the FILE called src
    {
        fwrite(&b, sizeof(b), 1, dst); //write to b one byte at a time, to the FILE called dst
    }

    fclose(dst);
    fclose(src);
}

//to run this program:   ./cp.c samplefile.jpg samplefile_backup.jpg
