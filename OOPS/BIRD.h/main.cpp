#include<iostream>
#include "bird.h"
using namespace std;
void birddosomething(Bird  *&bird){
 bird->eat;
 bird->fly;
 bird->eat;
 bird->fly;
 
 
}
int main(){
    Bird* bird=new eagle();
    birddosomething(bird);
    return 0;
}