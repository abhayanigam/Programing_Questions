/*
    Q. Question Name: Which Classroom
        Problem Statement
        Many students have joined the Berland University this year and it’s not possible to accommodate all these students in a single classroom.
        So the school decided to put these students in N classrooms. To do this the school principal first arranged all the students in a line and put A1 students in the first classroom,
        A2 students in the second classroom, and so on.
        Now to easily locate the students in the school he wants to develop an optimized algorithm to answer which classroom the ith student belongs to.
        For the task, they have hired the best coder of all times(you). You have developed the algorithm and for testing your algorithm the school principal will ask Q queries from you.
        In each query, he will give you an integer i, and you have to answer in which classroom the ith student belongs to.

        Input Format
            First line contains a single integer denoting N.
            Next line contains N space separated integers denoting the elements of array A.
            Next line contains a single integer denoting Q.
            Next line contains Q space separated integers denoting the value of i in each query.
        
        Output Format
            For each query, print in which classroom the ith student belongs to in a separate line.
            Constraints

            1<=N<=105
            1<=Ai<=104
            1<=Q<=105
            1<=i<=A1+A2+...AN
        
        Sample Input 1
            3
            2 1 7
            5
            1 10 3 2 5

        Sample Output 1
            1
            3
            2
            1
            3

        Explanation of Sample 1
            The students belong to the classroom as 1, 1, 2, 3, 3, 3, 3, 3, 3, 3.
            
            Here we can see that the 1st student belongs to the 1st classroom, 
            10th student belongs to the 3rd classroom, 3rd student to 2nd classroom, 
            2nd student to 1st classroom, 5th student to 3rd classroom.
*/
