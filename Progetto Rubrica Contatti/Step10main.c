int main() {
Contatto agenda[MAX_CONTATTI];
int contatore = 0; 
int idInput;
int indiceTrovato;

popolaAgenda(agenda, &contatore);
stampaAgenda(agenda, contatore);

printf("\nInserisci l'ID numerico da CERCARE: ");
scanf("%d", &idInput);

indiceTrovato = ricercaSequenziale(agenda, contatore, idInput);

if (indiceTrovato != -1) {
printf("Trovato! Posizione: %d -> Telefono: %d\n", indiceTrovato, agenda[indiceTrovato].telefono);
} else {
printf("ID non trovato.\n");
}

printf("\nInserisci l'ID numerico da CANCELLARE: ");
scanf("%d", &idInput);

if (eliminaContatto(agenda, &contatore, idInput)) {
printf("Contatto rimosso con successo e vettore compattato.\n");
} else {
printf("Impossibile eliminare: ID inesistente.\n");
}

stampaAgenda(agenda, contatore);

return 0;
}