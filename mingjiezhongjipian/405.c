/*---hit和blow的判断---*/
void judge(const char s[],const char no[],int *hit,int *blow)
{
    int i,j;

    *hit=*blow=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(s[i]==no[j])
            if(i==j)
            (*hit)++;
            else
            (*blow)++;
        }
    }
}