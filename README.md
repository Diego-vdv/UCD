# RevUp


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

- Google Form vragenlijst (via Reddit)  (N = 59)
- Literatuurstudie Wave 1 (N = 4)
- Persona-ontwikkeling
- Online whiteboard Miro

### Resultaten

Tijdens groepsritten maken motorrijders doorgaans gebruik van intercomsystemen, handgebaren en vooraf gedeelde GPS-routes om met elkaar te communiceren. Deze strategieën blijken in de praktijk niet altijd toereikend: miscommunicatie ontstaat wanneer koppelingen uitvallen of bepaalde gebaren niet universeel gekend zijn binnen de groep. Uit het gebruikersonderzoek blijkt dat visuele output, zoals lichtsignalen, als nuttig wordt ervaren, hoewel de leesbaarheid hiervan sterk afneemt bij direct zonlicht. Schermen worden daarentegen als betrouwbaar en multifunctioneel beschouwd om route-informatie of waarschuwingen over te brengen. Auditieve signalen, zoals meldingen via intercom, zijn eveneens bruikbaar mits compatibele hardware beschikbaar is. Trillingsfeedback werd unaniem als ineffectief beschouwd, voornamelijk door de interferentie met trillingen van de motor zelf.

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

- Analyse van enquête en interviewresultaten (Wave 2 en 3) (N = 8)
- Persona-ontwikkeling en scenariobouw
- Synthese van fysieke en cognitieve voorkeuren voor productinteractie
- Vertaling naar concrete design requirements

### Resultaten

De resultaten van het gebruikersonderzoek en de bijhorende prototype-evaluaties tonen aan dat fysieke knoppen een duidelijke voorkeur genieten ten opzichte van touchscreens, voornamelijk wegens hun intuïtieve karakter, de minimale visuele belasting tijdens het rijden en hun geschiktheid voor gebruik met motorhandschoenen. Visuele feedback scoort het hoogst wanneer die gebaseerd is op duidelijke, eenduidige symbolen in combinatie met kleurgebruik. Deze combinatie leidt tot snellere herkenning en een betere informatieoverdracht dan tekstuele of auditieve meldingen alleen.

Gebruikers gaven tevens aan hun autonomie te willen behouden; notificaties moeten niet dominant aanwezig zijn, maar eerder subtiel en informatief. In het kader van groepscoördinatie werd de mogelijkheid om de route van de groepsleider te kunnen volgen als bijzonder nuttig ervaren. Dit draagt bij aan een gevoel van veiligheid en verbondenheid binnen de groep.

Tijdens de interviews werd herhaaldelijk twijfel geuit over het gebruik van sensoren voor emotieherkenning. Gebruikers gaven aan weinig vertrouwen te hebben in de betrouwbaarheid van zulke systemen, vooral wat betreft de interpretatie van stress- of emotionele signalen in een realistische rijcontext. Op basis van deze terugkoppeling werd besloten om af te zien van automatische sensordetectie. In plaats daarvan wordt er gekozen voor manuele inputopties, waarbij de rijder zelf aangeeft wanneer er nood is aan een pauze of andere actie. Dit garandeert meer controle, transparantie en vertrouwen in het systeem.

### Conclusies en implicaties (design requirements en beslissingen)
  
- Knoppen moeten duidelijk voelbaar zijn, met klikfeedback en geschikt voor gebruik met motorhandschoenen.
- Ze worden het best geplaatst aan de rechterkant van het stuur voor gemakkelijke bediening.
- De interface moet eenvoudige symbolen en contrastrijke kleuren gebruiken voor leesbaarheid.
- Emotiedetectie via sensoren is uitgesloten; het systeem gebruikt enkel manuele input.
- Compatibiliteit met bestaande intercomsystemen is vereist voor auditieve meldingen.


---

## Develop 1: Vormstudie inputknoppen & Interfacefeedback (N = 4)

### Doelstellingen

Het doel van deze fase was het analyseren en vergelijken van verschillende fysieke inputknoppen met de focus op gebruiksgemak tijdens het motorrijden, en het vergelijken van verschillende outputmogelijkheden van meldingen met de focus op cognitieve belasting.

### Materiaal en methoden

#### Testopzet

Vijf verschillende knoptypes werden op een stuurmock-up gepresenteerd. Respondenten evalueerden deze op:

- Vorm en grootte
- Gebruiksgemak
- Positionering ten opzichte van elkaar

Na deze beoordeling werd een point-of-view video van een motorrijder getoond, waarbij de respondent een helm opzette om een realistische rijsituatie te simuleren. Tijdens deze simulatie werden vier outputprototypes onder het scherm geplaatst:

- LED’s
- Zwart-wit symbolen
- Gekleurde symbolen
- Woorden gekoppeld aan kleuren

Respondenten gaven hardop aan wanneer ze een melding zagen, wat ze dachten dat deze betekende en hoe duidelijk die werd ervaren. De reactietijd werd geregistreerd, gevolgd door een korte reeks evaluatievragen over voorkeur en interpretatie.

De testopzet werd geoptimaliseerd voor zowel fysieke als cognitieve evaluatie en biedt een solide basis voor verdere iteratie van input/outputdesign binnen de RevUp-interface.

#### Prototypes

*Knoppen:*
<p align=center>  
  <img src="fotos/dev1_knoppen_prototype.png") alt=testlocatie width=75% />
</p> 

*Output:*
<p align=center>  
  <img src="fotos/dev1_output_prototype.png") alt=testlocatie width=75% />
</p> 

### Resultaten

#### Observaties knopvoorkeuren

Rechthoekige knoppen werden door de meeste respondenten het snelst herkend, dankzij hun duidelijke vorm. Een voelbare klik werd als essentieel beschouwd voor betrouwbare feedback tijdens het rijden. Kleine of vlakke knoppen bleken minder geschikt, vooral in combinatie met motorhandschoenen. De voorkeur ging uit naar een verticale plaatsing van de knoppen, zodat de duimbeweging natuurlijk en intuïtief blijft.

<p align=center>  
  <img src="fotos/dev1_knoppen_results.png") alt=testlocatie width=75% />
</p> 

#### Observaties Output

LED's en gekleurde symbolen scoorden het best, maar elk om een andere reden. LED's kunnen feller en sterker een melding tonen dan symbolen op een scherm maar kunnen niet zo veel info geven zonder context, symbolen daarintegen vallen minder hard op maar zijn makkelijker om te begrijpen. Ook de kleur van de meldingen speelt een rol; bij LED's is groen licht moeilijker op te merken dan rood of geel licht, op een scherm is blauw licht wat moeilijker op te merken.

<p align=center>  
  <img src="fotos/dev1_output_results.png") alt=testlocatie width=75% />
</p> 

### Conclusies en implicaties (design requirements en beslissingen)

- Knopvorm: Vierkant/ rechthoekig, breed oppervlak, duidelijke feedback (klik/veer)
- Interface: Symbolen met vaste kleurcode, vermijd overbodige tekst, toevoegen van LED's om belangrijke meldingen rapper op te merken.
- Fysieke ergonomie: Knoppen boven elkaar uitlijnen om beweging en reach van de duim te volgen
- Cognitieve ergonomie: Beperk visuele input, vermijd dubbelzinnige signalen, geef de knoppen een eigen identiteit (kleur, textuur, …), vermijd een donkerblauwe kleur bij meldingen.

---

## Develop 2: Prototype-evaluatie (N=4)

### Doelstellingen (cfr. methodologie)

Valideren van het finale prototype op gebruiksvriendelijkheid, plaatsing, en intuïtieve interactie.

### Materiaal en methoden

- Wizard-of-Oz testing
- Interviews
- Plaatsingsoefening (knoppen en scherm)
- BERT-evaluatie uiterlijk en gebruik

*prototype:*
<p align=center>  
  <img src="fotos/dev2_prototype.png") alt=testlocatie width=50% />
</p> 

### Resultaten

<p align=center>  
  <img src="fotos/dev2_BERT_results.png") alt=testlocatie width=50% />
</p> 

### Conclusies en implicaties (design requirements en beslissingen)

- Plaatsing aan linkerstuurzijde is optimaal
- Knoppen zijn voldoende voelbaar, maar verbeterbaar in tactiele differentiatie
- Suggestie voor extra confirmatieknop of tijdsgebonden bevestiging
- Schermfeedback is duidelijk, maar meldingen mogen niet te veel de routevoorstelling belemmeren

---

## Conclusie

Het RevUp-systeem biedt een tastbare meerwaarde voor het verbeteren van communicatie en veiligheid tijdens groepsritten met de motor. Door gebruik te maken van fysieke stuurknoppen, duidelijke visuele feedback en compatibiliteit met bestaande intercomsystemen, wordt het voor rijders mogelijk om snel en intuïtief cruciale informatie met elkaar te delen. De bewuste keuze om emotieherkenning enkel manueel te integreren garandeert de autonomie en het vertrouwen van de gebruiker. Het project toont aan dat een mensgericht ontwerp, opgebouwd uit iteratief gebruikersonderzoek, kan leiden tot een systeem dat zowel technisch uitvoerbaar als gebruiksvriendelijk is. RevUp vormt daarmee een sterke basis voor verdere ontwikkeling en integratie van slimmere rijhulpsystemen binnen de context van motorgroepen.

- Tabel met de finale design requirements

---

## To Do
Doordat we een zeer kort designtraject afgelopen hebben zijn er dingen die we nog willen onderzoeken/ afwerken, de belangrijkste hiervan zijn:
- Uitwerken routebeschrijving en het short-cut systeem voor achterliggers
- Lay-out gps mototvriendelijk maken (mogelijkheid om vrienden te zien, ...)
- Uitwerken verbinding tussen RevIt's (gebruiksvriendelijkheid, technologie, ...)
- Uitwerken main body (scherm met leds in één body, elektronica, ...)
  
---

## Technische beschrijving
|Naam Component|Hoe te verkrijgen|
|----|---|
|GPS-module met visueel scherm of LED-feedback| [scherm](https://benl.rs-online.com/web/p/shields-for-arduino/2686967?matchtype=&pla-332297889548&gad_campaignid=21302633171) en [GPS](https://www.amazon.com.be/-/en/Aideepen-Position-Module-Antenna-Controller/dp/B08CZSL193/ref=asc_df_B08CZSL193?mcid=8d9b5cb1884e3ab5835972e6c94a0470&hvadid=712673940446&hvpos=&hvnetw=g&hvrand=6716657762156146757&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9195761&hvtargid=pla-967402262363&psc=1&language=en_GB)|
|Drukknoppen (input)| 3D Printen en [Kopen](https://www.hobbyelectronica.nl/product/tactile-drukknop-25-stuks-met-cap/?gad_campaignid=17423797364)|
|Bevestigingselementen (stuur)| 3D Printen|
|Communicatiemodule (voor koppeling met intercom)|...|


- Hiermee moet iemand die wil verderweren op je product genoeg hebben om dit na te bouwen.



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

