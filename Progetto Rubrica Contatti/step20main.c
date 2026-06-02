
int main() {
    Contatto agenda[MAX_CONTATTI];
    int contatore = 0; 
    
    int idInput, telInput;
    int indiceTrovato;

    popolaAgendaOrdinata(agenda, &contatore);
    stampaAgenda(agenda, contatore);

    printf("\n--- TEST INSERIMENTO ORDINATO ---\n");
    printf("Inserisci un nuovo ID numerico: ");
    scanf("%d", &idInput);
    printf("Inserisci il numero di telefono: ");
    scanf("%d", &telInput);
    
    if (inserisciOrdinato(agenda, &contatore, idInput, telInput)) {
        printf("Contatto inserito nella posizione corretta.\n");
    } else {
        printf("Impossibile inserire: agenda piena.\n");
    }
    stampaAgenda(agenda, contatore);

    printf("\n--- TEST RICERCA BINARIA ---\n");
    printf("Inserisci l'ID numerico da CERCARE con algoritmo binario: ");
    scanf("%d", &idInput);

    indiceTrovato = ricercaBinaria(agenda, contatore, idInput);

    if (indiceTrovato != -1) {
        printf("Trovato tramite ricerca binaria all'indice: %d -> Telefono: %d\n", indiceTrovato, agenda[indiceTrovato].telefono);
    } else {
        printf("ID non trovato.\n");
    }

    printf("\n--- TEST CANCELLAZIONE CON COMPATTAZIONE ---\n");
    printf("Inserisci l'ID numerico da CANCELLARE: ");
    scanf("%d", &idInput);

    if (eliminaContatto(agenda, &contatore, idInput)) {
        printf("Contatto rimosso con successo. L'ordine e' stato mantenuto.\n");
    } else {
        printf("Impossibile eliminare: ID inesistente.\n");
    }

    stampaAgenda(agenda, contatore);

    return 0;
}