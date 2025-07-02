# ft_printf

`ft_printf` es mi propia implementación de la función `printf` en C, desarrollada como proyecto de 42 Madrid. El objetivo es entender en profundidad cómo funciona la función original, gestionando conversiones, flags, formatos y argumentos variables desde cero, sin usar la función estándar.

El programa soporta los siguientes formatos: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X` y `%`, permitiendo imprimir caracteres, strings, punteros, números y hexadecimales con una gestión precisa del output.

## Compilación

Para compilar la librería, ejecuta:

```sh
make
```

Esto generará `libftprintf.a`, lista para ser utilizada en tus propios proyectos de C.

## Ejemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Número: %d\n", "mundo", 42);
    return 0;
}
```

---

Proyecto realizado por [@ancarret](https://github.com/ancarret) en 42 Madrid.
