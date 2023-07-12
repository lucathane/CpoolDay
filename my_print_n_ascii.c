void print_char(char c);
void my_print_n_ascii(int howMany) {
    int ascii=33 ;
    int nb=howMany ;
    nb+=ascii ;
    if (nb <=32 || nb>= 128){
        return ;
    }
    else{
        for (ascii = '!' ; ascii != nb; ascii++) {
        print_char(ascii) ;
        }
    } 

}


