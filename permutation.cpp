bool isPermutation(char input1[], char input2[]) {
    // Write your code here
     int f[26]={0};
     int g[26]={0};
     for(int i=0 ; input1[i]!='\0';i++) 
       (f[input1[i]-97]++);
    
    for(int i=0;input2[i]!='\0';i++)
       (g[input2[i]-97]++);
     int flag=0;
    
     for(int i=0;i<26;i++) {
        if ( f [ i ] != g [ i ] ) 
        {
            flag=1; break;
        }
     }
     if(flag) 
       return false;
      else
        return true;
}
