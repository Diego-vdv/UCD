# Revup

*Omschrijving van je concept in 1 zin:*  

Een slimme GPS voor motorrijders die groepscommunicatie vergemakkelijkt en emotionele signalen kan vertalen naar acties zoals pauzes of routeaanpassingen.

*Projectteam: Diego Vande Vyvere; Mattiz Vermeulen* 

2024 - 2025  

---

## Samenvatting

Tijdens groepsritten op de motor of brommer ontstaan er geregeld communicatieproblemen, zeker bij onverwachte situaties zoals wegveranderingen, tankbeurten of stress. Met dit project willen we dit aanpakken door een slim GPS-systeem te ontwerpen dat via eenvoudige input en output (zoals knoppen en licht- of geluidsignalen) de communicatie stroomlijnt. In de discovery fase onderzochten we voorkeuren rond communicatievormen, outputtypes en routecoördinatie. Hierna worden de design requirements opgesteld om in de develop fase de uitgekomen eisen en wensen tot een finaal concept/ product uit te werken.

*Hero image/render:*
<p align=center>  
  <img src="fotos/image.png") alt=testlocatie width=50% />
</p> 

---

## Probleemstelling

>^[!Note]
>aanpassen

Communicatie tussen motorrijders in groep is vaak beperkt tot handgebaren en korte intercomgesprekken. Dit leidt tot frustraties en onduidelijkheden, zeker tijdens langere ritten of bij stresssituaties. Ons doel is om de communicatie en beleving tijdens groepsritten te verbeteren, met speciale aandacht voor intuïtieve input/outputoplossingen en emotieherkenning. Hierbij houden we rekening met de complexiteit van motorrijden: handen zijn niet vrij, zichtbaarheid is beperkt en veiligheid staat centraal.

We baseren ons o.a. op inzichten uit gebruikersonderzoek, literatuur over rijdersgedrag en technologie zoals de Emotiebit, die biofeedbackdata kan geven zoals hartslag of galvanische huidrespons (GSR). 

---

## Methodologie

Door een zeer late pivot vanuit een ander project werd dit project uitgevoerd in een tijdsspan van 9 weken. Hierdoor kon het vooropgelegde stappenplan van het vak project gebruiksgericht ontwerp niet gevolgd worden. Er zal dus gebruik gemaakt worden van AI om orde en structuur, renders zoals hierboven en mogelijke elektronica vooruit te helpen, het gebruik van AI wordt telkens nagelezen en kritisch bekeken.

De 9 weken werden als volgt verdeeld:

- **Fase 1: Desk Research & Enquête**  
  → Reddit-enquête bij motorrijders (20+ antwoorden)

- **Fase 2: Interviews (Wave 1, 2 & 3)**  
  → Diepte-interviews met rijders rond frustraties, communicatiegewoontes, routeplanning en beleving

- **Fase 3: Analyse & Synthese**  
  → Persona's, scenario’s, design criteria

- **Fase 4: Develop Fase**
  → Looks, informatie hyrarchie, uitwerken elektronica, ...

- **Fase 5: Delivery Fase**
  → Afwerking, video

- **Visuale tijdslijn:** 
  - Week 1: Discovery
  - Week 2 t.e.m. week 5: Define
  - Week 6 t.e.m. week 9: Develop fase
  - Week 9: Delivery fase

---

## Discovery

### Doelstellingen

- Achterhalen hoe motorrijders communiceren in groep
- Inzicht krijgen in frustraties en emotionele triggers tijdens groepsritten
- Verkennen van technologiën rond input/outputvormen

### Materiaal & methoden

- Google Form vragenlijst (via Reddit)
- Literatuurstudie Wave 1
- Persona-ontwikkeling
- Online whiteboard Miro

### Resultaten

- Veelgebruikte communicatie: intercom, handgebaren, GPX-route
- Frustraties: slechte koppeling, onduidelijkheid, stress door misverstanden, niet iedereen heeft com-systeem/ kent de handgebaren
- Visuele output (licht) is nuttig, maar beperkt bruikbaar bij zonlicht
- Schermen zijn herkenbaar en kunnen makkelijk veschillende informatie delen
- Geluid kan handig zijn als de persoon over de nodige hardware bezit
- Trillingen worden negatief beoordeeld
- Inputmethodes zoals touchscreen met weinig tactiele feedback vragen te veel andacht tijdens het rijden
- Een glove die handgebaren opvangt kan leuk en "voor de hand liggend zijn" qua gebruik, maar heeft technisch wat moeilijkheden


### Conclusies & implicaties

- Keep it simple: fysieke knoppen en beperkte outputtypes hebben voorkeur
- Emotieherkenning moet optioneel zijn en niet dominant
- Route moet voor iedereen zichtbaar zijn of gestuurd kunnen worden
- Geef de gebruiker een optie om een directe route naar de groep te tonen als hij verdwaald geraakt
- Maak het mogelijk om te koppelen met bestaande com systemen voor auditieve feedback of meldingen
- Motorrijders willen autonomie behouden, maar ook comfort en duidelijkheid

---

## Definition
>^[!Note]
>aanpassen: wave 2 en 3 naar definition verplaatst
### Doelstellingen

- Vaststellen van kernfunctionaliteiten en vereisten voor groepscommunicatie op de motor
- Integratie van emotiedetectie als niet-intrusieve aanvulling op communicatie
- Definiëren van input- en outputvoorkeuren op basis van gebruikersdata

### Materiaal en methoden

- Analyse van enquête en interviewresultaten (Wave 2 en 3)
- Persona-ontwikkeling en scenariobouw
- Synthese van fysieke en cognitieve voorkeuren voor productinteractie
- Vertaling naar concrete design requirements

### Resultaten

- Gebruiksgemak vereist fysieke knoppen boven touchscreens
- Visuele feedback (symbolen + kleur) primeert op tekst of geluid
- Autonomie van de gebruiker blijft belangrijk
– notificaties moeten niet opdringerig zijn
- Groepscoördinatie via zichtbare route en "volg kapitein"-functie blijkt waardevol

- Emotieherkenning enkel als optioneel detectiesysteem met manuele bevestiging
  
### Conclusies en implicaties (design requirements en beslissingen)

- Knoppen moeten groot, duidelijk en haptisch zijn
- Plaatsing aan de linkerstuurzijde is optimaal voor veiligheid en bereikbaarheid
- De interface moet eenvoudig, leesbaar en universeel zijn qua iconografie
- Biofeedback mag niet centraal staan, maar moet als aanvullende comfortlaag functioneren
- Compatibiliteit met bestaande intercomsystemen is essentieel

---

## Develop 1: Vormstudie inputknoppen & Interfacefeedback

### Doelstellingen

Het doel van deze fase was het analyseren en vergelijken van verschillende fysieke inputknoppen met de focus op gebruiksgemak tijdens het motorrijden, en het vergelijken van verschillende outputmogelijkheden van meldingen met de focus op cognitieve belasting.

### Materiaal en methoden

Vier knoptypes werden getest op een stuur. Respondenten moesten de knoppen beoordelen op:
- Vorm en grootte
- Gebruiksgemak
- Positie van de onderlinge knoppen.

Hierna wordt een POV video van een rit voor de respondent getoont en wordt gevraagd om een helm aan te doen. De respondent focust doorheen de test op de video terwijl er prototypes onder het scherm geplaatst worden. Er zijn 4 prototypes: leds, zwart-wit symbolen, symbolen met elk een kleur, en woorden met elk een kleur. De respondent zegt luidop als hij een melding ziet en wat de betekenis is terwijl de tijd opgenomen wordt. Hierna worden nog enkele vragen gesteld.

### Resultaten

- Rechthoekiege knoppen zijn makkelijker te herkennen en te onderrscheiden.
- Kleine knoppen zijn moeilijk te bedienen met handschoenen.
- De knoppen worden onder elkaar geplaatst om makkelijker de beweging van de duim te volgen.

> [!Note]
> Hier afbeelding toevoegen van ranking resultaat

### Conclusies en implicaties (design requirements en beslissingen)

- Knopvorm: Vierkant/ rechthoekig, breed oppervlak, duidelijke feedback (klik/veer)
- Interface: Symbolen met vaste kleurcode, vermijd overmatige tekst, led lichtjes die belangrijke meldingen rapper en feller tonen.
- Fysieke ergonomie: Knoppen boven elkaar uitlijnen om beweging en reach van de duim te volgen
- Cognitieve ergonomie: Beperk visuele input, vermijd dubbelzinnige signalen, geef de knoppen een eigen identiteit (kleur, textuur, …)

---

## Develop 2: Prototype-evaluatie

### Doelstellingen (cfr. methodologie)

Valideren van het finale prototype op gebruiksvriendelijkheid, plaatsing, en intuïtieve interactie.

### Materiaal en methoden

- Wizard-of-Oz tests
- Interviews
- Plaatsingsoefening
- BERT-evaluatie t.o.v. intercomsystemen

### Resultaten

- Knoppen: goed voelbaar, maar kunnen groter of verder uit elkaar
- Interface: LED’s goed voor signalering; gebruikers verwachten bevestiging
- BERT-test: prototype werd als intuïtiever en minder DIY ervaren dan vorige versies

### Conclusies en implicaties (design requirements en beslissingen)

- Plaatsing aan linkerstuurzijde is optimaal
- Feedback moet meer visuele variatie hebben (kleur/textuur)
- Suggestie voor confirmatieknop of tijdsgebonden bevestiging

---

## Conclusie
- Slotbevindingen
- Tabel met de finale design requirements

---

## Kritische reflectie
- Over SEM1 en SEM2
- Over zowel het ontwerp zelf, de methodologie, de uitgevoerde testen en analyses, de gemaakte prototypes, als openstaande onderzoeksvragen (future research should focus on …)
  
---

## Technische beschrijving
- Dit vervangt de bill of materials en omvat zowel de finale bill of materials (verwijs ook naar webpagina’s voor componenten en voeg eventueel ook de kostprijs toe), code en build instructions.
- Hiermee moet iemand die wil verderweren op je product genoeg hebben om dit na te bouwen.

---

## Bill of materials
- GPS-module met visueel scherm of LED-feedback
- Emotiebit of compatibele biofeedbacksensor
- Drukknoppen en/of potentiometers (input)
- Bevestigingselementen (stuur)
- Communicatiemodule (voor koppeling met intercom)

---

## Kritische reflectie
Het project toonde al in een vroege fase dat veel rijders technologie waarderen zolang deze niet opdringerig is. De interviews bevestigden het belang van gebruiksgemak, zichtbaarheid en compatibiliteit met bestaande systemen. Emotieherkenning blijkt interessant, maar vereist duidelijkheid en controle voor de gebruiker. De volgende stap is een iteratieve testfase waarin feedbackcycli worden ingebouwd.

---

## Bronnen
- Doe, J. (2023). *Designing Interfaces for Riders*. Journal of Transport UX.
- Smith, K. (2022). *Smart Navigation in Motion*. Mobility Review.
- Scribbr. (2023). APA-stijl. https://www.scribbr.nl/apa-stijl

---

## Bijlagen
- Vragenlijstresultaten
- Literatuurstudie Wave 1
- Interviewprotocol en raport Wave 2 & 3
- Persona: “Thomas – de weekendrijder”
- Design requirements

