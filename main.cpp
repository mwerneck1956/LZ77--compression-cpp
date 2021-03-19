#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

std::vector<int> lzwCompression(string input)
{
    std::unordered_map<string, int> dictionary;
    //Inicializo meu dicionário com todos simbolos da tabela ASCII
    for (int i = 0; i < 255; i++)
    {
        string character = "";
        character += char(i);
        dictionary[character] = i;
    }

    string p = "", c = "";

    //inicializo o p com a string[0] da minha squencia
    p = input[0];

    //Atualizo o código
    int code = 256;

    //Vetor para armazenar o valor compressado
    std::vector<int> compressedData;

    for (int i = 0; i < input.size(); i++)
    {
        if (i != input.size() - 1)
            c += input[i + 1];

        //Busca valor no meu dicionário,se  estiver presenta
        //faço p = p+c
        if (dictionary.find(p + c) != dictionary.end())
        {
            p = p + c;
        }
        else
        {
            compressedData.push_back(dictionary[p]);
            dictionary[p + c] = code;
            code++;
            p = c;
        }
        c = "";
    }
    compressedData.push_back(dictionary[p]);

    return compressedData;
}

void lzwDecode(vector<int> compressedData)
{
    std::unordered_map<int, string> dictionary;
    //Inicializo meu dicionário com todos simbolos da tabela ASCII
    for (int i = 0; i < 255; i++)
    {
        string character = "";
        character += char(i);
        dictionary[i] = character;
    }

    int old = compressedData[0];
    int decodedCharacterIndex = 0;

    string out = dictionary[old] , c ="";
    c+= out[0];
    cout << out; 
    int code = 256;
    
    for(int i = 0 ; i < compressedData.size() -1 ; i++){

        decodedCharacterIndex = compressedData[i+1];

        if(dictionary.find(decodedCharacterIndex) == dictionary.end()){
            out = dictionary[old];
            out+=c;
        }else{
            out = dictionary[decodedCharacterIndex];
        }
        cout << out; 
        c = "";
        c+= out[0];
        dictionary[code] = dictionary[old] + c;
        code++;
        old = decodedCharacterIndex;
    }
    cout << endl;
}

int main()
{
    //ifstream arq("inString.txt");
    cout << "a " << endl;
    std::vector<int> compressed = lzwCompression("bananabanabofana");
    for (int key : compressed)
    {
        cout << key << " , ";
    }

    cout << endl;

    lzwDecode(compressed);

    //ofstream arq("outTests.txt");
}