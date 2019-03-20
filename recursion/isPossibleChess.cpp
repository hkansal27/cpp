
#include<iostream>


using namespace std;

bool isPossible(int maze[4][4], int ri, int ci) {
        for(int i=0; i< ri; i++) {
            if(maze[i][ci] == 1)
                return false;

        for(int i=0; i< ci; i++) {
            if(maze[ri][i] == 1)
                return false;

        }
        int tempRi, tempCi;
        if((ci-ri) > 0) {
            tempRi = 0;
            tempCi = ci-ri;
        } else {
            tempRi = ri-ci;
            tempCi = 0;
        }

        for(;tempRi<4 && tempCi <4; tempRi++, tempCi++) {
            if(maze[tempRi][tempCi] == 1)
                return false;
        }
        return true;
}
}

int main() {
    int maze[4][4] = {
                      {1,0,0,1},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0}
                     };
    bool status = isPossible(maze, 2, 2);

    cout<<status<<endl;
    return 0;
}
