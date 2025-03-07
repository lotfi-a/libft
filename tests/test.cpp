#include <iostream>

void describe(const char *name) {
    std::cout << "\n\x1b[1mTesting " << name << ":\x1b[0m\n";
}

void it(const char *desc, bool (*test_fn)())
{
    printf("\t\x1b[91m✘\x1b[0m %s\n", desc);
if (test_fn())
     printf("\x1b[F\r\t\x1b[92m✔\x1b[0m\n");
}
