#include <stdio.h>

static void __attribute__ ((constructor)) my_init (void);
static void __attribute__ ((destructor)) my_fini (void);

static void
my_init (void)
{
    printf ("libeasy loaded\n");
}

static void
my_fini (void)
{
    printf ("libeasy unloaded\n");
}
