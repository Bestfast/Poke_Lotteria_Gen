#include <stdlib.h> 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int punt, random = rand() % 1000 + 1;
	string valu, reboot;
	printf("Benvenuto nel calcolatore di Bestfast!\nQuesto programma ti permette di estrarre il premio della lotteria del forum.\n");

	printf("Scrivi la valuta del giocatore:\nPokedollari\tMagicoins\n");
	cin >> valu;
	printf("Scrivi la puntata del giocatore, quindi premi invio.\n");
	cin >> punt;
	cout << "Il risultato è " << random;
	if (valu == "Magicoins" and punt == 25 or valu == "Pokedollari" and punt == 1000)
	{
		if (random >= 1 and random <= 399)
		{
			printf(":\nHai vinto... [SPOILER]5 oggetti acquistabili al Pokemon Market a scelta! ^^[/SPOILER]");
		}
		if (random >= 400 and random <= 600)
		{
			printf(":\nHai vinto... [SPOILER]5000$! ^^[/SPOILER]");
		}
		if (random >= 601 and random <= 1000)
		{
			printf(":\nHai vinto... [SPOILER]1x lista di un reparto market(solo oggetti acquistabili)! ^^[/SPOILER]");
		}
	}
	if (valu == "Magicoins" and punt == 50 or valu == "Pokedollari" and punt == 10000)
	{
		if (random >= 1 and random <= 99)
		{
			printf(":\nHai vinto... [SPOILER]Hai vinto 10 oggetti acquistabili al market ^^[/SPOILER]");
		}
		if (random >= 100 and random <= 600)
		{
			printf(":\nHai vinto... [SPOILER]12500$! ^^[/SPOILER]");
		}
		if (random >= 601 and random <= 799)
		{
			printf(":\nHai vinto... [SPOILER]un oggetto non acquistabile (no fossile,no megapietra)! ^^[/SPOILER]");
		}
		if (random >= 800 and random <= 1000)
		{
			printf(":\nHai vinto... [SPOILER]un Pokémon per il GDR!(no shiny,liv.5,no legend)[/SPOILER]");
		}
	}
	if (valu == "Magicoins" and punt == 75 or valu == "Pokedollari" and punt == 25000)
	{
		if (random >= 1 and random <= 100)
		{
			printf(":\nHai vinto... [SPOILER]20 oggetti acquistabili al market(solo oggetti acquistabili)! ^^[/SPOILER]");
		}
		if (random >= 101 and random <= 700)
		{
			printf(":\nHai vinto... [SPOILER]100000$!^^[/SPOILER]");
		}
		if (random >= 701 and random <= 900)
		{
			printf(":\nHai vinto... [SPOILER]un Pokémon shiny per il GDR!(liv.5,no legend)[/SPOILER]");
		}
		if (random >= 901 and random <= 1000)
		{
			printf(":\nHai vinto... [SPOILER]x8 strumenti del centro commerciale Rupepoli! ^^[/SPOILER]");
		}
	}
	if (valu == "Magicoins" and punt == 100 or valu == "Pokedollari" and punt == 50000)
	{
		if(random >= 1 and random <= 99 or random >= 101 and random <= 199 or random >= 201 and random <= 299 or random >= 301 and random <= 399)
		{
			printf(":\nHai vinto... [SPOILER]25 oggetti acquistabili al market!^^[/SPOILER]");
		}
		if(random >= 401 and random <= 499 or random >= 501 and random <= 599)
		{
			printf(":\nHai vinto... [SPOILER]x5 strumenti del centro commerciale rupepoli! ^^[/SPOILER]");
		}
		if(random >= 601 and random <= 699 or random >= 701 and random <= 799)
		{
			printf(":\nHai vinto... [SPOILER]un qualsiasi oggetto dalla lista Market(non acquistabili, ) ^^[/SPOILER]");
		}
		if(random >= 801 and random <= 899)
		{
			printf(":\nHai vinto... [SPOILER]un Pokèmon(livello e mosse a scelta max lv60,fossile si,shiny no)! ^^[/SPOILER]");
		}
		if(random >= 901 and random <= 979)
		{
			printf(":\nHai vinto... [SPOILER]un Pokèmon shiny livello max 60 no fossile,no Legend! ^^[/SPOILER]");
		}
		if(random >= 980 and random <= 994)
		{
			printf(":\nHai vinto... [SPOILER]un oggetto qualsiasi non acquistabile al market! ^^[/SPOILER]");
		}
		if(random >= 995 and random <= 999)
		{
			printf(":\nHai vinto... [SPOILER]Pokèmon Leggendario(livello 60 max moveset a, scelta)! ^^[/SPOILER]");
		}
		if(random == 1000)
		{
			printf(":\nHai vinto... [SPOILER]JACKPOT! Vinci:\n1000000$(1milione)\n1 Leggendario qualsiasi livello(si può scegliere anche il moveset, al costo che impari quelle mosse)\n1 Pokémon shiny qualsiasi livello(no legend,si può scegliere anche il moveset, al costo che impari quelle mosse)\nCongratulazioni! Questo è il premio più raro di tutti!^^[/SPOILER]");
		}
		if (random == 100 or random == 200 or random == 300 or random == 400 or random == 500 or random == 600 or random == 700 or random == 800 or random == 900)
		{
			printf(":\nHai vinto... [SPOILER]a scelta\nPokemon shiny (con abilità nascosta) lv max60\nOppure\n200.000$ +1 megapietra");
		} 
	}

	printf("\n\n\nTutto è stato generato correttamente\nVuoi creare un'altra scheda?\n");
	cin >> reboot;
	if(reboot == "Sì" or reboot == "Si" or reboot == "si" or reboot == "sì")
	{
		return main();
	}
	else
	{
		return 0;
	}
}
