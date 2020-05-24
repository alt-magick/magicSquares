#include <stdio.h>
#define N 100

int main()
{
    
    int n, num, i, j;

    scanf("%d", &n);

    int qMagico[n][n];

    //----------------------------Part for N in form 2n+1-----------------------------
    if (n % 2 == 1 )
    {
        //Resetting the matrix. So where you have 0 is where the matrix hasn't changed yet
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                qMagico[i][j] = 0;
            }
        }

        //This is the position that number 1 will be
        i = n/2; 
        j = n-1;

        //Loop to determine the position of the numbers
        for (num = 1; num <= n*n;)
        {
            //Treatment so that positions larger than n² works.
            i = i % n;
            j = j % n;
            //Treatment for negative positions to work.
            if (i < 0)
            {
                i = i + n;
            }

            if (j < 0)
            {
                j = j + n;
            }

            //If the position is empty, put NUM in the position above and to the right of the predecessor.
            if (qMagico[i][j] == 0)
            {
                qMagico[i][j] = num;
                i--;
                j++;
                num++;
            }
            //If the position is occupied, we try to place NUM on the left side of its predecessor.
            else
            {
                j-=2;
                i++;
            }
        }
    }
    

    //----------------------------Part for N in 4n form-----------------------------
    else if (n % 4 == 0)
    {
        // We fill in the square counting from 1 to n²
        for ( i = 0; i<n; i++)
        {
            for (j = 0; j<n; j++)
                qMagico[i][j] = (n*i) + j + 1;        
        }

        // Changing the values ​​according to the rule
        // (n*n+1)-qMagico[i][j]
        // Top left corner of the square
        for ( i = 0; i<n/4; i++)
        {
            for ( j = 0; j<n/4; j++)
                qMagico[i][j] = (n*n + 1) - qMagico[i][j];
        }

        // Top right corner of the square
        for ( i = 0; i< n/4; i++)
        {
            for ( j = 3* (n/4); j<n; j++)
                qMagico[i][j] = (n*n + 1) - qMagico[i][j];
        }

        // Bottom left of the square
        for ( i = 3 * n/4; i<n; i++)
        {
            for ( j = 0; j<n/4; j++)
                qMagico[i][j] = (n*n + 1) - qMagico[i][j];
        }
    
        // Bottom right of the square
        for ( i = 3 * n/4; i<n; i++)
        {
            for ( j = 3* n/4; j<n; j++)
                qMagico[i][j] = (n*n + 1) - qMagico[i][j];
        }
    
        // Now we invert the lines of the 2x2 matrix in the center of the square
        for ( i = n/4; i<3* n/4; i++)
        {
            for ( j = n/4; j<3* n/4; j++)
                qMagico[i][j] = (n*n + 1) - qMagico[i][j];
        } 
    }

    //----------------------------Part for N in the form 4n + 2-----------------------------
    else if (n%4 == 2)
    {
        int qMagicoMini[n/2][n/2];

         //Resetting the matrix. So where you have 0 is where the matrix hasn't changed yet
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                qMagicoMini[i][j] = 0;
            }
        }

        //This is the position that number 1 will be
        i = n/4; 
        j = (n/2)-1;

        //Loop to determine the position of the numbers
        for (num = 1; num <= ((n/2))*((n/2));)
        {
            //Treatment so that positions larger than n² work.
            i = i % (n/2);
            j = j % (n/2);
            //Treatment for negative positions to work.
            if (i < 0)
            {
                i = i + (n/2);
            }

            if (j < 0)
            {
                j = j + (n/2);
            }

            //If the position is empty, put NUM in the position above and to the right of the predecessor.
            if (qMagicoMini[i][j] == 0)
            {
                qMagicoMini[i][j] = num;
                i--;
                j++;
                num++;
            }
            //If the position is occupied, we try to place NUM on the left side of its predecessor.
            else
            {
                j-=2;
                i++;
            }
        }

        //Now we are going to make some changes to the mini square

        //First let's rotate it 90º clockwise
        for (int x = 0; x < (n / 4); x++) 
        { 
            // Consider elements in group of 4 in  
            // current square 
            for (int y = x; y < (n/2)-x-1; y++) 
            { 
                // Keeping current value in temporary variable
                int aux = qMagicoMini[x][y]; 
    
                // Right Up
                qMagicoMini[x][y] = qMagicoMini[y][(n/2)-1-x]; 
    
                // Down to Right
                qMagicoMini[y][(n/2)-1-x] = qMagicoMini[(n/2)-1-x][(n/2)-1-y]; 
    
                // Left Down
                qMagicoMini[(n/2)-1-x][(n/2)-1-y] = qMagicoMini[(n/2)-1-y][x]; 
    
                // Left
                qMagicoMini[(n/2)-1-y][x] = aux;
            }
        }

        //Then we will mirror it on the vertical axis
        for (int i = 0; i < (n/2); i++)
        {
            for (int j = 0; j < (n/4); j++)
            {
                //Saving in auxiliary
                int aux = qMagicoMini[i][j];
                //Changing positions with the opposite column
                qMagicoMini[i][j] = qMagicoMini[i][(n/2)-j-1];
                //Placing the current position in the opposite column
                qMagicoMini[i][(n/2)-j-1] = aux;
            }
        }

        //Now we will fill the Square with variations of our Mini Square
        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < n/2 && j < n/2)
                    qMagico[i][j] = qMagicoMini[i][j];
                if (i >= n/2 && j < n/2)
                    qMagico[i][j] = qMagicoMini[i - (n/2)][j] + (3*n*n/4);
                if (i < n/2 && j >= n/2)
                    qMagico[i][j] = qMagicoMini[i][j - (n/2)] + (n*n/2);
                if (i >= n/2 && j >= n/2)
                    qMagico[i][j] = qMagicoMini[i - (n/2)][j - (n/2)] + (n*n/4);
            }
        }

        //We will make some changes so that the square becomes magical, first switching between quadrant 2 and 3 (Imagine the quadrants of the square with those of the Cartesian plane)
        //WikiHow's Solving a Singly Even Magic Square article is highly recommended to understand the trade-off below.
        int temp = n/4;
        
        for (int i = 0; i < n/2; i++)
        {
            for (int j = 0; j < n/4; j++)
            {
                if (i == (temp) && j == 0)
                {
                    int aux = qMagico[i][j+(temp)];
                    qMagico[i][j+(temp)] = qMagico[i + (n/2)][j+(temp)];
                    qMagico[i + (n/2)][j+(temp)] = aux;
                }
                else
                {
                    int aux = qMagico[i][j];
                    qMagico[i][j] = qMagico[i+(n/2)][j];
                    qMagico[i+(n/2)][j] = aux;
                }
            }
        }

        //If the number is greater than 6 we have to make more exchanges
        if(n > 6)
        {
            for (int i = 0; i < n/2; i++)
            {
                for (int j = 0; j < temp-1; j++)
                {
                    int aux = qMagico[i][n-j-1];
                    qMagico[i][n-j-1] = qMagico[i+(n/2)][n-j-1];
                    qMagico[i + (n/2)][n-j-1] = aux;
                }
            }
        }

    }
    
    printf("\n\nn = %d, soma = %d\n\n", n, (((n*n) + 1)*(n/2)));
    FILE *fp = fopen("qMagico.txt", "w");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", qMagico[i][j]);
            fprintf(fp, "%d  ", qMagico[i][j]);
        }
        fprintf(fp, "\n");
        printf("\n");
    }
    fclose(fp);

    return 0;

}
