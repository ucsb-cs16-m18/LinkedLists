#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  int s1_length = s1.length();
  int s2_length = s2.length();
  int count = 0;
  if(s1_length != s2_length){
    return false;
  }
  else{
    for(int i= 0; i<s1_length;i++){
      for(int n=0; n < s2_length; n++){
        if(s1[n] == s2[i]){
          count++;
	  if(s1.length() != 0)
	    s1.erase(n,1); 
        }
      }
    }
  }
  if(count == s2_length){
    return true;
  }
  else
    return false;
  return 0; 
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
  int length = s1.length();
  int x = length -1;
  int a = 0;
  for(int i=0; i < (length/2); i++){
    if(s1[x] == s1[i]){
      a++;
      x--;
    }
  }
  if(length%2 == 0){
    a=2*a;
  }
  else{
    a=(2*a)+1;
  }
  if(length == a){
    return true;
  }
  else{
    return false;
  }
  return 0;
}


