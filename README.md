# ft_printf - A Custom Printf Implementation

This project is part of the 42 curriculum where we recreate the famous `printf` function from the C standard library. The implementation handles various format specifiers and returns the number of characters printed.

## Key Features

- Handles the following format specifiers:
  - `%c` - Single character
  - `%s` - String
  - `%p` - Pointer address
  - `%d` and `%i` - Decimal integers
  - `%u` - Unsigned decimal integer
  - `%x` and `%X` - Hexadecimal number (lowercase/uppercase)
  - `%%` - Percent sign

## What I Learned

- Variadic functions in C and how to handle variable arguments
- Deep understanding of string formatting and type conversion
- Memory management and buffer handling for output operations
- Implementation of modular code design in C

## How to Use

### Compilation
```bash
make        # Compiles the library
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Rebuilds the library
```

### Integration
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}
```

### Compilation with Your Program
```bash
cc -Wall -Wextra -Werror your_program.c libftprintf.a
```

## Example Usage
```c
ft_printf("Character: %c\n", 'A');          // Output: Character: A
ft_printf("String: %s\n", "Hello");         // Output: String: Hello
ft_printf("Pointer: %p\n", ptr);            // Output: Pointer: 0x7fff5fbff81c
ft_printf("Integer: %d\n", 42);             // Output: Integer: 42
ft_printf("Unsigned: %u\n", 42);            // Output: Unsigned: 42
ft_printf("Hexadecimal: %x\n", 42);         // Output: Hexadecimal: 2a
ft_printf("HEXADECIMAL: %X\n", 42);         // Output: HEXADECIMAL: 2A
```

## Author

- Ayham Abu Snina ([@aabusnin](https://github.com/AyhamAbusninah))

## License

This project is part of the 42 School curriculum.
