/**
 * @file esjpg.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Es JPG?
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>

int main()
{
    unsigned char magia1, magia2;
    FILE *archi = fopen("b.mp3", "rb");

    fread(&magia1, sizeof(unsigned char), 1, archi);
    fread(&magia2, sizeof(unsigned char), 1, archi);
    //printf("%x, %x\n", magia1, magia2);
    if(magia1 == 0xFF && magia2 == 0xD8) {
        printf("Si es JPG 😍\n");
        return 0;
    } else {
        printf("No es JPG 😩\n");
        return 1;
    }

    fclose(archi);
    
    return 0;
}
