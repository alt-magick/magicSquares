# Magic Squares

Create a magic squares of any size, and save it to a log file.   
Complete documentation can be found in the pdf.  
  
I ported this to windows with modern C++ and corrected the format of  
the matrix. This is some powerful new magic based on ancient sacred   
astrological mathmatics.  

Wikipedia has a good article that I paraphrased below:  
https://en.wikipedia.org/wiki/Magic_square  

"Magic squares of order 3 through 9, assigned to the seven planets,  
and described as means to attract the influence of planets and their  
angels (or demons) during magical practices, can be found in several  
manuscripts all around Europe starting at least since the 15th  
century. Among the best known, was the Liber de Angelis, a magical  
handbook written around 1440. The text of the Liber de Angelis is very  
close to that of De septem quadraturis planetarum seu quadrati magici,  
another handbook of planetary image magic contained in the Codex 793  
of the Biblioteka Jagiellońska. The magical operations involve  
engraving the appropriate square on a plate made with the metal  
assigned to the corresponding planet, as well as performing a variety  
of rituals.  
  
In about 1510 Heinrich Cornelius Agrippa wrote De Occulta Philosophia,  
drawing on the Hermetic and magical works of Marsilio Ficino and Pico  
della Mirandola. In its 1531 edition, he expounded on the magical  
virtues of the seven magical squares of orders 3 to 9, each associated  
with one of the astrological planets, much in the same way as the older  
texts did. This book was very influential throughout Europe. Agrippa  
published his famous three volume book De occulta philosophia in 1531,  
where he devoted Chapter 22 of Book II to the planetary squares. The  
tradition of planetary squares was continued into the 17th century by  
Athanasius Kircher in Oedipi Aegyptici (1653). In Germany, mathematical   
treaties concerning magic squares were written in 1544 by Michael Stifel  
in Arithmetica Integra, and Adam Riese, who rediscovered the squares  
published by Agrippa."  
  
  
These magic squares can be generated on electric circuitry inside of  
computers. I have adapted the old works of Agrippa into my modern  
handling. All 12 signs of the zodiac and modern planets are included in  
my system here. The program I wrote allows you to generate any magic  
square, not just the ones below.  Every time you press enter it will  
generate one of these squares, and you also have the option to switch  
to other magic squares.  
   
  
This is the basic system:  
  
  
Capricorn / Saturn:  
===================  
 
 2&nbsp;  7&nbsp;  6  
 9&nbsp;  5&nbsp;  1  
 4&nbsp;  3&nbsp;  8  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;15  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;45  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 x 3  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Archangels  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Gabriel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Developing / Shapeshifting  
  
   
Sagitarius / Jupiter:  
=====================  
  
 16&nbsp;  02&nbsp;  03&nbsp;  13  
 05&nbsp;  11&nbsp;  10&nbsp;  08  
 09&nbsp;  07&nbsp;  06&nbsp;  12  
 04&nbsp;  14&nbsp;  15&nbsp;  01  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;34  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;136  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 x 4  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Principalities  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Zadkiel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Direction / Teleportation  
  
  
Aries / Mars:  
=============  
  
 09&nbsp;  03&nbsp;  22&nbsp;  16&nbsp;  15  
 02&nbsp;  21&nbsp;  20&nbsp;  14&nbsp;  08  
 25&nbsp;  19&nbsp;  13&nbsp;  07&nbsp;  01  
 18&nbsp;  1&nbsp;2  06&nbsp;  05&nbsp;  24  
 11&nbsp;  10&nbsp;  04&nbsp;  23&nbsp;  17  
 
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;65  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;325  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 x 5  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Virtues  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Jophiel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Energy / Telekinesis  
  
  
Leo / Sun:  
==========  
  
 35&nbsp;  01&nbsp;  06&nbsp;  26&nbsp;  19&nbsp;  24  
 03&nbsp;  32&nbsp;  07&nbsp;  21&nbsp;  23&nbsp;  25  
 31&nbsp;  09&nbsp;  02&nbsp;  22&nbsp;  27&nbsp;  20  
 08&nbsp;  28&nbsp;  33&nbsp;  17&nbsp;  10&nbsp;  15  
 30&nbsp;  05&nbsp;  34&nbsp;  12&nbsp;  14&nbsp;  16  
 04&nbsp;  36&nbsp;  29&nbsp;  13&nbsp;  18&nbsp;  11  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;111  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;666  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6 x 6  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Seraphim  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Uriel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Attraction / Creation    
  
  
Taurus / Venus:  
===============  
  
 20&nbsp;  12&nbsp;  04&nbsp;  45&nbsp;  37&nbsp;  29&nbsp;  28  
 11&nbsp;  03&nbsp;  44&nbsp;  36&nbsp;  35&nbsp;  27&nbsp;  19  
 02&nbsp;  43&nbsp;  42&nbsp;  34&nbsp;  26&nbsp;  18&nbsp;  10  
 49&nbsp;  41&nbsp;  33&nbsp;  25&nbsp;  17&nbsp;  09&nbsp;  01  
 40&nbsp;  32&nbsp;  24&nbsp;  16&nbsp;  08&nbsp;  07&nbsp;  48  
 31&nbsp;  23&nbsp;  15&nbsp;  14&nbsp;  06&nbsp;  47&nbsp;  39  
 22&nbsp;  21&nbsp;  13&nbsp;  05&nbsp;  46&nbsp;  38&nbsp;  30  
 
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;175  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1225  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7 x 7  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Dominions  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Ariel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Charisma / Hypnotism  
 
  
Gemini / Mercury:  
=================  
  
 64&nbsp;  63&nbsp;  03&nbsp;  04&nbsp;  05&nbsp;  06&nbsp;  58&nbsp;  57  
 56&nbsp;  55&nbsp;  11&nbsp;  12&nbsp;  13&nbsp;  14&nbsp;  50&nbsp;  49  
 17&nbsp;  18&nbsp;  46&nbsp;  45&nbsp;  44&nbsp;  43&nbsp;  23&nbsp;  24  
 25&nbsp;  26&nbsp;  38&nbsp;  37&nbsp;  36&nbsp;  35&nbsp;  31&nbsp;  32  
 33&nbsp;  34&nbsp;  30&nbsp;  29&nbsp;  28&nbsp;  27&nbsp;  39&nbsp;  40  
 41&nbsp;  42&nbsp;  22&nbsp;  21&nbsp;  20&nbsp;  19&nbsp;  47&nbsp;  48  
 16&nbsp;  15&nbsp;  51&nbsp;  52&nbsp;  53&nbsp;  54&nbsp;  10&nbsp;  09  
 08&nbsp;  07&nbsp;  59&nbsp;  60&nbsp;  61&nbsp;  62&nbsp;  02&nbsp;  01  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;260  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2080  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8 x 8  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Thrones  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Raphael  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Wisdom / Esp    
  
  
Cancer / Moon:  
==============  
  
 35&nbsp;  25&nbsp;  15&nbsp;  05&nbsp;  76&nbsp;  66&nbsp;  56&nbsp;  46&nbsp;  45  
 24&nbsp;  14&nbsp;  04&nbsp;  75&nbsp;  65&nbsp;  55&nbsp;  54&nbsp;  44&nbsp;  34  
 13&nbsp;  03&nbsp;  74&nbsp;  64&nbsp;  63&nbsp;  53&nbsp;  43&nbsp;  33&nbsp;  23  
 02&nbsp;  73&nbsp;  72&nbsp;  62&nbsp;  52&nbsp;  42&nbsp;  32&nbsp;  22&nbsp;  12  
 81&nbsp;  71&nbsp;  61&nbsp;  51&nbsp;  41&nbsp;  31&nbsp;  21&nbsp;  11&nbsp;  01  
 70&nbsp;  60&nbsp;  50&nbsp;  40&nbsp;  30&nbsp;  20&nbsp;  10&nbsp;  09&nbsp;  80  
 59&nbsp;  49&nbsp;  39&nbsp;  29&nbsp;  19&nbsp;  18&nbsp;  08&nbsp;  79&nbsp;  69  
 48&nbsp;  38&nbsp;  28&nbsp;  27&nbsp;  17&nbsp;  07&nbsp;  78&nbsp;  68&nbsp;  58  
 37&nbsp;  36&nbsp;  26&nbsp;  16&nbsp;  06&nbsp;  77&nbsp;  67&nbsp;  57&nbsp;  47  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;369  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3321  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9 x 9  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Cherubim  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Raziel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Stealth / Invisibility   
  
  
Virgo / Earth:  
==============  
  
 092&nbsp;  099&nbsp;  001&nbsp;  008&nbsp;  015&nbsp;  067&nbsp;  074&nbsp;  051&nbsp;  058&nbsp;  040  
 098&nbsp;  080&nbsp;  007&nbsp;  014&nbsp;  016&nbsp;  073&nbsp;  055&nbsp;  057&nbsp;  064&nbsp;  041  
 004&nbsp;  081&nbsp;  088&nbsp;  020&nbsp;  022&nbsp;  054&nbsp;  056&nbsp;  063&nbsp;  070&nbsp;  047  
 085&nbsp;  087&nbsp;  019&nbsp;  021&nbsp;  003&nbsp;  060&nbsp;  062&nbsp;  069&nbsp;  071&nbsp;  028  
 086&nbsp;  093&nbsp;  025&nbsp;  002&nbsp;  009&nbsp;  061&nbsp;  068&nbsp;  075&nbsp;  052&nbsp;  034  
 017&nbsp;  024&nbsp;  076&nbsp;  083&nbsp;  090&nbsp;  042&nbsp;  049&nbsp;  026&nbsp;  033&nbsp;  065  
 023&nbsp;  005&nbsp;  082&nbsp;  089&nbsp;  091&nbsp;  048&nbsp;  030&nbsp;  032&nbsp;  039&nbsp;  066  
 079&nbsp;  006&nbsp;  013&nbsp;  095&nbsp;  097&nbsp;  029&nbsp;  031&nbsp;  038&nbsp;  045&nbsp;  072  
 010&nbsp;  012&nbsp;  094&nbsp;  096&nbsp;  078&nbsp;  035&nbsp;  037&nbsp;  044&nbsp;  046&nbsp;  053  
 011&nbsp;  018&nbsp;  100&nbsp;  077&nbsp;  084&nbsp;  036&nbsp;  043&nbsp;  050&nbsp;  027&nbsp;  059  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;505  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5050  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10 x 10  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Powers  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Michael  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Escape / Intangibility    
  
  
Aquarius / Uranus:  
==================  
  
 054&nbsp;  042&nbsp;  030&nbsp;  018&nbsp;  006&nbsp;  115&nbsp;  103&nbsp;  091&nbsp;  079&nbsp;  067&nbsp;  066  
 041&nbsp;  029&nbsp;  017&nbsp;  005&nbsp;  114&nbsp;  102&nbsp;  090&nbsp;  078&nbsp;  077&nbsp;  065&nbsp;  053  
 028&nbsp;  016&nbsp;  004&nbsp;  113&nbsp;  101&nbsp;  089&nbsp;  088&nbsp;  076&nbsp;  064&nbsp;  052&nbsp;  040  
 015&nbsp;  003&nbsp;  112&nbsp;  100&nbsp;  099&nbsp;  087&nbsp;  075&nbsp;  063&nbsp;  051&nbsp;  039&nbsp;  027  
 002&nbsp;  111&nbsp;  110&nbsp;  098&nbsp;  086&nbsp;  074&nbsp;  062&nbsp;  050&nbsp;  038&nbsp;  026&nbsp;  014  
 121&nbsp;  109&nbsp;  097&nbsp;  085&nbsp;  073&nbsp;  061&nbsp;  049&nbsp;  037&nbsp;  025&nbsp;  013&nbsp;  001  
 108&nbsp;  096&nbsp;  084&nbsp;  072&nbsp;  060&nbsp;  048&nbsp;  036&nbsp;  024&nbsp;  012&nbsp;  011&nbsp;  120  
 095&nbsp;  083&nbsp;  071&nbsp;  059&nbsp;  047&nbsp;  035&nbsp;  023&nbsp;  022&nbsp;  010&nbsp;  119&nbsp;  107  
 082&nbsp;  070&nbsp;  058&nbsp;  046&nbsp;  034&nbsp;  033&nbsp;  021&nbsp;  009&nbsp;  118&nbsp;  106&nbsp;  094  
 069&nbsp;  057&nbsp;  045&nbsp;  044&nbsp;  032&nbsp;  020&nbsp;  008&nbsp;  117&nbsp;  105&nbsp;  093&nbsp;  081  
 056&nbsp;  055&nbsp;  043&nbsp;  031&nbsp;  019&nbsp;  007&nbsp;  116&nbsp;  104&nbsp;  092&nbsp;  080&nbsp;  068  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;671  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7381  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11 x 11  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Angels  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Barachiel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Renewal / Healing   
  
  
Pisces / Neptune:  
=================  
  
 144&nbsp;  143&nbsp;  142&nbsp;  004&nbsp;  005&nbsp;  006&nbsp;  007&nbsp;  008&nbsp;  009&nbsp;  135&nbsp;  134&nbsp;  133  
 132&nbsp;  131&nbsp;  130&nbsp;  016&nbsp;  017&nbsp;  018&nbsp;  019&nbsp;  020&nbsp;  021&nbsp;  123&nbsp;  122&nbsp;  121  
 120&nbsp;  119&nbsp;  118&nbsp;  028&nbsp;  029&nbsp;  030&nbsp;  031&nbsp;  032&nbsp;  033&nbsp;  111&nbsp;  110&nbsp;  109  
 037&nbsp;  038&nbsp;  039&nbsp;  105&nbsp;  104&nbsp;  103&nbsp;  102&nbsp;  101&nbsp;  100&nbsp;  046&nbsp;  047&nbsp;  048  
 049&nbsp;  050&nbsp;  051&nbsp;  093&nbsp;  092&nbsp;  091&nbsp;  090&nbsp;  089&nbsp;  088&nbsp;  058&nbsp;  059&nbsp;  060  
 061&nbsp;  062&nbsp;  063&nbsp;  081&nbsp;  080&nbsp;  079&nbsp;  078&nbsp;  077&nbsp;  076&nbsp;  070&nbsp;  071&nbsp;  072  
 073&nbsp;  074&nbsp;  075&nbsp;  069&nbsp;  068&nbsp;  067&nbsp;  066&nbsp;  065&nbsp;  064&nbsp;  082&nbsp;  083&nbsp;  084  
 085&nbsp;  086&nbsp;  087&nbsp;  057&nbsp;  056&nbsp;  055&nbsp;  054&nbsp;  053&nbsp;  052&nbsp;  094&nbsp;  095&nbsp;  096  
 097&nbsp;  098&nbsp;  099&nbsp;  045&nbsp;  044&nbsp;  043&nbsp;  042&nbsp;  041&nbsp;  040&nbsp;  106&nbsp;  107&nbsp;  108  
 036&nbsp;  035&nbsp;  034&nbsp;  112&nbsp;  113&nbsp;  114&nbsp;  115&nbsp;  116&nbsp;  117&nbsp;  027&nbsp;  026&nbsp;  025  
 024&nbsp;  023&nbsp;  022&nbsp;  124&nbsp;  125&nbsp;  126&nbsp;  127&nbsp;  128&nbsp;  129&nbsp;  015&nbsp;  014&nbsp;  013  
 012&nbsp;  011&nbsp;  010&nbsp;  136&nbsp;  137&nbsp;  138&nbsp;  139&nbsp;  140&nbsp;  141&nbsp;  003&nbsp;  002&nbsp;  001  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;870  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10440    
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;12 x 12  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Saints  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Jeremiel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Empathy / Telepathy    
  
  
Scorpio / Pluto:  
================  
  
 077&nbsp;  063&nbsp;  049&nbsp;  035&nbsp;  021&nbsp;  007&nbsp;  162&nbsp;  148&nbsp;  134&nbsp;  120&nbsp;  106&nbsp;  092&nbsp;  091  
 062&nbsp;  048&nbsp;  034&nbsp;  020&nbsp;  006&nbsp;  161&nbsp;  147&nbsp;  133&nbsp;  119&nbsp;  105&nbsp;  104&nbsp;  090&nbsp;  076  
 047&nbsp;  033&nbsp;  019&nbsp;  005&nbsp;  160&nbsp;  146&nbsp;  132&nbsp;  118&nbsp;  117&nbsp;  103&nbsp;  089&nbsp;  075&nbsp;  061  
 032&nbsp;  018&nbsp;  004&nbsp;  159&nbsp;  145&nbsp;  131&nbsp;  130&nbsp;  116&nbsp;  102&nbsp;  088&nbsp;  074&nbsp;  060&nbsp;  046  
 017&nbsp;  003&nbsp;  158&nbsp;  144&nbsp;  143&nbsp;  129&nbsp;  115&nbsp;  101&nbsp;  087&nbsp;  073&nbsp;  059&nbsp;  045&nbsp;  031  
 002&nbsp;  157&nbsp;  156&nbsp;  142&nbsp;  128&nbsp;  114&nbsp;  100&nbsp;  086&nbsp;  072&nbsp;  058&nbsp;  044&nbsp;  030&nbsp;  016  
 169&nbsp;  155&nbsp;  141&nbsp;  127&nbsp;  113&nbsp;  099&nbsp;  085&nbsp;  071&nbsp;  057&nbsp;  043&nbsp;  029&nbsp;  015&nbsp;  001  
 154&nbsp;  140&nbsp;  126&nbsp;  112&nbsp;  098&nbsp;  084&nbsp;  070&nbsp;  056&nbsp;  042&nbsp;  028&nbsp;  014&nbsp;  013&nbsp;  168  
 139&nbsp;  125&nbsp;  111&nbsp;  097&nbsp;  083&nbsp;  069&nbsp;  055&nbsp;  041&nbsp;  027&nbsp;  026&nbsp;  012&nbsp;  167&nbsp;  153  
 124&nbsp;  110&nbsp;  096&nbsp;  082&nbsp;  068&nbsp;  054&nbsp;  040&nbsp;  039&nbsp;  025&nbsp;  011&nbsp;  166&nbsp;  152&nbsp;  138  
 109&nbsp;  095&nbsp;  081&nbsp;  067&nbsp;  053&nbsp;  052&nbsp;  038&nbsp;  024&nbsp;  010&nbsp;  165&nbsp;  151&nbsp;  137&nbsp;  123  
 094&nbsp;  080&nbsp;  066&nbsp;  065&nbsp;  051&nbsp;  037&nbsp;  023&nbsp;  009&nbsp;  164&nbsp;  150&nbsp;  136&nbsp;  122&nbsp;  108  
 079&nbsp;  078&nbsp;  064&nbsp;  050&nbsp;  036&nbsp;  022&nbsp;  008&nbsp;  163&nbsp;  149&nbsp;  135&nbsp;  121&nbsp;  107&nbsp;  093  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1105  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;14365  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;13 x 13  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Mankind  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Selephiel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Curse / Destroy    
  
  
Libra / Milky Way:  
==================  
  
 177&nbsp;  186&nbsp;  195&nbsp;  001&nbsp;  010&nbsp;  019&nbsp;  028&nbsp;  128&nbsp;  137&nbsp;  146&nbsp;  099&nbsp;  108&nbsp;  068&nbsp;  077  
 185&nbsp;  194&nbsp;  154&nbsp;  009&nbsp;  018&nbsp;  027&nbsp;  029&nbsp;  136&nbsp;  145&nbsp;  105&nbsp;  107&nbsp;  116&nbsp;  076&nbsp;  078  
 193&nbsp;  153&nbsp;  155&nbsp;  017&nbsp;  026&nbsp;  035&nbsp;  037&nbsp;  144&nbsp;  104&nbsp;  106&nbsp;  115&nbsp;  124&nbsp;  084&nbsp;  086  
 005&nbsp;  161&nbsp;  163&nbsp;  172&nbsp;  034&nbsp;  036&nbsp;  045&nbsp;  103&nbsp;  112&nbsp;  114&nbsp;  123&nbsp;  132&nbsp;  085&nbsp;  094  
 160&nbsp;  162&nbsp;  171&nbsp;  033&nbsp;  042&nbsp;  044&nbsp;  004&nbsp;  111&nbsp;  113&nbsp;  122&nbsp;  131&nbsp;  140&nbsp;  093&nbsp;  053  
 168&nbsp;  170&nbsp;  179&nbsp;  041&nbsp;  043&nbsp;  003&nbsp;  012&nbsp;  119&nbsp;  121&nbsp;  130&nbsp;  139&nbsp;  141&nbsp;  052&nbsp;  061  
 169&nbsp;  178&nbsp;  187&nbsp;  049&nbsp;  002&nbsp;  011&nbsp;  020&nbsp;  120&nbsp;  129&nbsp;  138&nbsp;  147&nbsp;  100&nbsp;  060&nbsp;  069  
 030&nbsp;  039&nbsp;  048&nbsp;  148&nbsp;  157&nbsp;  166&nbsp;  175&nbsp;  079&nbsp;  088&nbsp;  097&nbsp;  050&nbsp;  059&nbsp;  117&nbsp;  126  
 038&nbsp;  047&nbsp;  007&nbsp;  156&nbsp;  165&nbsp;  174&nbsp;  176&nbsp;  087&nbsp;  096&nbsp;  056&nbsp;  058&nbsp;  067&nbsp;  125&nbsp;  127  
 046&nbsp;  006&nbsp;  008&nbsp;  164&nbsp;  173&nbsp;  182&nbsp;  184&nbsp;  095&nbsp;  055&nbsp;  057&nbsp;  066&nbsp;  075&nbsp;  133&nbsp;  135  
 152&nbsp;  014&nbsp;  016&nbsp;  025&nbsp;  181&nbsp;  183&nbsp;  192&nbsp;  054&nbsp;  063&nbsp;  065&nbsp;  074&nbsp;  083&nbsp;  134&nbsp;  143  
 013&nbsp;  015&nbsp;  024&nbsp;  180&nbsp;  189&nbsp;  191&nbsp;  151&nbsp;  062&nbsp;  064&nbsp;  073&nbsp;  082&nbsp;  091&nbsp;  142&nbsp;  102  
 021&nbsp;  023&nbsp;  032&nbsp;  188&nbsp;  190&nbsp;  150&nbsp;  159&nbsp;  070&nbsp;  072&nbsp;  081&nbsp;  090&nbsp;  092&nbsp;  101&nbsp;  110  
 022&nbsp;  031&nbsp;  040&nbsp;  196&nbsp;  149&nbsp;  158&nbsp;  167&nbsp;  071&nbsp;  080&nbsp;  089&nbsp;  098&nbsp;  051&nbsp;  109&nbsp;  118  
  
 Ro&nbsp;w&nbs&nbsp;p;s T&nbsp;ot&nb&nbsp;sp;al&nbsp;:	1&n&nbsp;bsp;3&nbsp;79  &nbsp;
 Mat&nbsp;&nbsp&nbsp;;rix &nbsp;S&nbs&nbsp;p;um:&nbsp;	1&nb&nbsp;sp;93&nbsp;06 &n&nbsp;bsp; &nbsp;
 Mat&nbsp;rix:	&nbsp;	  14&nbsp; x 14&nbsp;  
 Cho&nbsp;&nbsp&nbsp;;ir: &nbsp; &nbs&nbsp;p;   &nbsp;  &nb&nbsp;sp;Go&nbsp;d  &n&nbsp;bsp;
&nbsp; Ang&&nbsp;nbsp;&nbsp;el:  &nbsp;&nbsp&nbsp;;     &nbsp;Elohi&nbsp;m  
 &nb&nbsp;sp;Po&nbsp;wer&n&nbsp;bsp;:&nbsp;		  &&nbsp;nbsp;&nbsp;  Vis&nbsp;&nbsp&nbsp;;ions&nbsp; &nbs&nbsp;p;/ R&nbsp;aptur&nbsp;e  
 &nbsp; 
&nb&nbsp;&nbsp&nbsp;;sp;&n&nbsp;bsp;&&nbsp;nbsp;&nbsp;&nbsp&nbsp;;&nbs&nbsp;p;&nb&nbsp;sp;&n&nbsp;bsp;&&nbsp;nbsp;&nbsp;&nbsp&nbsp;;&nbs&nbsp;p;&nb&nbsp;sp;&nbsp;&nbsp;
