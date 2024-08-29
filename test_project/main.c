int TEST_stack(int* a, int* b)
{
    *a += 0x213;
    *b += 0x456;

    return *a + *b;
}

int TEST_stackcall(void)
{
    int a = 0xabcd;
    int b = 0xdef0;

    TEST_stack(&a, &b);

    return a + b;
}

int TEST_stackcall2(void)
{
    volatile int a;
    volatile int b;

    a = 0xbdef;
    b = 0x1234;
    return a + b;
}

int main()
{
    TEST_stackcall();
    TEST_stackcall2();
    return 0;
}
