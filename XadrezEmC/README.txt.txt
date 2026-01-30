=================================================
            JOGO DE XADREZ SIMPLES EM C
=================================================

Autor: Lucas Herrera
Linguagem: C
Execução: Terminal / Console
Compilador recomendado: GCC
Plataforma: Windows / Linux / macOS

-------------------------------------------------
1. DESCRIÇÃO DO PROJETO
-------------------------------------------------
Este projeto é um jogo de xadrez simplificado desenvolvido
em linguagem C, executado no terminal.

O objetivo principal é didático, servindo para estudo de:
- Matrizes bidimensionais
- Funções
- Organização de código em arquivos (.c e .h)
- Lógica de programação
- Entrada e saída de dados no terminal

O jogador humano joga contra o computador (CPU).

-------------------------------------------------
2. OBSERVAÇÕES IMPORTANTES
-------------------------------------------------
ATENÇÃO:
Este NÃO é um xadrez completo.

Limitações do projeto:
- Não valida regras oficiais do xadrez
- Não há xeque ou xeque-mate
- As peças podem se mover livremente
- A CPU realiza jogadas aleatórias

O foco é aprendizado, não competição real.

-------------------------------------------------
3. REPRESENTAÇÃO DO TABULEIRO
-------------------------------------------------
O tabuleiro é uma matriz 8x8 do tipo char.

- Peças do jogador: LETRAS MAIÚSCULAS
  R = Torre
  N = Cavalo
  B = Bispo
  Q = Rainha
  K = Rei
  P = Peão

- Peças da CPU: letras minúsculas
  r n b q k p

- Casas vazias: '.'

Colunas: a b c d e f g h
Linhas: 8 até 1

Exemplo de tabuleiro:

  a b c d e f g h
8 r n b q k b n r 8
7 p p p p p p p p 7
6 . . . . . . . . 6
5 . . . . . . . . 5
4 . . . . . . . . 4
3 . . . . . . . . 3
2 P P P P P P P P 2
1 R N B Q K B N R 1

-------------------------------------------------
4. ESTRUTURA DOS ARQUIVOS
-------------------------------------------------
Arquivos do projeto:

main.c
- Contém a função main
- Chama a função iniciarJogo()

jogo.c
- Implementação da lógica do jogo
- Funções do tabuleiro e jogadas

jogo.h
- Declaração das funções
- Permite organização do código

README.txt
- Documentação do projeto

-------------------------------------------------
5. FUNÇÕES DO PROGRAMA
-------------------------------------------------

Função: init()
- Inicializa o tabuleiro
- Posiciona todas as peças
- Preenche casas vazias com '.'

Função: draw()
- Desenha o tabuleiro no terminal
- Mostra coordenadas (a-h / 1-8)

Função: cpu()
- Realiza jogada aleatória da CPU
- Move apenas peças minúsculas
- Garante movimento dentro do tabuleiro

Função: iniciarJogo()
- Loop principal do jogo
- Lê jogadas do jogador
- Atualiza o tabuleiro
- Executa jogada da CPU
- Encerra ao digitar 0

-------------------------------------------------
6. COMO JOGAR
-------------------------------------------------
Durante o jogo, digite a jogada no formato:

e2 e4

Onde:
- e2 = origem
- e4 = destino

Para sair do jogo, digite:

0

-------------------------------------------------
7. COMO COMPILAR O PROJETO
-------------------------------------------------
Abra o terminal na pasta do projeto e execute:

gcc main.c jogo.c -o xadrez

-------------------------------------------------
8. COMO EXECUTAR
-------------------------------------------------

Windows:
xadrez.exe

Linux / macOS:
./xadrez

-------------------------------------------------
9. POSSÍVEIS MELHORIAS FUTURAS
-------------------------------------------------
- Validação real dos movimentos
- Sistema de turnos correto
- Detecção de xeque e xeque-mate
- IA mais inteligente para a CPU
- Histórico de jogadas
- Interface gráfica futuramente

-------------------------------------------------
10. LICENÇA
-------------------------------------------------
Projeto livre para uso educacional, estudos e modificações.
Não recomendado para uso comercial.

-------------------------------------------------
BOM JOGO E BONS ESTUDOS!
=================================================
