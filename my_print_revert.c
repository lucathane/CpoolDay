int my_strlen(char* str) {
    int i = 0 ;
    while (str[i] !='\0') {
        i++ ;
    }
    return i ; 
}

void print_char(char c);
//char*= string
void my_print_revert(char *toRevert) {

    for (int i = my_strlen(toRevert)-1; i>=0 ; i--) {
        print_char (toRevert[i]);
    }
}

//get the nb, count the amount how though. by counting each number, so have a f(x) going to through each char and count them moment where no char stop
