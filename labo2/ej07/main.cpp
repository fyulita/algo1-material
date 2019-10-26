# include <iostream >
int main (int argc , char * argv []) {
    bool a,b,c;
    a = atoi ( argv [1]);
    b = atoi ( argv [2]);
    c = a && b;
    std :: cout << " a: " << argv [1] << " a bool " << a << std :: endl ;
    std :: cout << " b: " << argv [2] << " a bool " << b << std :: endl ;
    std :: cout << " variable c: " << c << std :: endl ;
    return 0;
}