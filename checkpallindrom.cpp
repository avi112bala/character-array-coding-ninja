bool checkPalindrome(char str[]) {
    // Write your code here
      int i = 0;
      int j;

    if ((str==NULL ||str[0]=='\0'))
    {
        return false;
    }

    j = strlen(str)-1;
    while (i < j)
    {
        if (str[i]!= str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
   
}

