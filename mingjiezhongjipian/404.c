/*检查已输入的字符串s的有效性---*/
int check(const char s[])
{
    int i,j;

    if(strlen(s)!=4)
    return 1;
    for(i=0;i<4;i++){
        if(!isdigit(s[i]))
        return 2;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        return 3;
    }
    return 0;
}