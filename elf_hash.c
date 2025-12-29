unsigned elf_hash ( void *key, int len )
  {
    unsigned char *p = key;
    unsigned h = 0, g;
    int i;

    for ( i = 0; i < len; i++ ) {
      h = ( h << 4 ) + p[i];
      g = h & 0xf0000000L;

      if ( g != 0 )
        h ^= g >> 24;

      h &= ~g;
    }

    return h;
  }

int main () {
  
}
