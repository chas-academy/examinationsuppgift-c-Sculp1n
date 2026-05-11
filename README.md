[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/G22Vs7Up)
# 🎓 Examination - Elevhanteringssystem

Välkommen till detta prov i **Programmering i C**! Din uppgift är att skriva ett program som läser in provresultat, analyserar statistik och presenterar data för läraren.

## ⚠️ VIKTIGT: LÄS DETTA FÖRST

För att din inlämning ska fungera och rättas korrekt måste du följa dessa regler:

1. **Rör ej systemfiler:** Du får **inte** göra ändringar i mappen `.github`, `test.sh` eller `makefile`. Om du ändrar dessa filer kan ditt prov ogiltigförklaras.
2. **Registrering:** Du måste fylla i ditt ID i `student.json` innan du börjar (se nedan).
3. **Inlämningsstatus:** Du styr själv när du är "klar" genom en inställning i `student.json`.

---

## 🆔 Steg 1: Setup & ID

Innan du börjar koda **måste** du ställa in ditt projekt. Om du inte gör detta kommer inga av dina tester att köras.

**Så här hittar du ditt ID:**

1. Logga in på antagningssidan (yh-antagning.se).
2. Under "Inlämnade ansökningar", klicka på rutan för denna utbildning.
3. Scrolla längst ner på sidan till sektionen **"Mina personuppgifter"** (klicka på pilen för att fälla ut om det behövs).
4. Kopiera koden som står vid **Ansökningsnummer** (t.ex. `FSAEFSAD`).

**Så här ställer du in repot:**

1. Öppna filen `student.json` i din kodeditor.
2. Byt ut texten `"SKRIV_DITT_ID_HÄR"` mot ditt ID.
3. Låt `"submitted": false` vara kvar. Detta betyder att du jobbar på ett **utkast**.
4. Spara filen.

```json
{
  "student_id": "SKRIV_DITT_ID_HÄR",
  "submitted": false
}
```

---

## 📝 Uppgiftsbeskrivning

**Fil att arbeta i:** `main.c`

Du ska skapa ett system som hanterar **5 elever** och deras resultat från **13 olika prov** under ett läsår. Programmet ska läsa in namn och poäng, räkna ut medelvärden och filtrera ut specifika resultat.

**Specifikation i korthet:**

- **Indata:** 5 rader. Varje rad har formatet: `Namn p1 p2 p3 ... p13`.
- **Namn:** Engelska förnamn (a-z), max 10 tecken.
- **Poäng:** Heltal 0-10.

Totalt kan du få **100 poäng** på den automatiska rättningen.

### 🚫 Regler & Begränsningar (Viktigt!)

För att det automatiska rättningssystemet ska fungera måste du följa dessa regler strikt:

1. **Ingen extra text:** Programmet får **INTE** skriva ut text som "Mata in namn:" eller "Resultatet är:". Endast namnen på eleverna ska skrivas ut.
2. **Exakt utskrift:** Varje namn ska skrivas ut på en egen rad.
3. **Versaler:** Alla namn ska skrivas ut med Stor Begynnelsebokstav (t.ex. "Alice"), oavsett hur de matades in.
4. **Inläsning:** Använd med fördel `scanf()` för att hantera inmatningen.

### Funktionella Krav & Poängsättning

Din kod rättas i steg. Även om du har småfel (t.ex. fel stor bokstav) kan du få poäng för logiken.

#### 1. Grundläggande funktionalitet (20p)

- **(20p)** Koden ska kompilera och köra utan att krascha när testdata matas in.

#### 2. Analys: Högst medelpoäng (30p)

- **(15p) Logik:** Programmet identifierar korrekt _vilken_ elev som har högst medelpoäng (oavsett stor/liten bokstav).
- **(15p) Format:** Namnet skrivs ut korrekt med stor begynnelsebokstav (t.ex. "Charlie").

#### 3. Analys: Under gruppens snitt (30p)

- **(15p) Logik:** Programmet räknar ut totala medelvärdet och identifierar _vilka_ elever som ligger under detta (oavsett stor/liten bokstav).
- **(15p) Format:** Namnen skrivs ut med stor begynnelsebokstav och i samma ordning som de matades in (t.ex. "Bob" och "Dave").

---

## Inlämning & Video (20p)

Förutom koden ska du spela in en kort skärminspelning där du demonstrerar din lösning.

1.  Spela in när du visar din lösning och berättar om hur den fungerar.
2.  Döp filen till exakt: `videoprov.mp4`.
3.  Lägg filen i rotmappen (samma ställe som denna README).
4.  **OBS:** Filen får inte vara större än 100MB.

---

## 🚀 Hur du testar din kod

Detta projekt använder automatisk rättning. Du har två sätt att se dina poäng:

### Alternativ 1: Köra testerna lokalt (Rekommenderas!)

Du kan köra exakt samma tester som GitHub använder direkt i din terminal. Detta ger dig snabbast feedback.

1. Öppna en terminal i mappen.
2. Skriv följande kommando:

```bash
make test

```

Detta kommer att kompilera din kod och köra alla deltester. Du ser direkt vilka delar som är "Pass" eller "Fail".

### Alternativ 2: Testa manuellt

Om du vill felsöka och mata in egna värden manuellt:

1. Kompilera: `gcc main.c -o main.out`
2. Kör: `./main.out`
3. Klistra in följande testdata:

```text
alice 8 9 7 6 10 9 8 7 10 10 9 10 8
Bob 5 5 6 4 5 6 5 5 4 6 5 5 4
Charlie 10 9 9 10 10 9 9 10 9 10 10 9 10
david 4 3 5 4 4 5 4 5 4 3 5 4 4
Eve 7 6 7 8 7 6 7 7 6 7 8 7 6

```

**Förväntat resultat:**

```text
Charlie
Bob
David
```

_(Ingen annan text får förekomma!)_

### Alternativ 3: GitHub Feedback

När du gör en `git push` kommer GitHub att köra testerna. Resultatet syns under fliken **Actions** eller som en kommentar i din **Pull Request**.

> **OBS:** Så länge `submitted` är `false` kommer GitHub visa ett **Rött Kryss** (Failed) på inlämningen för att visa att den ej är inlämnad. Detta är normalt.

---

## ✅ Steg 2: Inlämning

När du känner dig klar och har fått de poäng du satsar på:

1. Öppna `student.json`.
2. Ändra `"submitted": false` till `"submitted": true`.
3. Spara, committa och pusha till GitHub.

```json
{
  "student_id": "SKRIV_DITT_ID_HÄR",
  "submitted": true
}
```

Nu (om du klarat alla obligatoriska krav) ska du få en **Grön Bock** ✅ på GitHub och botten kommer skriva "INLÄMNING MOTTAGEN".

---

### Lycka till! 🌟
