
/**
 * fill the the memory areas <s> with constant byte <c>, <n> time from the start
 * @*s: the address of memory to fill
 * @c: constant byte
 * @n: the size of the memory to be filled
 * */
char *_memset(char *s, int c, unsigned int n) {
    char *p = s;
    char uc = c;
    unsigned int i;
    i = 0;
    while (i < n){
     p[i] = uc;
     i++; 
    }    
    
    return s;
}
