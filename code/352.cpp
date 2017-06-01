#include <iostream>
#include <queue>
using namespace std;
 
int dimension;
char a [28] [28];
queue <int> q;
 
void dfs (int x, int y)
{
    q.push (x);
    q.push (y);
 
    while ( !q.empty () ) {
        x = q.front ();
        q.pop ();
        y = q.front ();
        q.pop ();
 
        if ( a [x - 1] [y] == '1' ) { // up
            q.push (x - 1);
            q.push (y);
            a [x - 1] [y] = '0';
        }
 
        if ( a [x + 1] [y] == '1' ) { // down
            q.push (x + 1);
            q.push (y);
            a [x + 1] [y] = '0';
        }
 
        if ( a [x] [y - 1] == '1' ) { // left
            q.push (x);
            q.push (y - 1);
            a [x] [y - 1] = '0';
        }
 
        if ( a [x] [y + 1] == '1' ) { // right
            q.push (x);
            q.push (y + 1);
            a [x] [y + 1] = '0';
        }
 
        if ( a [x - 1] [y + 1] == '1' ) { // up-right
            q.push (x - 1);
            q.push (y + 1);
            a [x - 1] [y + 1] = '0';
        }
 
        if ( a [x + 1] [y + 1] == '1' ) { // right-down
            q.push (x + 1);
            q.push (y + 1);
            a [x + 1] [y + 1] = '0';
        }
 
        if ( a [x + 1] [y - 1] == '1' ) { // down-left
            q.push (x + 1);
            q.push (y - 1);
            a [x + 1] [y - 1] = '0';
        }
 
        if ( a [x - 1] [y - 1] == '1' ) { // up-left
            q.push (x - 1);
            q.push (y - 1);
            a [x - 1] [y - 1] = '0';
        }
    }
}
 
int main ()
{
    int cases = 0;
 
    while ( cin>>dimension ) {
        getchar ();
 
        for ( int i = 0; i < dimension; i++ )
            scanf ("%s", a [i]);
 
        int count = 0;
 
        for ( int i = 0; i < dimension; i++ ) {
            for ( int j = 0; j < dimension; j++ ) {
                if ( a [i] [j] == '1' ) {
                    dfs (i, j);
                    count++;
                }
            }
        }
 
        printf ("Image number %d contains %d war eagles.\n",
        ++cases, count);
    }
 
    return 0;
}
