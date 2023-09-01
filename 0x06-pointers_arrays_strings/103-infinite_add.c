#include "main.h"
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i;
    
    int carry = 0;
    int maxLen = (len1 > len2) ? len1 : len2;
    
    if (maxLen  > size_r) {
        return 0; 
    }
    
    r[maxLen + 1] = '\0';
    
    for (i = 0; i < maxLen; i++) {
        int digit1, digit2, sum;

	if (i < len1) {
    		digit1 = n1[len1 - 1 - i] - '0';
	} else {
    		digit1 = 0;
	}
	if (i < len2) {
    		digit2 = n2[len2 - 1 - i] - '0';
	} else {
    		digit2 = 0;
	}
        
        	sum = digit1 + digit2 + carry;
        	carry = sum / 10;
        
        	r[maxLen - i] = (sum % 10) + '0';
    }
    
    if (carry) {
        r[0] = carry + '0';
        return r;
    } else {
       return r + 1; 
    }
}
