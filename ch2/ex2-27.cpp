int main()
{
    int i = -1, &r = 0;

    int i2 = 0;
    int *const p2 = &i2;

    const int i = -1, &r = 0;

    const int &const r2;
}
