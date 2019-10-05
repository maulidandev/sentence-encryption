/**
 * Author : Maulidan Nashuha
 * Date : 5 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>

char* encryp(char*, int);

int main(int argc, char const *argv[])
{
    char string[300];
    int shift;

    printf("Masukkan sebuah kalimat : ");
    scanf(" %[^\n]", string);

    printf("Masukkan besarnya pergeseran : ");
    scanf(" %d", &shift);

    encryp(string, shift);

    printf("Hasil enkripsi : %s\n\n", string);

    return 0;
}

char* encryp(char* string, int shift){
    shift = shift % 26;
    char* stringBackup = string;

    while (*stringBackup != '\0')
    {
        for (int i = 0; i < shift; i++)
        {
            if (*stringBackup == 'z' || *stringBackup == 'Z')
                *stringBackup -= 25;
            else
                *stringBackup = *stringBackup + 1;
        }
        
        stringBackup++;
    }

    return string;
}