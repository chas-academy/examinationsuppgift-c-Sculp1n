// Nadir Dahlgren - Ansökningsnummer: SG3JWYPT //

#include <stdio.h> // Bibliotek för printf och scanf.
#include <ctype.h> // Bibliotek för funktioner som hanterar tecken och bokstäver.

int main() // Huvudfunktionen där programmet startar. 
    {
    char elever[5][11];  // char-array elever[5][11] skapar fem platser, där varje namn får ha max tio tecken + nolltecknet.  
    float medelv[5];     // Array för medelvärdet hos varje enskild elev.
    float medelv_sum = 0;   // Variabel för summan av alla elevers medelvärden.

    // Inläsning av varje elev //

    for (int i = 0; i < 5; i++) // Yttre loop som körs en gång per elev. Totalt fem elever. 
    {  
        // Inmatning och format //

        scanf("%s", elever[i]);  // Läser in ett namn som en sträng och lagrar det i elever[i]. 
        elever[i][0] = toupper(elever[i][0]);  // Första bokstaven blir stor med toupper. Indexplats 0.
        for (int j = 1; elever[i][j] != '\0'; j++) // Går igenom resten av namnet tills nolltecknet '\0' nås och gör alla bokstäver små.
        {
            elever[i][j] = tolower(elever[i][j]); // Gör resterande bokstäver små
        }
        
        // Poäng //

        float sum = 0; // Variabel för att summera poängen för varje elev. 
        for (int j = 0; j < 13; j++)  // Loop som körs 13 gånger för alla prov per elev för att läsa in varje poäng. 
        {
            int score; // Variabel för poäng.
            scanf("%d", &score); // Läser in poängen som ett heltal (%d) och lagrar värdet i score. 
            sum += score;        // Adderar poängen till elevens totala summa
        }
        
        // Medelvärde //

        medelv[i] = sum / 13.0; // Räkna ut elevens medelvärde. Division med 13.0 tvingar fram flyttalsberäkning.
        medelv_sum += medelv[i]; // Summerar elevens medelvärde till gruppens totalvärde.
    }

    float medelv_grupp = medelv_sum / 5.0; // Räkna ut hela gruppens medelvärde baserat på de fem eleverna.

    // Högst medelpoäng //

    int best_index = 0; // Vi antar först att den första eleven (index 0) är bäst och jämför sedan med resten
    for (int i = 1; i < 5; i++) // Loop som börjar från index 1. Vi jämför varje elevs medelvärde med den "bästa" hittills. 
    {
        if (medelv[i] > medelv[best_index]) 
        {
            best_index = i; // Uppdatera index om vi hittar någon med högre snitt
        }
    }
    printf("%s\n", elever[best_index]); // Skriv ut namnet på eleven med högst medelpoäng

    // Under gruppens snitt //

    for (int i = 0; i < 5; i++)  // Loopa igenom alla elever igen för att se vilka som ligger under gruppens totala snitt
    {
        if (medelv[i] < medelv_grupp)  
        {
            printf("%s\n", elever[i]); // Skriver ut namnen i samma ordning som de matades in
        }
    }

    return 0;
}