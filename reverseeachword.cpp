void reverseEachWord(char input[]) {
    // Write your code here
     int i=0,j=0,start,stop;
    if(input==nullptr) return;
    while(input[i] != '\0')
    {
        if(isspace(input[i]))
        {
            i++;
            continue;
        }
        start = i++;
        while(input[i] !='\0' && !isspace(input[i])) i++;
        stop = i-1;

        // Swap the word which runs from start to stop
        while(start<stop)
        {
            char temp = input[start];
            input[start] = input[stop];
            input[stop] = temp;
            start++;stop--;
        }
    }
}
