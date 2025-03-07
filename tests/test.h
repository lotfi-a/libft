#ifndef TEST_H
#define TEST_H

template <typename ...Args>
extern bool allOf(Args... args) { return (args && ...); }
extern void describe(const char *);
extern void it(const char *, bool (*)());

#endif
