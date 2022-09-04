#include<stdio.h>

void decode();
void encode(); 

int main(int argc, char** argv) {
    if(argc == 2 && (*argv[1] == '0' || *argv[1] == '1')) {
        int mode = *argv[1] - '0';
        switch (mode) {
            case 1:
                decode();
                break;
            case 0:
                encode();
                break; 
        }
    } else {
        printf("Please eneter 1 or 0 to choose operation mode\n");
    }
    return 0; 
}

void decode() {
    char c, space;
    while(1) {
        scanf("%c", &c);
        scanf("%c", &space);
        //if((c > 64 && c < 91) || (c > 97 && c < 124)) {
        if(space == ' ') {
            printf(" %x", c);
        } else if(c == '\n') {
            break; 
        } else {
            printf("n/a\n");
            break; 
        }
    }
}

void encode() {
    char space;
    unsigned int num; 
    while(1) {
        scanf("%x", &num);
        scanf("%c", &space);
        if(space == ' ') {
            printf(" %c", num);
        } else if(space == '\n') {
            printf(" %c", num);
            break; 
        } else {
            printf("n/a\n");
            break; 
        }
    }
}