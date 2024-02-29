#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file ("matran.dat");
    int matrix[100][100];
    int m, n;
    file >> m;
    file >> n;
    for(int i= 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            file >> matrix[i][j];
        }
    
    }
    cout << m << " " << n << "\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //yc1
    for(int i = 0; i < m; i++)
    {
        int sumofRow = 0;
        for(int j = 0; j < n; j++)
        {
            sumofRow += matrix[i][j];
        }
        cout << "Sum Row" << i + 1 << ":" << sumofRow << endl;
    }
    //yc2
    for(int j = 0; j < n; j++)
    {
        int productofCol = 1;
        for(int i = 0; i < m; i++)
        {
            productofCol *= matrix[i][j];
        }
        cout << " Product Col " << j + 1 << ":" << productofCol << endl;
    }
    int max = 0 ;
    for(int i = 0; i < m; i++)
    {
        
        for(int j = 0; j < n; j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
            }
            
        }
        
    }
    cout << " Max of Matrix " << ":" << max << endl;

    int min = 9999;
    for(int i = 0; i < m; i++)
    {
        
        for(int j = 0; j < n; j++)
        {
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
            }
            
        }
        
    }
    cout << " Min of Matrix " << ":" << min << endl;

    
    int vt = 0;
    for(int i = 0; i < m; i++)
    {
        
        for(int j = 0; j < n; j++)
        {
            if(min == matrix[i][j])
            {
                min = matrix[i][j] ;
                vt ++;
                cout << " Position min  " << vt << "(row" <<" " << i + 1 << ", col" << " " << j + 1 << ")"<<endl;
            }
            
        }
        
    }
    int vt1 = 0;
    for(int i = 0; i < m; i++)
    {
        
        for(int j = 0; j < n; j++)
        {
            if(max == matrix[i][j])
            {
                
                vt1 ++;
                cout << " Position max " << vt1 << "(row" <<" " << i + 1 << ", col" << " " << j + 1 << ")"<<endl;
            }
            
        }
        
    }
    

    

    return 0;

}

