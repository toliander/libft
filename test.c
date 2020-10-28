#include <string.h>
#include <stdio.h>                       /* для printf() */

char  buf[10];                      // буфер размером меньше строки

int     main(void)
{
   const char *str = "образец строки";
   size_t sz;

   buf[9] = '\0';                   // избыточная инициализация для отладочной печати

   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);

   sz = strlcpy(buf, str, sizeof(buf));    
   if (sz >= sizeof(buf))      
      printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  \"%s\"\n", buf);

   return 0;
}