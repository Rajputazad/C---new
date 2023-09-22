#include <stdio.h>

int main(){
    FILE *fptr;
    FILE *fptrs;
    fptr= fopen("testfile.c","w");
    // fprintf(fptr,"hii\nhello");
    fprintf(fptr,"#include <stdio.h>\nint main(){\nprintf(\"hello world\");\n}");
    fclose(fptr);
    fptrs= fopen("testfile.c","r");
    if(!fptrs){
        printf("File not found");
    // printf("%d\n",!fptrs);
    }else{
 char myString[100];
 while (fgets(myString, 100, fptrs))
 {
  printf("%s", myString);  

    }
 }
 
  
    fclose(fptrs);
    return 0;
}