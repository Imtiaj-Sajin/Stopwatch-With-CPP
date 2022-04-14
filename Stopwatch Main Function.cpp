//Digital Stopwatch//


#include<bits/stdc++.h>
using namespace std;

int main(){
  int h=0, m=0, s=0;
  
    while (s>=0){
      cout<<h<<":"<<m<<":"<<s<<endl;
      s++;
      if(s==60){
        s=0;
        m++;
        }
      if(m==60){
        m=0;
        h++;
        }
      }
}
