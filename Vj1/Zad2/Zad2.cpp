
#include<iostream>
#include <ctime>
#include <iomanip>
using namespace std;

struct matrix
{
	int row, col;
	float** mat; //tu se sprema matrica kada je unesemo
};

void input(matrix* input_mat, int m, int n) //unos matrice
{
	input_mat->row = m; //pristupamo retcima iz strukture
	input_mat->col = n; //pristupamo stupcima iz strukture
	input_mat->mat = new float*[m]; //alokacija memorije za pointere koji pokazuju na redove
	for (int z = 0; z < m; z++)
		input_mat->mat[z] = new float[n]; //alokacija memorije za redove
	for (int i = 0; i < m; i++) //unos redaka i stupaca
	{
		for (int j = 0; j < n; j++) 
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> input_mat->mat[i][j]; //unos elemenata na odgovarajuce pozicije
		}
	}
	cout << endl;
}

void generate(matrix* random_mat, int m, int n)
{
	srand((unsigned)time(0));
	int num, a, b;
	random_mat->row = m; 
	random_mat->col = n; 

	random_mat->mat = new float*[m]; 
	for (int z = 0; z < m; z++)
		random_mat->mat[z] = new float[n]; 

	cout << "Enter the range of numbers for second matrix: " << endl; //raspon brojeva unutar kojeg ce se generirati nasumicni brojevi
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (b < a)
	{
		int t = a;
		a = b;
		b = t;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			num = a + (rand() / (RAND_MAX / (b - a))); //da bi dobili float brojeve u matrici, djelimo rand sa ( rand_max / razlika izmedju a i b) i dodajemo ga na a
			random_mat->mat[i][j] = num;
		}
	}
}

int addition_subtraction(matrix input_mat, matrix random_mat, matrix* addition, matrix* subtraction)
{

	if ((input_mat.col == random_mat.col) && (input_mat.row == random_mat.row)) //jesu li istog tipa
	{
		int n = random_mat.row;
		int m = random_mat.col;

		addition->row = subtraction->row = n;
		addition->col = subtraction->col = m;

		addition->mat = new float*[m]; //alokacija memorije za matricu addition
		for (int z = 0; z < m; z++)
		{
			addition->mat[z] = new float[n];
		}

		subtraction->mat = new float*[m]; //alokacija memorije za matricu subtraction
		for (int z = 0; z < m; z++)
		{
			subtraction->mat[z] = new float[n];
		}

		for (int i = 0; i < input_mat.col; i++) 
		{
			for (int j = 0; j < input_mat.row; j++) 
			{
				addition->mat[i][j] = input_mat.mat[i][j] + random_mat.mat[i][j]; //zbrajanje elemenata na istim pozicijama
				subtraction->mat[i][j] = input_mat.mat[i][j] - random_mat.mat[i][j]; //oduzimanje elemenata na istim pozicijama
			}
		}
		return 1;
	}
	else
	{
		return 0; //ako matrice nisu istog tipa
	}
}

void transpose(matrix input_mat, matrix* transposed) 
{
	int n = input_mat.col;
	int m = input_mat.row;

	transposed->row = n;
	transposed->col = m;

	transposed->mat = new float*[n];
	for (int z = 0; z < n; z++)
	{
		transposed->mat[z] = new float[m];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			transposed->mat[j][i] = input_mat.mat[i][j]; //zamjena redaka i stupaca
		}
	}
}

void multiply(matrix input_mat, matrix random_mat, matrix* multi)
{
	multi->row = input_mat.row;
	multi->col = random_mat.col;

	multi->mat = new float*[input_mat.row]; 
	for (int z = 0; z < input_mat.row; z++)
	{
		multi->mat[z] = new float[random_mat.col];
	}
	for (int i = 0; i < input_mat.row; i++)
	{
		for (int j = 0; j < random_mat.col; j++)
		{
			multi->mat[i][j] = 0;
		}
	}
	for (int i = 0; i < input_mat.row; i++) 
	{
		for (int j = 0; j < random_mat.col; j++) 
		{
			for (int k = 0; k < random_mat.row; k++) 
			{
				multi->mat[i][j] += input_mat.mat[i][k] * random_mat.mat[k][j]; //mnozimo retke sa stupcima
			}
		}
	}
}

void delete_matrix(matrix* delete_mat) //oslobadanje memorije
{
	for (int i = 0; i < delete_mat->row; i++)
			delete [] delete_mat->mat[i];
		delete [] delete_mat->mat;
}

void output(matrix output_mat) 
{
	for (int i = 0; i < output_mat.row; i++)
	{
		for (int j = 0; j < output_mat.col; j++)
		{
			cout << setprecision(4) << fixed << output_mat.mat[i][j] << " "; //postavlja broj na 4 decimale
		}
		cout << endl;
	}
}

int main()
{
	matrix input_mat, random_mat, addition, subtraction, transposed, multiplication;
	int m1, n1, m2, n2;

	cout << "Enter the number of rows in first matrix: "; 
	cin >> m1;
	cout << "Enter the number of cols in first matrix: ";
	cin >> n1;
	input(&input_mat, m1, n1);
	cout << "Entered matrix: " << endl; 
	output(input_mat);
	cout << endl;

	cout << "Enter the number of rows for second matrix: "; 
	cin >> m2;
	cout << "Enter the number of cols for second matrix: ";
	cin >> n2;
	generate(&random_mat, m2, n2);
	cout << "Random generated matrix: " << endl; 
	output(random_mat);
	cout << endl;

	if ((addition_subtraction(input_mat, random_mat, &addition, &subtraction)) == 1)
	{
		cout << "Addition of matrices:" << endl;
		output(addition);
		cout << endl;
		cout << "Substraction of matrices:" << endl;
		output(subtraction);
		cout << endl;
	}
	else
	{
		cout << endl << "Matrices are not the same type! " << endl << endl;
	}

	if ((m1 == n2) && (m2 == n1) && (m1 != m2)) //za mnozenje broj redaka jedne treba bit jednak broju stupaca druge
	{
		multiply(input_mat, random_mat, &multiplication);
		cout << "Multiplication of matrices: " << endl;
		output(multiplication);
		cout << endl;
	}
	else
		cout << "Matrices cannot multiply! " << endl << endl;

	transpose(input_mat, &transposed);
	cout << "Transposed matrix: " << endl;
	output(transposed);

	delete_matrix(&input_mat);
	delete_matrix(&random_mat);
	delete_matrix(&subtraction);
	delete_matrix(&addition);
	delete_matrix(&multiplication);
	delete_matrix(&transposed);
}


