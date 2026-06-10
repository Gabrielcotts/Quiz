# Quiz
____
### Documentação do Quiz!
____

#### Dia 01/06/2026 
Iniciamos o projeto "Quiz"! Fizemos a base para dar início ao projeto e após isso, pensamos em maneiras que seriam confortáveis e divertidas para o usuário.
A princípio, iríamos fazer com que o jogador tentasse novamente caso cometesse um erro, mas isso acabaria com a imersão e a dificuldade do jogador, pois ele poderia simplesmente repetir e ver a resposta.
Portanto, optamos por deixar o usuário prosseguir mesmo após o erro e preferimos dar uma avaliação com mensagens divertidas com base no desempenho do jogador. 

#### Dia 02/06/2026
Após uma conferência, percebemos que o usuário poderia responder de forma correta usando letras maiúsculas, mas o sistema retornaria "errado".
Então fizemos uma validação para que isso não ocorra e a resposta possa ser validada independente se foi respondida com letras minúsculas ou maiúsculas.


#### Dia 08/06/2026
O codigo foi refatorado utilizando structs e vetores, conseguindo armazenar todas as perguntas, alternativas e respsotas em apenas uma estrutura de dados. Eliminando os blocos de printf, scanf e if/else, e substituindo pelo for onde o mesmo vai percorrer automaticamente todas as perguntas.

#### Dia 10/06/2026
Ajustamos o código para rodar no Dev-C++, removendo as declarações de variáveis dentro do 'for' e alterando a função 'int quiz()' para 'void quiz()'.
