Copyright (C) 2023, VadRov, all right reserved.
# stm32f401ccu6_ili9341_ReadImage
 The project demonstrates reading pixel color data from the ili9341 and st7789 displays controllers memory into a buffer for further processing or saving a background image before displaying a sprite.
 
 Проект демонстрирует считывание данных о цвете пикселей из памяти контроллеров дисплеев ili9341 и st7789 в буфер для дальнейшей обработки или сохранения фонового изображения перед отображением спрайта.
 Для подключения дисплея на контроллере st7789 с выводом SDA, совмещающим вход и выход (in/out), потребуется вывод CS контроллера, который часто не выведен на разъем, а притянут к gnd. Если такого вывода на вашем дисплее с контроллером st7789 нет, то придется произвести небольшую модернизацию:
 1. Аккуратно отпаять шлейф дисплея.
 2. Перерезать дорожку на плате, ведущую к 8 выводу шлейфа (она соединена с gnd). Проверить, что она надежно отсечена от полигона gnd (лупа, микроскоп, нож/лезвие).
 3. Аккуратно припаять шлейф на свое место.
 4. Припаять тонкий провод к 8 выводу шлефа.
 Должно получиться примерно вот так (только флюс смойте, а я не буду, т.к. дисплей тестовый):
 
 ![1676622554056](https://user-images.githubusercontent.com/111627147/219596879-60c680ea-c751-458c-b1e7-2ff2d9a2ddd2.jpg)

 Схема подключения ili9341:
 
 ![stm32 + ili9341 чтение запись схема подключения](https://user-images.githubusercontent.com/111627147/218332686-c31b97b0-825f-4a06-a27b-136516d75d08.jpg)

Картинка работы проекта ili9341 (full-duplex mode, SPI_HALF_DUPLEX_READ = 0, см. display.h):

![картинка работы примера](https://user-images.githubusercontent.com/111627147/218332943-08a62d9b-a129-4635-b699-f1c1acf6a2e7.jpg)

Картинка работы проекта st7789  (half-duplex mode, SPI_HALF_DUPLEX_READ = 1, см. display.h):

![1676621517605](https://user-images.githubusercontent.com/111627147/219590777-910c0f9f-4ee3-4f11-9531-6bd030212ee4.jpg)

Автор: **VadRov**\
Контакты: [Youtube](https://www.youtube.com/@VadRov) [Дзен](https://dzen.ru/vadrov) [VK](https://vk.com/vadrov) [Telegram](https://t.me/vadrov_channel)\
Поддержать автора: [donate.qiwi](https://donate.qiwi.com/payin/VadRov)  [donate.yoomoney](https://yoomoney.ru/to/4100117522443917)
