#include<stdio.h>
int main(){
    char line[500];
    int v, c, d, s;
    v=c=d=s=0;
    printf("Enter a line: ");
    fgets(line,  stdin);

    for(int i=0; line[i]!='\0'; i++){
        if(line[i]=='a'|| line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'){
            ++v;
        }

        else if(line[i]>='a' && line[i]<='z'){
            ++c;
        }

        else if(line[i]>= '0' && line[i]<='9'){
            ++d;
        }
        
        else if(line[i] == ' '){
            ++s;
        }
    }

    printf("vowels: %d",v);
    printf("\nconsonants: %d",c);
    printf("\ndigits: %d",d);
    printf("\nspace: %d",s);

    return 0;


}