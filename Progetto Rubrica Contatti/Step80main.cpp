
int main() {
    GestoreContattiABC* gestore = new GestoreFilePersistente();
    
    int idInput, telInput;
    int telefonoTrovato;

    gestore->stampaAgenda();

    std::cout << "\n--- TEST INSERIMENTO SEQUENZIALE SU FILE ---\n";
    std::cout << "Inserisci un nuovo ID numerico: ";
    std::cin >> idInput;
    std::cout << "Inserisci il numero di telefono: ";
    std::cin >> telInput;
    
    if (gestore->inserisciOrdinato(idInput, telInput)) {
        std::cout << "Contatto scritto su file (sostituendo un marker o in append).\n";
    } else {
        std::cout << "Impossibile inserire: errore o file pieno.\n";
    }
    gestore->stampaAgenda();

    std::cout << "\n--- TEST RICERCA SEQUENZIALE SU FILE ---\n";
    std::cout << "Inserisci l'ID numerico da CERCARE: ";
    std::cin >> idInput;

    telefonoTrovato = gestore->cercaContatto(idInput);

    if (telefonoTrovato != -1) {
        std::cout << "Trovato su file! Telefono associato: " << telefonoTrovato << "\n";
    } else {
        std::cout << "ID non trovato sul file.\n";
    }

    std::cout << "\n--- TEST CANCELLAZIONE LOGICA (SOVRASCRITTURA CON MARKER) ---\n";
    std::cout << "Inserisci l'ID numerico da CANCELLARE: ";
    std::cin >> idInput;

    if (gestore->eliminaContatto(idInput)) {
        std::cout << "Contatto sovrascritto con successo con il marker -1.\n";
    } else {
        std::cout << "Impossibile eliminare: ID inesistente sul file.\n";
    }

    gestore->stampaAgenda();

    delete gestore;
    return 0;
}