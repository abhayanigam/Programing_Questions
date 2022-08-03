/*
    Antonio has a team of superheroes. It contains N superheros with 
    two modes of power. //* One is normal and another one is advanced.
    In normal mode, The i'th superhero has power A[i], and
    in advanced mode, the i'th superhero has B[i], it is not necessary 
    for superheroes to be more powerful in advance mode.

    Antonio can keep at most K superheroes in advance mode.
    Your task is to determine the maximum possible power of Antonio's team.

    Input Format:
        > The first line contain two space-separated integers N and K.
        > The second line contain an array A, the normal mode power.
        > The third line contain an array B, the advance mode power.

    Output Format:
        In the first line print the maximum possible power of Antonio's team.

    Constraints:
        1 <= K <= N <= 10^5
        1 <= A[i],B[i] < 10^9

    Sample Input 1:
        5 3
        5 3 5 6 2
        9 2 7 7 4

    Sample Output 1:
        29

    Explanation of sample 1:
        for this test case we will give boost to the superheroes(1,3,5).
        So total power of Antonio's team = 9+3+7+6+4 = 29.


                 4
                        7
                        7
           2
                                9
        1  2  3  4  5  6  7  8  9  10
                    5
              3
                    5
                       6
           2
*/