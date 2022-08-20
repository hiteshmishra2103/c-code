//Write a program to count the occurrences ofa given word in a
//text file. No line of text file contains more than 80
//characters(including newline cahracters). Suppose you 
// have to count the word "the" form dump.txt file
#include <stdio.h>
int main(){
    FILE *fptr=fopen("dump.txt", "r");
    char str[5][100];
    int count=0;
    int i=0;
    char ch;
    int the=0;
    while((ch=fgetc(fptr))!=EOF){
        str[i][count]=ch;
        if(ch=='\n'){
            printf("%s", str[i][0]);
            for(int j=0; j<count; j++){
                if(str[i][j-1]==' ' || i==0){
                   if(str[i][j]=='t'&&str[i][j+1]=='h'&&str[i][j+2]=='e' && (str[i][j+3]==' '||str[i][j+3]=='\n')){
                     the++;
                     j+=3;
                   }

                }
            }
            printf("  Count of the: %d", the);
            i++;
            count=0;
        }
        count++;
    }
    fclose(fptr);

}