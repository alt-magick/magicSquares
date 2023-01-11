#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define N 100

using namespace std;

int print_image()
{

	FILE* fptr2 = NULL;

	if ((fptr2 = fopen("image.txt", "r")) == NULL)
	{
		fprintf(stderr, "error opening %s\n", "image.txt");
		return 1;
	}

	char read_string[75];

	while (fgets(read_string, sizeof(read_string), fptr2) != NULL)
		printf("%s", read_string);
	fclose(fptr2);

	return 0;


}

int start(int n)
{

	int num = 0;
	int i = 0;
	int j = 0;
	printf("\n");

	int** qMagico;
	qMagico = new int* [n];
	for (int ii = 0; ii < n; ii++)
		qMagico[ii] = new int[n];

	//----------------------------Part for N in form 2n+1-----------------------------
	if (n % 2 == 1)
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
		i = n / 2;
		j = n - 1;

		//Loop to determine the position of the numbers
		for (num = 1; num <= n * n;)
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
				j -= 2;
				i++;
			}
		}
	}


	//----------------------------Part for N in 4n form-----------------------------
	else if (n % 4 == 0)
	{
		// We fill in the square counting from 1 to n²
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				qMagico[i][j] = (n * i) + j + 1;
		}

		// Changing the values ​​according to the rule
		// (n*n+1)-qMagico[i][j]
		// Top left corner of the square
		for (i = 0; i < n / 4; i++)
		{
			for (j = 0; j < n / 4; j++)
				qMagico[i][j] = (n * n + 1) - qMagico[i][j];
		}

		// Top right corner of the square
		for (i = 0; i < n / 4; i++)
		{
			for (j = 3 * (n / 4); j < n; j++)
				qMagico[i][j] = (n * n + 1) - qMagico[i][j];
		}

		// Bottom left of the square
		for (i = 3 * n / 4; i < n; i++)
		{
			for (j = 0; j < n / 4; j++)
				qMagico[i][j] = (n * n + 1) - qMagico[i][j];
		}

		// Bottom right of the square
		for (i = 3 * n / 4; i < n; i++)
		{
			for (j = 3 * n / 4; j < n; j++)
				qMagico[i][j] = (n * n + 1) - qMagico[i][j];
		}

		// Now we invert the lines of the 2x2 matrix in the center of the square
		for (i = n / 4; i < 3 * n / 4; i++)
		{
			for (j = n / 4; j < 3 * n / 4; j++)
				qMagico[i][j] = (n * n + 1) - qMagico[i][j];
		}
	}

	//----------------------------Part for N in the form 4n + 2-----------------------------
	else if (n % 4 == 2)
	{

		int** qMagicoMini;
		qMagicoMini = new int* [n];
		for (int cc = 0; cc < n; cc++)
			qMagicoMini[cc] = new int[n / 2];

		//Resetting the matrix. So where you have 0 is where the matrix hasn't changed yet
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				qMagicoMini[i][j] = 0;
			}
		}

		//This is the position that number 1 will be
		i = n / 4;
		j = (n / 2) - 1;

		//Loop to determine the position of the numbers
		for (num = 1; num <= ((n / 2)) * ((n / 2));)
		{
			//Treatment so that positions larger than n² work.
			i = i % (n / 2);
			j = j % (n / 2);
			//Treatment for negative positions to work.
			if (i < 0)
			{
				i = i + (n / 2);
			}

			if (j < 0)
			{
				j = j + (n / 2);
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
				j -= 2;
				i++;
			}
		}

		//Now we are going to make some changes to the mini square

		//First let's rotate it 90º clockwise
		for (int x = 0; x < (n / 4); x++)
		{
			// Consider elements in group of 4 in  
			// current square 
			for (int y = x; y < (n / 2) - x - 1; y++)
			{
				// Keeping current value in temporary variable
				int aux = qMagicoMini[x][y];

				// Right Up
				qMagicoMini[x][y] = qMagicoMini[y][(n / 2) - 1 - x];

				// Down to Right
				qMagicoMini[y][(n / 2) - 1 - x] = qMagicoMini[(n / 2) - 1 - x][(n / 2) - 1 - y];

				// Left Down
				qMagicoMini[(n / 2) - 1 - x][(n / 2) - 1 - y] = qMagicoMini[(n / 2) - 1 - y][x];

				// Left
				qMagicoMini[(n / 2) - 1 - y][x] = aux;
			}
		}

		//Then we will mirror it on the vertical axis
		for (int i = 0; i < (n / 2); i++)
		{
			for (int j = 0; j < (n / 4); j++)
			{
				//Saving in auxiliary
				int aux = qMagicoMini[i][j];
				//Changing positions with the opposite column
				qMagicoMini[i][j] = qMagicoMini[i][(n / 2) - j - 1];
				//Placing the current position in the opposite column
				qMagicoMini[i][(n / 2) - j - 1] = aux;
			}
		}

		//Now we will fill the Square with variations of our Mini Square
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i < n / 2 && j < n / 2)
					qMagico[i][j] = qMagicoMini[i][j];
				if (i >= n / 2 && j < n / 2)
					qMagico[i][j] = qMagicoMini[i - (n / 2)][j] + (3 * n * n / 4);
				if (i < n / 2 && j >= n / 2)
					qMagico[i][j] = qMagicoMini[i][j - (n / 2)] + (n * n / 2);
				if (i >= n / 2 && j >= n / 2)
					qMagico[i][j] = qMagicoMini[i - (n / 2)][j - (n / 2)] + (n * n / 4);
			}
		}

		//We will make some changes so that the square becomes magical, first switching between quadrant 2 and 3 (Imagine the quadrants of the square with those of the Cartesian plane)
		//WikiHow's Solving a Singly Even Magic Square article is highly recommended to understand the trade-off below.
		int temp = n / 4;

		for (int i = 0; i < n / 2; i++)
		{
			for (int j = 0; j < n / 4; j++)
			{
				if (i == (temp) && j == 0)
				{
					int aux = qMagico[i][j + (temp)];
					qMagico[i][j + (temp)] = qMagico[i + (n / 2)][j + (temp)];
					qMagico[i + (n / 2)][j + (temp)] = aux;
				}
				else
				{
					int aux = qMagico[i][j];
					qMagico[i][j] = qMagico[i + (n / 2)][j];
					qMagico[i + (n / 2)][j] = aux;
				}
			}
		}

		//If the number is greater than 6 we have to make more exchanges
		if (n > 6)
		{
			for (int i = 0; i < n / 2; i++)
			{
				for (int j = 0; j < temp - 1; j++)
				{
					int aux = qMagico[i][n - j - 1];
					qMagico[i][n - j - 1] = qMagico[i + (n / 2)][n - j - 1];
					qMagico[i + (n / 2)][n - j - 1] = aux;
				}
			}
		}

	}


	FILE* fp = fopen("matrix.txt", "a");
	int total = 0;
	int rows = 0;
	for (i = 0; i < n; i++)
	{
		rows = 0;
		for (j = 0; j < n; j++)
		{
			rows = rows + qMagico[i][j];
			if (n < 4) {
				if (qMagico[i][j] < 10) {
					printf("%d  ", qMagico[i][j]);
					fprintf(fp, "%d  ", qMagico[i][j]);
				}
			}
			else if (n < 10) {
				if (qMagico[i][j] < 10) {
					printf("0%d  ", qMagico[i][j]);
					fprintf(fp, "0%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 10 && qMagico[i][j] < 100) {
					printf("%d  ", qMagico[i][j]);
					fprintf(fp, "%d  ", qMagico[i][j]);
				}
			}
			else if (n < 32) {
				if (qMagico[i][j] < 10) {
					printf("00%d  ", qMagico[i][j]);
					fprintf(fp, "00%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 10 && qMagico[i][j] < 100) {
					printf("0%d  ", qMagico[i][j]);
					fprintf(fp, "0%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 100 && qMagico[i][j] < 1000) {
					printf("%d  ", qMagico[i][j]);
					fprintf(fp, "%d  ", qMagico[i][j]);
				}
			}
			else if (n < 100) {
				if (qMagico[i][j] < 10) {
					printf("000%d  ", qMagico[i][j]);
					fprintf(fp, "000%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 10 && qMagico[i][j] < 100) {
					printf("00%d  ", qMagico[i][j]);
					fprintf(fp, "00%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 100 && qMagico[i][j] < 1000) {
					printf("0%d  ", qMagico[i][j]);
					fprintf(fp, "0%d  ", qMagico[i][j]);
				}
				else if (qMagico[i][j] >= 1000 && qMagico[i][j] < 10000) {
					printf("%d  ", qMagico[i][j]);
					fprintf(fp, "%d  ", qMagico[i][j]);
				}
			}

			total = total + qMagico[i][j];

		}

		fprintf(fp, "\n");
		printf("\n");
	}

	time_t now;
	time(&now);
	fprintf(fp, "\n%s", ctime(&now));

	fprintf(fp, "Rows Total = %d\n", rows);
	fprintf(fp, "Matrix Sum = %d\n", total);

	printf("\nRows Total = %d\n", rows);
	printf("Matrix Sum = %d\n", total);
	fclose(fp);

	return 0;

}


int main(int argc, char** argv)
{
	int step = 0;
	while (1) {
		int n;
		printf("\n");
		if (argc == 2 && step == 0) {
			n = atoi(argv[1]);
		}
		else {
			printf("Matrix Size: ");
			scanf("%d", &n);
		}

		int cnt = 0;
		printf("\n");
		step = 0;
		while (step == 0) {
			system("cls");
			cnt++;

			print_image();

			time_t now;
			time(&now);
			printf("%s", ctime(&now));
			printf("Saving to matrix.txt\n");


			start(n);

			FILE* fp = fopen("matrix.txt", "a");
			//fprintf(fp, "%s \n", ctime(&now));
			printf("Matrix: %d x %d \n", n, n);
			fprintf(fp, "Matrix: %d x %d \n", n, n);
			fprintf(fp, "Iteration = %d\n\n", cnt);
			printf("Iteration = %d\n\n", cnt);
			printf("(R) Resets the Matrix.\n");
			printf("(Q) Exits.\n");
			fclose(fp);

			char ch = getc(stdin);
			if (ch == 'q' || ch == 'Q') {
				return 0;
			}
			if (ch == 'r' || ch == 'R') {
				step = 1;
			}
		}
	}
	return 0;
}

