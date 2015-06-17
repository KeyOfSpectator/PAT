/*
 * POJ_2411.cpp
 *
 *  Created on: 2015年6月16日
 *      Author: KeyOfSpectator
 */

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int h, w;

bool testFirstLineState(int colState) {
    for (int i = w-1; i >=0 ; i--) {
        // horizen
        // first line last col cant be the first horizen
        if(i > 0){
            if (((colState & (0x1 << i)) == (0x1 << i))) {
                if ((colState & (0x1 << (i - 1))) != (0x1 << (i - 1))) {
                    return false;
                }
            }
        }
        else{
            if( (w>1)&&
               ((colState & (0x1 << (i+1))) != (0x1<<(i+1)))&&
               ((colState & (0x1 << (i))) == (0x1 << i))
               ){
                return false;
            }
            // one col , the first line cant be 1
            if((w == 1) && ((colState & (0x1 << i)) == (0x1 << i)) ){
                return false;
            }
        }
        
        
    }
    return true;
}

bool testLineState(int lineState, int preLineState) {
    for (int col = w-1; col >= 0; col--) {
        if(col > 0){
            // if the pre line is 0 , this line this col must be 1
            if (((preLineState & (0x1 << col)) == 0)
                && ((lineState & (0x1 << col)) == 0)) {
                return false;
            }
            // if this col is horizon , the preline must be 1
            // watch out the last col
            if (((lineState & (0x1 << col)) == (0x1 << col))
                && ((lineState & (0x1 << (col - 1))) != (0x1 << (col - 1)))) {
                return false;
            }
            // if horizon col jump to col + 2
            if(((lineState & (0x1 << col)) == (0x1 << col))){
                col -= 1;
            }
        }
        // last col
        else{
            if( (w>1)&&
               ((lineState & (0x1 << (col + 1))) != (0x1<<(col + 1)))&&
               ((lineState & (0x1 << (col))) == (0x1 << col))
               ){
                return false;
            }
            // if col is 1 , cant be horizon. the pre line and this line cant appear 0,0 and 1,1
            if( (w == 1) &&
               ((
                 ((lineState & (0x1 << (col))) == (0x1 << col)) &&
                 ((preLineState & (0x1 << (col))) == (0x1 << col))
                 )||(
                     ((lineState & (0x1 << (col))) != (0x1 << col)) &&
                     ((preLineState & (0x1 << (col))) != (0x1 << col))
                     ))
               ){
                return false;
            }
            
            
        }
        
    }
    return true;
}

int main() {
    
    
    freopen("/Users/KeyOfSpectator/input", "r", stdin);
    int state[11][2024];  // hash[row][binaryStateOfCol] = this row 's all kinds
    
    
    
    while (scanf("%d %d", &w, &h) != EOF) {
        
        memset(state, 0, sizeof(state));
        
        // end
        if (h == 0) {
            return 0;
        }
        
        // odd num of total blocks
        if ((w * h) % 2 == 1) {
            cout << 0 << endl;
            continue;
        }
        
        int MaxState = 2 << (w - 1);
        for (int line = 0; line < h; line++) {
            
            // first line
            if (line == 0)
                for (int lineState = 0; lineState < MaxState; lineState++) {
                    if (testFirstLineState(lineState)) {
                        state[0][lineState] = 1;
                    } else
                        state[0][lineState] = 0;
                }
            
            // Iteration
            else {
                for (int lineState = 0; lineState < MaxState; lineState++) {
                    for (int preLineState = 0; preLineState < MaxState;
                         preLineState++) {
                        if ((state[line - 1][preLineState])!=0 &&
                            testLineState(lineState, preLineState)) {
                            state[line][lineState] +=
                            state[line - 1][preLineState];
                        }
                    }
                }
            }
        }
        
        cout << state[h-1][MaxState-1]<<endl;
        
    }
    
    //	cout << h << w << endl;
    
    //	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    return 0;
}
