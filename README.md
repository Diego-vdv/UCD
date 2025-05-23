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

Motorrijders in groep communiceren doorgaans via handgebaren of intercomsystemen. Deze methodes zijn echter niet altijd betrouwbaar, zeker niet in omstandigheden waar snelle respons, duidelijkheid of emotionele context vereist zijn. Het ontbreken van effectieve communicatie leidt regelmatig tot frustraties, onveiligheid en desorganisatie binnen de groep.

Daarbij is er momenteel geen systeem dat emotionele signalen detecteert en daar actief op inspeelt. Stress, vermoeidheid of onzekerheid blijven onopgemerkt, met alle gevolgen van dien voor de veiligheid en rijervaring. Dit probleem wordt versterkt door de context van het motorrijden zelf: beperkte handvrijheid, hoge snelheden en visuele afleiding beperken de interactiemogelijkheden.

RevUp biedt hierop een antwoord via een combinatie van tactiele input (stuurknoppen), visuele en auditieve feedback, en optionele emotiedetectie via biofeedbacksensoren. Het systeem ondersteunt niet alleen communicatie over praktische zaken (bv. tanken, pauzes, gevaren), maar maakt het ook mogelijk om onzichtbare signalen zoals stress te detecteren en hier gepast op te reageren.

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

Tijdens groepsritten maken motorrijders doorgaans gebruik van intercomsystemen, handgebaren en vooraf gedeelde GPX-routes om met elkaar te communiceren. Deze strategieën blijken in de praktijk niet altijd toereikend: miscommunicatie ontstaat wanneer koppelingen uitvallen of bepaalde gebaren niet universeel gekend zijn binnen de groep. Uit het gebruikersonderzoek blijkt dat visuele output, zoals lichtsignalen, als nuttig wordt ervaren, hoewel de leesbaarheid hiervan sterk afneemt bij direct zonlicht. Schermen worden daarentegen als betrouwbaar en multifunctioneel beschouwd om route-informatie of waarschuwingen over te brengen. Auditieve signalen, zoals meldingen via intercom, zijn eveneens bruikbaar mits compatibele hardware beschikbaar is. Trillingsfeedback werd unaniem als ineffectief beschouwd, voornamelijk door de interferentie met trillingen van de motor zelf.

Wat betreft invoermethoden werd vastgesteld dat touchscreens in deze context suboptimaal zijn: ze bieden onvoldoende tactiele feedback en vereisen visuele aandacht, wat afleidend en gevaarlijk is tijdens het rijden. Een potentieel alternatief zoals een gesture-detecterende glove werd positief geëvalueerd op vlak van gebruiksintentie, maar blijkt voorlopig nog technisch complex en onbetrouwbaar in realistische rijomstandigheden.


### Conclusies & implicaties

- Keep it simple: fysieke knoppen en beperkte outputtypes hebben voorkeur
- Emotieherkenning moet optioneel zijn en niet dominant
- Route moet voor iedereen zichtbaar zijn of gestuurd kunnen worden
- Geef de gebruiker een optie om een directe route naar de groep te tonen als hij verdwaald geraakt
- Maak het mogelijk om te koppelen met bestaande com systemen voor auditieve feedback of meldingen
- Motorrijders willen autonomie behouden, maar ook comfort en duidelijkheid

---

## Definition

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

De resultaten van het gebruikersonderzoek en de bijhorende prototype-evaluaties tonen aan dat fysieke knoppen een duidelijke voorkeur genieten ten opzichte van touchscreens, voornamelijk wegens hun intuïtieve karakter, de minimale visuele belasting tijdens het rijden en hun geschiktheid voor gebruik met motorhandschoenen. Visuele feedback scoort het hoogst wanneer die gebaseerd is op duidelijke, eenduidige symbolen in combinatie met kleurgebruik. Deze combinatie leidt tot snellere herkenning en een betere informatieoverdracht dan tekstuele of auditieve meldingen alleen.

Gebruikers gaven tevens aan hun autonomie te willen behouden; notificaties moeten niet dominant aanwezig zijn, maar eerder subtiel en informatief. In het kader van groepscoördinatie werd de mogelijkheid om de route van de groepsleider te kunnen volgen als bijzonder nuttig ervaren. Dit draagt bij aan een gevoel van veiligheid en verbondenheid binnen de groep.

Tijdens de interviews werd herhaaldelijk twijfel geuit over het gebruik van sensoren voor emotieherkenning. Gebruikers gaven aan weinig vertrouwen te hebben in de betrouwbaarheid van zulke systemen, vooral wat betreft de interpretatie van stress- of emotionele signalen in een realistische rijcontext. Op basis van deze terugkoppeling werd besloten om af te zien van automatische sensordetectie. In plaats daarvan wordt er gekozen voor manuele inputopties, waarbij de rijder zelf aangeeft wanneer er nood is aan een pauze of andere actie. Dit garandeert meer controle, transparantie en vertrouwen in het systeem.

### Conclusies en implicaties (design requirements en beslissingen)
  
- Knoppen moeten duidelijk voelbaar zijn, met klikfeedback en geschikt voor gebruik met motorhandschoenen.
- Ze worden het best geplaatst aan de linkerkant van het stuur voor gemakkelijke bediening.
- De interface moet eenvoudige symbolen en contrastrijke kleuren gebruiken voor leesbaarheid.
- Emotiedetectie via sensoren is uitgesloten; het systeem gebruikt enkel manuele input.
- Compatibiliteit met bestaande intercomsystemen is vereist voor auditieve meldingen.


---

## Develop 1: Vormstudie inputknoppen

### Doelstellingen

Het doel van deze fase was het analyseren en vergelijken van verschillende fysieke inputknoppen met de focus op gebruiksgemak tijdens het motorrijden.

### Materiaal en methoden

Vier knoptypes werden getest op een stuurmock-up. Respondenten moesten de knoppen beoordelen op:
- Vorm en herkenbaarheid
- Bedienbaarheid met handschoenen
- Haptische feedback

Interviews en observaties vormden de kern van de analyse.

### Resultaten

- Rechthoekiege knoppen werden het snelst herkend.
- Een voelbare klik werd als essentieel ervaren.
- Kleine of vlakke knoppen zijn moeilijk te bedienen met handschoenen.
- De knoppen moesten ondermekaar geplaatst worden

> [!Note]
> Hier afbeelding toevoegen van ranking resultaat

### Conclusies en implicaties (design requirements en beslissingen)

- Vorm: vierkant/rechthoekig met klik- of veerfeedback
- Plaatsing: duimhoogte, mogelijk uitbreidbaar naar tank
- Volgende stap: feedback en resultaten samen gieten tot eind vorm voor develop 2

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

