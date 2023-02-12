/*
 * textures.h
 *
 *  Текстуры и работа с ними для демо-проекта
 *
 *  Created on: Feb 12, 2023
 *      Author: VadRov
 *
 *  https://www.youtube.com/@VadRov
 *  https://dzen.ru/vadrov
 *  https://vk.com/vadrov
 *  https://t.me/vadrov_channel
 */

#ifndef SRC_TEXTURES_H_
#define SRC_TEXTURES_H_

#include "display.h"

//режим цвета изображения
typedef enum {
	MGL_IMAGE_COLOR_R3G3B2 = 0,		//8 бит без прозрачности: по 3 бита на составляющие r, g и 2 бита на составляющую b (256 цветов)
	MGL_IMAGE_COLOR_R5G6B5,			//16 бит без прозрачности: по 5 бит на составляющие r, b и 6 бит на составляющую g (65536 цветов)
	MGL_IMAGE_COLOR_A4R4G4B4,		//16 бит с прозрачностью: по 4 бита на составляющую цвета и 4 бита на прозрачность (4096 цветов)
	MGL_IMAGE_COLOR_R8G8B8,			//24 бита без прозрачности: по 8 бит на составляющую цвета (16777216 цветов)
	MGL_IMAGE_COLOR_A8R8G8B8,		//32 бита с прозрачностью: по 8 бит на составляющую цвета и 8 бит на прозрачность (16777216 цветов)
} MGL_IMAGE_COLOR_MODES;

//данные изображения
typedef struct {
	const void *data;			//указатель на массив с информацией о цвете
	int w, h;					//ширина и высота изображения
	MGL_IMAGE_COLOR_MODES mode; //тип цвета
} MGL_IMAGE;

extern const MGL_IMAGE image_melnica;
extern const MGL_IMAGE image_kamen;

uint32_t MGL_Color_gradient(uint32_t color1, uint32_t color2, uint8_t a);
void Draw_Texture(LCD_Handler *lcd, int x, int y, const MGL_IMAGE *image);

#endif /* SRC_TEXTURES_H_ */
