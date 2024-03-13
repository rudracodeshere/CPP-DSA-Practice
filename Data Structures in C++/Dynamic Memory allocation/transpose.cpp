#include <iostream>
using namespace std;
int main()
{
	int test_case;
	cin>>test_case;
	while(test_case!=0){
		int m,n;
		cin>>m>>n;
		int **p = new int*[m];
		for(int i = 0;i<m;i++){
			p[i] = new int[n];
		}

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin>>p[i][j];
            }
        }


        int **p2 = new int*[n];

        for(int i = 0;i<n;i++){
			p2[i] = new int[m];
		}

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                p2[i][j]=p[j][i];
            }
        }

         p = p2;

         for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }

        test_case--;
	}
}
