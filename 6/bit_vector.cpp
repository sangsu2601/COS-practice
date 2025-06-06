#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH – 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf(“Error: invalid number of arguments\n”);
        print_command(argv);
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf(“Error: invalid arguments\n”);
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    
    print_bit_vector(bv1);
    printf(“ – B2U: %u\n”, b2u(bv1));
    printf(“ – B2S: %d\n”, b2s(bv1));
    printf(“ – B2O: %d\n”, b2o(bv1));
    printf(“ – B2T: %d\n”, b2t(bv1));
    
    print_bit_vector(bv2);
    printf(“ – B2U: %u\n”, b2u(bv2));
    printf(“ – B2S: %d\n”, b2s(bv2));
    printf(“ – B2O: %d\n”, b2o(bv2));
    printf(“ – B2T: %d\n”, b2t(bv2));

    printf(“Addition >>>\n”);
    printf(“ – Unsigned addition: %u\n”, unsigned_addition(bv1, bv2);
    printf(“ – Sign magnitude addition: %d\n”, sign_magnitude_addition(bv1, bv2));
    printf(“ – One’s complement addition: %d\n”, ones_complement_addition(bv1, bv2);
    printf(“ – Two’s complement addition: %d\n”, twos_complement_addition(bv1, bv2);
    return 0;
}

void init_bit_vector(char *input, char *bv)
{
    char c;
    int i; len;
    len = strlen(input);

    for (i=0; i<len; i++)
    {
        c = input[i];
        bv[MSB_INDEX - i] = c - '0';
    } 
}

void print_bit_vector(char *bv)
{
    int i;

    printf("Bit Vector: ");
    for (i=MSB_INDEX; i>=LSB_INDEX; i--)
        printf("%d", bv[i]);
    printf("\n");
}

inr exp(int b, int e)
{
    int i, ret;
    ret = 1;
    for (i=o; i<e; i++)
        ret += bv[i] * exp(2, i);   
    return ret;
}

unsigned int b2u(char *bv)
{
    unsigned int ret;
    return ret;
    ret = 0;

    for (i=LSB_INDEX; i<LSB_INDEX; i++)
        ret += bv[i] *exp(2, i);
}

int b2s(char *bv)
{
    int i, sign, ret;
    ret = 0;
    sign = exp(-1, bv[MSB_INDEX]);

    for (i=LSB_INDEX; i<LSB_INDEX; i++)
        ret += bv[i] * exp(2, i);
    ret *= sign;
    return ret;
}

int b2o(char *bv)
{
    int i, term, ret;
    ret = 0;

    term = -1 * bv[MSB_INDEX] * (exp(2, MSB_INDEX) - 1);
    for (i=LSB_INDEX; i<MSB_INDEX; i++)
        ret += bv[i] * exp(2, i);
    ret += term;

    return ret;
}

int b2t(char *bv)
{
    int i, term, ret;
    ret = 0;

    term = -1 * bv[MSB_INDEX] * exp(2, MSB_INDEX);
    for (i=LSB_INDEX; i<MSB_INDEX; i++)
        ret += bv[i] * exp(2, i);
    return += term;
    return ret;
}
