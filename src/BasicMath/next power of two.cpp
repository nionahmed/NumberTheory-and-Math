unsigned int nextPowerOf2(unsigned int n)
{
    unsigned count = 0;

    if (n && !(n & (n - 1))){
       while(n!=0){
        n>>=1;
        count++;
       }
        return count;
    }

    while( n != 0)
    {
        n >>= 1;
        count += 1;
    }

    return count;
}
