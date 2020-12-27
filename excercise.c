static int Persistence(long n){

    int c = 0;
    while(n / 10 != 0){
        float r = n % 10;
        while((n /= 10) != 0) r *= n % 10;
        n = r;
        c++;
    }
    return c;
}