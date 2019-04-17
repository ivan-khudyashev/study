#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if(argc < 2) {
        printf("program usage:\n");
        printf("\tprog_name environment_variable_name\n");
        return 0;
    }
    //TODO: must be check of inputed value
    // use only first argument
    char *env_var_value = getenv(argv[1]);
    printf("Environment variable <%s> has value: %s\n", argv[1], env_var_value);
    return 0;
}
