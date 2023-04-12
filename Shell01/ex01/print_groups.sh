#!/bin/bash
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"

A próxima linha id -Gn $FT_USER executa o comando id para recuperar os grupos aos quais o usuário especificado na variável de ambiente $FT_USER pertence. 
A opção -G especifica que o comando deve gerar os IDs do grupo e a opção -n especifica que ele deve gerar os nomes dos grupos.

A saída do comando id é então canalizada (|) para o comando tr duas vezes. 
O primeiro comando tr substitui todos os espaços na saída por vírgulas (,) e o segundo comando tr exclui todos os caracteres de nova linha (\n) na saída.

Portanto, a saída final desse script é uma lista separada por vírgulas dos grupos aos quais o usuário especificado na variável de ambiente $FT_USER pertence, 
sem nenhum caractere de nova linha.
