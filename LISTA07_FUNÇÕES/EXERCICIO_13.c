//Fazer um programa para simular uma agenda de telefones. Para cada
//pessoa devem-se ter os seguintes dados em um registro de Contato:
//Nome, E-mail, Endereço (contendo os campos para Rua, número,
//complemento, bairro, cep, cidade, estado, país), Telefone (contendo
//campos para DDD e número), Data de aniversário (contendo campo
//para dia, mês, ano), observações (Uma string para alguma observação
//especial).
//(a) Definir as estruturas acima.
//(b) Declarar a variável agenda (vetor) com capacidade de agendar até
//100 registros de Contatos.
//(c) Faça um menu principal com as opções abaixo. Para cada opção,
//criar uma função correspondente que receba os parâmetros
//correspondentes e realiza o que for necessário. Observe que a agenda
//deve ser passada como referência como parâmetro quando for
//necessário alterá-la:
//1) Inserir uma pessoa na agenda;
//2) Pesquisar por um nome: Imprime os dados da pessoa com esse
//nome (se tiver mais de uma pessoa, imprime para todas);
//3) Buscar por mês de aniversário: Imprime os dados de todas as
//pessoas que fazem aniversário no mês digitado;
//4) Imprimir a agenda: imprime nome, telefone e e-mail de todos os
//registros.
//5) Sai