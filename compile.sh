echo "Começando a compilação do projeto"

g++ *.cpp
if [ $? -eq 0 ];then 
   echo "Compilado com sucesso! :)"
else
   echo "Nao compilado :("
fi