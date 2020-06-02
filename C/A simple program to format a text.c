/*A simple program to format text.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    
    int c;
    int spaceCounter = 0;
    int count=0;
    
  
   
    while((c= getchar()) != EOF){
        
        if(isspace(c) || c == '\t' ){
            spaceCounter ++;
            if(spaceCounter<=1 ){
                putchar(c);   
            } 
        }
        else{
                putchar(c);
                
                spaceCounter =0;     
        } 

        if(c=='\n'){
            
            if(count >2){
                printf("\n");
            }
            count++;
        }
        
           
    }

    
    return 0;
}
