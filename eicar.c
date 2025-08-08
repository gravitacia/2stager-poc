#include <stdio.h>

int main() {
    FILE *f = fopen("eicar_test_file.com", "w");
    if (f == NULL) {
        perror("failed to create");
        return 1;
    }

    const char *eicar = "X5O!P%@AP[4\\PZX54(P^)7CC)7}$"
                        "EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*";
    fprintf(f, "%s", eicar);
    fclose(f);

    return 0;
}
