void printSubstrings(char input[]) {
    // Write your code here
    int n = strlen(input);
  for (int len = 1; len <= n; len++)
    {   
      
        for (int i = 0; i <= n - len; i++)
        {
           
            int j = i + len - 1;        
            for (int k = i; k <= j; k++){
                cout<<input[k];
            }
            cout << endl;
        }
    }
}
