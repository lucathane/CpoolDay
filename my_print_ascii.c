void print_char(char c) ;

void my_print_ascii(void) {
    for (char ascii = '!' ; ascii != '~'+1; ascii++) {
        print_char(ascii) ;
    }
}

