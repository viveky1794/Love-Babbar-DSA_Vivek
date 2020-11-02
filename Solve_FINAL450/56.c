



void reverseString(char* s, int sSize){

    int p1=0, p2=sSize-1;
    
    while( p1 < p2 )
    {
        char temp = s[p1];
        s[p1] = s[p2];
        s[p2] = temp;
        p1++;
        p2--;
    }       
    
}

