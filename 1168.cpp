#include <iostream>
#include <string.h>
#include <stdio.h>

int main(){
    int n, leds = 0, count = 0, i = 0;
    char *value = (char *) malloc(sizeof(char) * 100);
    
    scanf("%d", &n);

    while(n>0){
        leds = 0;
        count = 0;
        scanf("%s", value);
        
        while(count < strlen(value)){
            
            switch (value[count])
            {
                case '1': 
                    leds += 2; break;
                case '2': 
                    leds += 5; break;  
                case '3': 
                    leds += 5; break; 
                case '4': 
                    leds += 4; break;  
                case '5': 
                    leds += 5; break;
                case '7': 
                    leds += 3; break;    
                case '8': 
                    leds += 7; break;
                default: 
                    leds += 6; break;
            }   
                count ++;
        }
        printf("%d leds\n", leds);
        n--;
    }

    

    return 0;
}