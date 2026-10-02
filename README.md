# C Programming Coursework

A collection of small C programs completed for introductory programming coursework. The exercises cover console input/output, arithmetic, conditionals, loops, arrays, strings, functions, file output, and basic algorithms.

## Repository structure

| Folder | Contents |
| --- | --- |
| `lab-01/` | Introductory exercises: output, number operations, large-number addition, time calculation, hexadecimal formatting, and IPv4 ranges. |
| `lab-02/` | Conditional-logic exercises: pricing, temperature conversion, calculator operations, number names, and geometry checks. |
| `lab-03/` | Loops and algorithms: dragons problem, sorting, pattern output, Egyptian fractions, and ASCII tree implementations. |
| `subject-01/` | Subject exercises, including Chinese-zodiac calculation and finding a rectangle's missing vertex. |
| `lessons/` | In-class examples for calculations and a number-guessing game. |
| `hackerank/` | Practice solutions on Hackerank and mathematical formulas. |

Each `.c` file is intended to be compiled and run independently. Some folders also include compiled executables and example output such as `lab-03/tree.txt`.

## Requirements

- A C compiler, such as GCC
- A terminal on Linux, macOS, or Windows with WSL/MinGW

## Compile and run

From the repository root, compile any exercise by specifying its source file and an output name:

```bash
gcc -std=c11 -Wall -Wextra example-lab/file_name.c -o file_name
./file_name
```

Programs read their required values from standard input. For example:

```bash
printf '25 C F\n' | ./file_name
```

Exercises that use mathematical functions may require the math library:

```bash
gcc -std=c11 -Wall -Wextra hackerank/math_formula.c -o math_formula -lm
```

## Notes

- These are individual learning exercises, not a single application or library.
- Input format and expected output are defined by the original exercise statements; consult each source file for implementation details.
- The repository includes alternative attempts for a few exercises (for example, the ASCII tree programs in `lab-03/`).

## Author

Coursework maintained by the repository owner.
