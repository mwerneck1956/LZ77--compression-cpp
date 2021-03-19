<h1 align="center">Algoritmo de compressão LZW</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-0.1.0-blue.svg?cacheSeconds=2592000" />
</p>

> Implementação em c++ do algoritmo de compressão lzw. O Algoritmo LZW (Lempel-Ziv-Welch) é um algoritmo de compressão de dados, derivado do algoritmo LZ78, baseado na localização e no registro das padronagens de uma estrutura. Foi desenvolvido e patenteado em 1984 por Terry Welch. É geralmente utilizado em imagens em que não se pode perder a definição original. Nas imagens, o algoritmo lê os valores de pixels de uma imagem bitmap e elabora uma tabela de códigos onde se representam as padronagens repetidas dos pixels encontrados.
## Autor

👤 **Matheus Werneck**

* Github: [@mwerneck1956](https://github.com/mwerneck1956)
* Linkedin: [Matheus Werneck](https://www.linkedin.com/in/matheus-werneck-2aa222178/)



# Como rodar o projeto em ambiente linux

**O projeto funciona da seguinte maneira, é passado como entrada do mesmo um arquivo txt, e o algoritmo ira pegar o conteúdo nesse arquivo .txt, salvar em uma string, e ira retornar a string comprimida salva no arquivo outCompression.txt**

**Como exemplo de entrada e saída temos**
```
Entrada :

ANABANANA
ANANABAFANA

String a ser processada : ANABANANAANANABAFANA (Concatenação das linhas do txt)

Resultado :  65 , 78 , 65 , 66 , 256 , 260 , 260 , 257 , 259 , 70 , 260 

```




**Certifique-se de ter o g++ instalado no seu ambiente de desenvolvimento**

1. Navegue até a pasta src
```
cd src
```

2. Para dar autorização ao shellscript de compilação, digite no terminal :  
```
chmod +x compile.sh 
```

3. execute no terminal o script de compilação, digitando o seguinte comando :
```
./compile.sh
```

4. Após a compilação , sera gerado o executável , para executar o programa será necessário passar
como argumento a localização do arquivo txt para testes
```
./main testes.txt 
```
5. Caso a execuçaõ ocorra com sucesso, a saída sera salva em src/outCompression.txt


