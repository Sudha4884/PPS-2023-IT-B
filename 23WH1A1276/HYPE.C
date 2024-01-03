/*#include<stdio.h>
int main(){
    int t;
    int largest_factor; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        for(int i = 1;i<= n;i++){
            if(n%i==0){
                largest_factor = i;
            }
        }
        printf("%d",largest_factor);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    while(start < end) {
        if(*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n, num;
    FILE *evenFile, *oddFile;

    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers have been written to even.txt and odd.txt respectively.\n");

    return 0;
}*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int linearSearch(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 6, 8, 9, 11, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n);
    if(result != -1) {
        printf("First prime number in array is: %d\n", result);
    } else {
        printf("No prime number found in array.\n");
    }
    return 0;
}
