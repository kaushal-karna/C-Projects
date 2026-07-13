# C-Projects

Learning and practising C++ by building small exercises and short projects.

## Description

This repository contains a set of simple C++ programs used to learn core
language features, basic algorithms, and everyday programming tasks. Each
program focuses on a small, well-defined problem that helps develop
debugging, compilation, and problem-solving skills.

## Files

- `calculator.cpp` — Basic arithmetic operations and menu-driven example.
- `celsius_fahrenheit.cpp` — Temperature conversion between Celsius and Fahrenheit.
- `even_odd_checker.cpp` — Check whether an integer is even or odd.
- `largest.cpp` — Find the largest of given numbers.
- `personal_info_card.cpp` — Print a formatted personal information card.
- `positive_negative_zero.cpp` — Classify numbers as positive, negative, or zero.
- `seconds_converter.cpp` — Convert seconds into hours/minutes/seconds.
- `student_profile.cpp` — Simple struct-like student profile demonstration.
- `swap.cpp` — Demonstrate swapping values (with and without temporary variable).
- `voting_eligibility.cpp` — Check voting eligibility based on age.
- `LICENSE` — Project license.

## Build & Run

Compile a single file with `g++`:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -o program_name program_file.cpp
./program_name
```

On Windows with MinGW the run step is `program_name.exe`.

## Tips

- Enable compiler warnings (`-Wall -Wextra`) and fix warned issues.
- Test edge cases and invalid inputs.
- Make small incremental changes and recompile often.

## Contributing

Feel free to add more small exercises, improve existing programs, or submit
fixes. Open a PR with a clear description of the change.

## License

See the `LICENSE` file for licensing details.
