##	ft_printf
A function which is a custom printf function from C.
<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=c" />
  </a>
</p>

## Instalation

```shell
$ make
```
## Useage example

```
#include "ft_printf.h"

int main()
{
	ft_printf("ft_print   : I am %d years old", 200);
	printf("\n");
	printf("original print: I am %d years old", 200);
	printf("\n");
	return (0);
}
```

```csh
$ cc main.c -Iinclude libftprintf.a -o test.out
$ ./test.out
```

## Testing with the https://github.com/Tripouille/printfTester

![test outpur](https://imgur.com/a/cIvnmzI)
