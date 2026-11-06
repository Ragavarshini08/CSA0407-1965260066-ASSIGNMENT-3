# Task 01 – Linking, Loading and Address Binding

## Aim
To understand linking, loading, address binding, and the difference between static and dynamic linking.

## Answer

**Linking:** Linking combines object files and libraries to create an executable program.

**Loading:** Loading is the process of placing an executable program into main memory for execution.

**Address Binding:** Address binding maps instructions and data to memory addresses.

### Types of Address Binding

1. **Compile-time binding:** Physical addresses are determined during compilation.
2. **Load-time binding:** Addresses are assigned when the program is loaded into memory.
3. **Execution-time binding:** Address mapping occurs while the program is running.

### Static Linking
- Library code is included in the executable during compilation.
- The executable is usually larger.
- It can run without requiring the separate library at runtime.

### Dynamic Linking
- The library is loaded separately.
- It reduces duplication of library code.
- Shared libraries can be used by multiple programs.

## Procedure

1. Create the application source file.
2. Create the encryption library source file.
3. Compile and execute the statically linked program.
4. Create a shared library.
5. Load the shared library at runtime using `dlopen()` and `dlsym()`.

## Conclusion

Static and dynamic linking provide different methods of connecting library functions with programs. Dynamic linking allows libraries to be loaded at runtime, while static linking includes library code in the executable.
