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
 
 2  7  6  
 9  5  1  
 4  3  8  
  
 Rows Total:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;15  
 Matrix Sum:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;45  
 Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 x 3  
 Choir:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Archangels  
 Angel:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Gabriel  
 Power:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Developing / Shapeshifting  
  
   
Sagitarius / Jupiter:  
=====================  
  
 16  02  03  13  
 05  11  10  08  
 09  07  06  12  
 04  14  15  01  
  
 Rows Total:	34  
 Matrix Sum:	136  
 Matrix:	  	4 x 4  
 Choir:       Principalities  
 Angel:       Zadkiel  
 Power:	    	Direction / Teleportation  
  
  
Aries / Mars:  
=============  
  
 09  03  22  16  15  
 02  21  20  14  08  
 25  19  13  07  01  
 18  12  06  05  24  
 11  10  04  23  17  
  
 Rows Total:	65  
 Matrix Sum:	325  
 Matrix:		  5 x 5 
 Choir:       Virtues  
 Angel:       Jophiel  
 Power:		    Energy / Telekinesis  
  
  
Leo / Sun:  
==========  
  
 35  01  06  26  19  24  
 03  32  07  21  23  25  
 31  09  02  22  27  20  
 08  28  33  17  10  15  
 30  05  34  12  14  16  
 04  36  29  13  18  11  
  
 Rows Total:	111  
 Matrix Sum:	666  
 Matrix:	  	6 x 6  
 Choir:       Seraphim  
 Angel:       Uriel  
 Power:	    	Attraction / Creation  
  
  
Taurus / Venus:  
===============  
  
 20  12  04  45  37  29  28  
 11  03  44  36  35  27  19  
 02  43  42  34  26  18  10  
 49  41  33  25  17  09  01  
 40  32  24  16  08  07  48  
 31  23  15  14  06  47  39  
 22  21  13  05  46  38  30  
  
 Rows Total:	175  
 Matrix Sum:	1225  
 Matrix:	  	7 x 7
 Choir:       Dominions
 Angel:       Ariel
 Power:	    	Charisma / Hypnotism  
  
  
Gemini / Mercury:  
=================  
  
 64  63  03  04  05  06  58  57  
 56  55  11  12  13  14  50  49  
 17  18  46  45  44  43  23  24  
 25  26  38  37  36  35  31  32  
 33  34  30  29  28  27  39  40  
 41  42  22  21  20  19  47  48  
 16  15  51  52  53  54  10  09  
 08  07  59  60  61  62  02  01  
  
 Rows Total:	260  
 Matrix Sum:	2080  
 Matrix:	  	8 x 8
 Choir:       Thrones  
 Angel:       Raphael  
 Power:		    Wisdom / ESP  
  
  
Cancer / Moon:  
==============  
  
 35  25  15  05  76  66  56  46  45  
 24  14  04  75  65  55  54  44  34  
 13  03  74  64  63  53  43  33  23  
 02  73  72  62  52  42  32  22  12  
 81  71  61  51  41  31  21  11  01  
 70  60  50  40  30  20  10  09  80  
 59  49  39  29  19  18  08  79  69  
 48  38  28  27  17  07  78  68  58  
 37  36  26  16  06  77  67  57  47  
  
 Rows Total:	369  
 Matrix Sum:	3321  
 Matrix:	  	9 x 9  
 Choir:       Cherubim  
 Angel:       Raziel  
 Power:		    Stealth / Invisibility  
  
  
Virgo / Earth:  
==============  
  
 092  099  001  008  015  067  074  051  058  040  
 098  080  007  014  016  073  055  057  064  041  
 004  081  088  020  022  054  056  063  070  047  
 085  087  019  021  003  060  062  069  071  028  
 086  093  025  002  009  061  068  075  052  034  
 017  024  076  083  090  042  049  026  033  065  
 023  005  082  089  091  048  030  032  039  066  
 079  006  013  095  097  029  031  038  045  072  
 010  012  094  096  078  035  037  044  046  053  
 011  018  100  077  084  036  043  050  027  059  
  
 Rows Total:	505  
 Matrix Sum:	5050  
 Matrix:	  	10 x 10  
 Choir: Powers  
 Angel: Michael  
 Power:	    	Escape / Intangibility  
  
  
Aquarius / Uranus:  
==================  
  
 054  042  030  018  006  115  103  091  079  067  066  
 041  029  017  005  114  102  090  078  077  065  053  
 028  016  004  113  101  089  088  076  064  052  040  
 015  003  112  100  099  087  075  063  051  039  027  
 002  111  110  098  086  074  062  050  038  026  014  
 121  109  097  085  073  061  049  037  025  013  001  
 108  096  084  072  060  048  036  024  012  011  120  
 095  083  071  059  047  035  023  022  010  119  107  
 082  070  058  046  034  033  021  009  118  106  094  
 069  057  045  044  032  020  008  117  105  093  081  
 056  055  043  031  019  007  116  104  092  080  068  
  
 Rows Total:	671  
 Matrix Sum:	7381  
 Matrix:		  11 x 11  
 Choir:       Angels  
 Angel:       Barachiel  
 Power:		    Renewal / Healing  
  
  
Pisces / Neptune:  
=================  
  
 144  143  142  004  005  006  007  008  009  135  134  133  
 132  131  130  016  017  018  019  020  021  123  122  121  
 120  119  118  028  029  030  031  032  033  111  110  109  
 037  038  039  105  104  103  102  101  100  046  047  048  
 049  050  051  093  092  091  090  089  088  058  059  060  
 061  062  063  081  080  079  078  077  076  070  071  072  
 073  074  075  069  068  067  066  065  064  082  083  084  
 085  086  087  057  056  055  054  053  052  094  095  096  
 097  098  099  045  044  043  042  041  040  106  107  108  
 036  035  034  112  113  114  115  116  117  027  026  025  
 024  023  022  124  125  126  127  128  129  015  014  013  
 012  011  010  136  137  138  139  140  141  003  002  001  
  
 Rows Total:	870  
 Matrix Sum:	10440  
 Matrix:		  12 x 12  
 Choir:       Saints  
 Angel:       Jeremiel  
 Power:		    Empathy / Telepathy  
  
  
Scorpio / Pluto:  
================  
  
 077  063  049  035  021  007  162  148  134  120  106  092  091  
 062  048  034  020  006  161  147  133  119  105  104  090  076  
 047  033  019  005  160  146  132  118  117  103  089  075  061  
 032  018  004  159  145  131  130  116  102  088  074  060  046  
 017  003  158  144  143  129  115  101  087  073  059  045  031  
 002  157  156  142  128  114  100  086  072  058  044  030  016  
 169  155  141  127  113  099  085  071  057  043  029  015  001  
 154  140  126  112  098  084  070  056  042  028  014  013  168  
 139  125  111  097  083  069  055  041  027  026  012  167  153  
 124  110  096  082  068  054  040  039  025  011  166  152  138  
 109  095  081  067  053  052  038  024  010  165  151  137  123  
 094  080  066  065  051  037  023  009  164  150  136  122  108  
 079  078  064  050  036  022  008  163  149  135  121  107  093  
  
 Rows Total:	1105  
 Matrix Sum:	14365  
 Matrix:		  13 x 13  
 Choir:       Mankind  
 Angel:       Selephiel  
 Power:		    Curse / Destroy  
  
  
Libra / Milky Way:  
==================  
  
 177  186  195  001  010  019  028  128  137  146  099  108  068  077  
 185  194  154  009  018  027  029  136  145  105  107  116  076  078  
 193  153  155  017  026  035  037  144  104  106  115  124  084  086  
 005  161  163  172  034  036  045  103  112  114  123  132  085  094  
 160  162  171  033  042  044  004  111  113  122  131  140  093  053  
 168  170  179  041  043  003  012  119  121  130  139  141  052  061  
 169  178  187  049  002  011  020  120  129  138  147  100  060  069  
 030  039  048  148  157  166  175  079  088  097  050  059  117  126  
 038  047  007  156  165  174  176  087  096  056  058  067  125  127  
 046  006  008  164  173  182  184  095  055  057  066  075  133  135  
 152  014  016  025  181  183  192  054  063  065  074  083  134  143  
 013  015  024  180  189  191  151  062  064  073  082  091  142  102  
 021  023  032  188  190  150  159  070  072  081  090  092  101  110  
 022  031  040  196  149  158  167  071  080  089  098  051  109  118  
  
 Rows Total:	1379  
 Matrix Sum:	19306  
 Matrix:		  14 x 14  
 Choir:       God  
 Angel:       Elohim  
 Power:		    Visions / Rapture  
  
