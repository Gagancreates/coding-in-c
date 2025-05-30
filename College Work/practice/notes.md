How Does a C Program Actually Run?
The execution of a C program happens in multiple steps:

Step 1: Preprocessing
The preprocessor handles all #include, #define, and other directives.
It replaces #include <stdio.h> with the actual content of the stdio.h file.

Step 2: Compilation
The compiler converts the preprocessed code into assembly language (low-level code that the processor understands).

Step 3: Assembly
The assembler converts assembly code into machine code (binary format).

Step 4: Linking
The linker links the compiled code with necessary libraries (like stdio.h).
It generates the final executable file.

Step 5: Execution
The OS loads the executable file into memory, and the CPU starts executing the main() function.