// ********Third working day - Task 3*********** //
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;



int main()
{
    ifstream File;
    File.open("data.txt");
    std::vector<string> vect;
    string line;

    if(!File) //Always test the file open.
    {
        std::cout<<"Error opening output file"<<std::endl;
        system("pause");
        return -1;
    }

    while (std::getline(File, line))
    {
        vect.push_back(line);
        // For debug: cout << "RowSize = "<< line.size() << endl;
    }
    File.close();

    int RowSize=vect[0].size();
    int VectSize=vect.size();
// For debug: cout << "sizevect =>  "<< VectSiz << endl;
    int count= 0; // for counting the trees #
    int i=0;

    for (int j=0; j<VectSize-1; j++)
    {
        i=i+3;

        i = i % RowSize ;


        if (vect[j+1][i] == '#')
        {
            // For debug: cout << "vect[" << i+3 <<"][" << j+1 <<"]"<< vect[j+1][i]<< endl;
            count++;
        }
        else
        {
            /*Nothing to do */

        }
    }
    cout << "The number of trees: "<< count << endl;
    return 0;
}
