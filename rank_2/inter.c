#include "unistd.h"
int main(int argc, char **v)
{

	char a[255] = {0};
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (v[1][i])
		{
			j = 0;
			while (v[2][j])
			{
				if (v[1][i] == v[2][j])
				{
					if (!a[v[1][i]])
					{
						write(1, &v[1][i], 1);
						a[v[1][i]] = 1;
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	else
	{
		write(1, &"\n", 1);
	}
}