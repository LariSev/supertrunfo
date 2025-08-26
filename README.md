# supertrunfo

// Super Trunfo - Países
Este projeto é uma versão do jogo Super Trunfo, focada em cidades de diferentes estados de um país. O objetivo do jogo é comparar cartas com atributos de cidades, determinando qual carta é mais forte com base em população, área, PIB, pontos turísticos, densidade populacional, PIB per capita e um "Super Poder".

Atributos das Cartas

População (unsigned long int)
Área (float)
PIB (float, em bilhões de reais)
Número de Pontos Turísticos (int)
Densidade Populacional (float, calculada como população / área)
PIB per Capita (float, PIB / população)
Super Poder (float, soma de todos os atributos numéricos com densidade invertida)

Comparações
 Compara atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).    
 Para Densidade Populacional, vence a carta com o menor valor.     
 Para os demais atributos (e o Super Poder), vence a carta com o maior valor. 
