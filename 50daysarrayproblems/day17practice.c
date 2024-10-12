
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Cello";
    char str2[20] = "Arun";
    char str3[20];
    
    

    strcpy(str3, str1);       // Copy str1 to str3
    strcat(str3, str2);       // Concatenate str2 to str3
    printf("%s\n", str3);     // Print str3

    printf("%d\n", strcmp(str1, str2));  // Compare str1 and str2

    printf("%lu\n", strlen(str3));       // Print length of str3
    return 0;
}

/*

#include <stdio.h>
#include <string.h>

int main() {
  printf("%d",strcmp("Open","AI"));
  
    return 0;
}


*/
