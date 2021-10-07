char highestOccurringChar(char input[]) {
    // Write your code here
    	int frequency[256]={0};
    for(int i=0;input[i]!='\0';i++){
        	frequency[input[i]]++;
    }
int max=0;
    char high;
    	for(int i=0;input[i]!='\0';i++){
            
            if(frequency[input[i]]>max){
             max=frequency[input[i]];
				high=input[i];
                }
           }    
     if(max=0) {
         return 0;
     }
        	else
    return high;
}
