# Trabalho_pratico_1---Turma-M1
Trabalho do aluno Gustavo Augusto Reginatto da Turma M1 de AED.

Problema em questão: 
Dada uma string licensePlate e um array de strings words, encontre a palavra completadora mais curta em words.
Uma palavra completadora é uma palavra que contém todas as letras em licensePlate. Ignore números e espaços em licensePlate, e trate as letras como sendo insensíveis a maiúsculas e minúsculas. Se uma letra aparecer mais de uma vez em licensePlate, então ela deve aparecer na palavra o mesmo número de vezes ou mais.
Por exemplo, se licensePlate = "aBc 12c", então ela contém as letras 'a', 'b' (ignorando maiúsculas e minúsculas) e 'c' duas vezes. Possíveis palavras completadoras são "abccdef", "caaacab" e "cbca".
Retorne a palavra completadora mais curta em words. É garantido que exista uma resposta. Se houver várias palavras completadoras mais curtas, retorne a primeira que ocorrer em `words".

3 casos de sucesso:
Os 3 casos já disponibilizados no leetcode além do proprio submit.

1° Caso:
licensePlate = "aBc 12c".
words = "abccdef", "caaacab", "cbca", "abcdef", "cba".
palavra retornada = "cbca".

2° Caso:
licensePlate = "1s3 PSt".
words = "step","steps","stripe","stepple".
palavra retornada = "steps".

3° Caso: 
licensePlate = "1s3 456".
words = "looks","pest","stew","show".
palavra retornada = pest.

O que funcionou ou não:
Não funcionou tentar resolver o exercicio somente pela biblioteca string.h, então, foi necessário aprender um pouco sobre o funcionamento da ctype.h para conseguir resolver o mesmo.

