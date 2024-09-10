typedef unsigned short uint16_t;

uint16_t TEST_stack(uint16_t* a, uint16_t* b)
{
    *a += 0x213;
    *b += 0x456;

    return *a + *b;
}

uint16_t TEST_stackeasy(uint16_t* a)
{
    *a += 0x213;

    return *a;
}

uint16_t TEST_stackcall(void)
{
    uint16_t a = 0xabcd;
    uint16_t b = 0xdef0;

    TEST_stack(&a, &b);

    return a + b;
}

uint16_t TEST_stackcall2(void)
{
    volatile uint16_t a;
    volatile uint16_t b;

    a = 0xbdef;
    b = 0x1234;
    return a + b;
}

uint16_t TEST_stackcalleasy(void)
{
    uint16_t a = 0xabcd;

    TEST_stackeasy(&a);

    return a;
}

uint16_t TEST_callee(uint16_t hmm)
{
    return hmm;
}

uint16_t TEST_caller()
{
    return TEST_callee(0x1234);
}

uint16_t more_testing(char huh, char hey, uint16_t blub, uint16_t blab)
{
    return hey + blab;
}

uint16_t more()
{
    return more_testing(1, 2, 3, 4);
}

int main()
{
    TEST_stackcall();
    TEST_stackcall2();
    TEST_stackcalleasy();
    more();
    return 0;
}

int testing()
{
    return 0;
}

asm(
"asm_test_stack:\n"
    // make space on stack
    "pshx\n"

    // store value on stack
    "tsx\n"
    "ldd #0xabcd\n"
    "std 0x0,x\n"

    // pass pointer to TEST_stackeasy in register D
    "xgdx\n"
    "bsr TEST_stackeasy\n"

    // restore stack
    "pulx\n"
    "rts\n"
);
