# Detail: Learning takeaways and practice ideas

Practising small C++ programs helps build practical skills beyond syntax.

## Core skills to develop

- Problem decomposition: break problems into functions and small steps.
- Input validation: always check and handle invalid or unexpected input.
- Edge-case thinking: test zero, negative, very large, and empty inputs.
- Debugging: read compiler messages, add logging/prints, and use a debugger.
- Compiler warnings: enable `-Wall -Wextra` and fix warnings early.
- Memory awareness: prefer automatic storage and standard containers; be mindful of pointers.
- Const-correctness and types: use `const`, correct signed/unsigned choices.

## Good practices

- Write small, single-purpose functions and reuse them.
- Keep naming clear and consistent.
- Add brief comments for non-obvious logic.
- Incremental development: compile and test after small changes.
- Use version control (git) with frequent commits and clear messages.

## Exercises to level up

- Add input validation and retries to existing programs.
- Write unit tests for functions (use a simple test harness).
- Refactor a program to use structs or classes where appropriate.
- Measure and improve performance on larger inputs.

## Resources

- Official C++ reference (cppreference.com).
- A good debugger (gdb/lldb) and sanitizers (`-fsanitize=address,undefined`).

Keep practicing and iterating — small focused projects compound into strong skills.
