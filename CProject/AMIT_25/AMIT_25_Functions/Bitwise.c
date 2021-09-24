int SetBit  (int Byte , int BitPosition )
{
    return (Byte | (1<<BitPosition)) ;
}
int ClearBit (int Byte , int BitPosition )
{
    return (Byte & ~(1<<BitPosition)) ;
}
int ToggleBit (int Byte , int BitPosition )
{
    return (Byte ^ (1<<BitPosition)) ;
}

