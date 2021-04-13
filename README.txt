Beschrijving:
Deze code bestuurt de Rotary Encoder welke wij tijdens het project gebruikt hebben door middel van het gebruik van een driver en een adapter.

Eigen code:
De code welke staat in de Rotary Encoder component en in de main is eigen code. Deze code was voor het project al geschreven en was gebaseerd op al bestaande code van een mode student. Echter is deze driver van scratch herschreven om thread safe te kunnen opereren door de i2cDev library te gebruiken, deze library is niet zelf geschreven.