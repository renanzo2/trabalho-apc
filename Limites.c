#include <stdio.h>
#include <LIMITS.H>

int main() {
   printf("CharBit      |Valor Maximo  %d   | Valor Minimo: 0\n", CHAR_BIT);
   printf("CHAR         |Valor Maximo  %d   | Valor Minimo: %d\n", CHAR_MAX, CHAR_MIN);
   printf("SHORT        |Valor Maximo  %d   | Valor Minimo: %d\n", SHRT_MAX, SHRT_MIN);
   printf("INT          |Valor Maximo  %d   | Valor Minimo: %d\n", INT_MAX, INT_MIN);
   printf("UnsignedINT  |Valor Maximo  %u   | Valor Minimo: 0\n", UINT_MAX);
   printf("LongINT      |Valor Maximo  %ld  | Valor Minimo: %ld\n", LONG_MAX, LONG_MIN);
   printf("ULongINT     |Valor Maximo  %lu  | Valor Minimo: 0\n", ULONG_MAX);
   printf("LLongINT     |Valor Maximo  9223372036854775807   |Valor Minimo: -9223372036854775808\n");
   printf("ULLongINT    |Valor Maximo  18446744073709551615  |Valor Minimo: 0\n");
   return 0;
}
