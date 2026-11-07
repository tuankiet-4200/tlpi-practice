
#include "tlpi_hdr.h"

int main(int argc, char *argv[])
{
    int number;

    if (argc != 2)
        usageErr("%s <number>\n", argv[0]);

    number = getInt(argv[1], GN_GT_0, "number");

    printf("Number = %d\n", number);

    return 0;
}
