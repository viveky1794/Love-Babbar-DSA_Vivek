

	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int sSize = S.length();
	    int l = 0, h = sSize-1;
	    
	    while( l < h)
	    {
	        if(S[l] != S[h]){
	            return 0;
	        }
	        l++;
	        h--;
	    }
	
	    return 1;
	}

