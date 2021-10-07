void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int i, j=0;
    if(input==nullptr) return;
    for(i=0; input[i]!='\0'; i++)
    {
        if (input[i] == c) continue;
        input[j++] = input[i];
    }
    input[j] = '\0';
}
