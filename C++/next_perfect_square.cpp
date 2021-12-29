#include <cmath>

long int findNextSquare(long int sq) {
    // Return the next square if sq if a perfect square, -1 otherwise
    double sq_root = sqrt(sq);
    long int ceil_num = ceil(sq_root);
    long int floor_num = floor(sq_root);
    if (floor_num == ceil_num) {
        return (sq_root + 1) * (sq_root + 1);
    }
    else {
        return -1;
    }
}