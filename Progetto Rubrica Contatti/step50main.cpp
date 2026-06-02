
int main() {
    GestoreContatti gestore;
    
    int idInput, telInput;
    int telefonoTrovato;

    gestore.popolaAutomaticamente();
    gestore.stampaAgenda();

    std::cout << "\n--- TEST INSERIMENTO ORDINATO ---\n";
    std::cout << "Inserisci un nuovo ID numerico: ";
    std::cin >> idInput;
    std::cout << "Inserisci il numero di telefono: ";
    std::cin >> telInput;
    
    if (gestore.inserisciOrdinato(idInput, telInput)) {
        std::cout << "Contatto inserito nella posizione corretta.\n";
    } else {
        std::cout << "Impossibile inserire: agenda piena.\n";
    }
    gestore.stampaAgenda();

    std::cout << "\n--- TEST RICERCA BINARIA INCAPSULATA ---\n";
    std::cout << "Inserisci l'ID numerico da CERCARE: ";
    std::cin >> idInput;

    telefonoTrovato = gestore.cercaContatto(idInput);

    if (telefonoTrovato != -1) {
        std::cout << "Trovato! Telefono associato: " << telefonoTrovato << "\n";
    } else {
        std::cout << "ID non trovato.\n";
    }

    std::cout << "\n--- TEST CANCELLAZIONE CON COMPATTAZIONE ---\n";
    std::cout << "Inserisci l'ID numerico da CANCELLARE: ";
    std::cin >> idInput;

    if (gestore.eliminaContatto(idInput)) {
        std::cout << "Contatto rimosso con successo. L'ordine e' stato mantenuto.\n";
    } else {
        std::cout << "Impossibile eliminare: ID inesistente.\n";
    }

    gestore.stampaAgenda();

    return 0;
}