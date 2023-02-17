Copyright (C) 2023, VadRov, all right reserved.
# stm32f401ccu6_ili9341_ReadImage
 The project demonstrates reading pixel color data from the ili9341 and st7789 displays controllers memory into a buffer for further processing or saving a background image before displaying a sprite.
 
 Проект демонстрирует считывание данных о цвете пикселей из памяти контроллеров дисплеев ili9341 и st7789 в буфер для дальнейшей обработки или сохранения фонового изображения перед отображением спрайта.
 
 Схема подключения:
 
 ![stm32 + ili9341 чтение запись схема подключения](https://user-images.githubusercontent.com/111627147/218332686-c31b97b0-825f-4a06-a27b-136516d75d08.jpg)

Картинка работы проекта ili9341 (full-duplex mode, SPI_HALF_DUPLEX_READ = 0, см. display.h):

![картинка работы примера](https://user-images.githubusercontent.com/111627147/218332943-08a62d9b-a129-4635-b699-f1c1acf6a2e7.jpg)

Картинка работы проекта st7789  (half-duplex mode, SPI_HALF_DUPLEX_READ = 1, см. display.h):

![1676621517605](https://user-images.githubusercontent.com/111627147/219589474-9d5479b4-de3e-4f77-b490-09a6d193375a.jpg)

Автор: **VadRov**\
Контакты: [Youtube](https://www.youtube.com/@VadRov) [Дзен](https://dzen.ru/vadrov) [VK](https://vk.com/vadrov) [Telegram](https://t.me/vadrov_channel)\
Донат: [Поддержать автора](https://yoomoney.ru/to/4100117522443917)
