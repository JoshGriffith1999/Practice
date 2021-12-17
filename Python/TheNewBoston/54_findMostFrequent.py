from collections import Counter

#Text that we are going to count
text = "When I get high I get high on speed"\
"Top fuel funny car's a drug for me"\
"My heart, my heart"\
"Kick start my heart"\
"Always got the cops coming after me"\
"Custom-built bike doing 103"\
"My heart, my heart"\
"Kick start my heart"\
"Oh, are you ready girls?"\
"Oh, are you ready now?"\
"Whoa, yeah"\
"Kick start my heart, give it a start"\
"Whoa, yeah, baby"\
"Whoa, yeah"\
"Kick start my heart, hope it never stops"\
"Whoa, yeah, baby, yeah"\
"Skydive naked from an aeroplane"\
"Or a lady with a body from outer space"\
"My heart, my heart"\
"Kick start my heart"\
"Say I got trouble, trouble in my eyes"\
"I'm just looking for another good time"\
"My heart, my heart"\
"Kick start my heart"\
"Yeah, are you ready girls?"\
"Yeah, are you ready now, now, now?"\
"Whoa, yeah"\
"Kick start my heart, give it a start"\
"Whoa, yeah, baby, whoa, yeah"\
"Kick start my heart, hope it never stops"\
"Whoa, yeah, baby"\
"When we started this band"\
"All we needed, needed was a laugh"\
"Years gone by, I'd say we've kicked some ass"\
"When I'm enraged or hittin' the stage"\
"Adrenaline rushing through my veins"\
"And I'd say we're still kickin' ass"\
"I say, ooh ah, kick start my heart"\
"I hope it never stops"\
"And to think, we did all of this to rock"\
"Whoa, yeah"\
"Kick start my heart, give it a start"\
"Whoa, yeah, b-b-b-b-b-b-baby"\
"Whoa, yeah"\
"Kick start my heart, hope it never stops"\
"Whoa, yeah, baby"\
"Whoa, yeah"\
"Kick start my heart, hope it never stops"\
"Whoa, yeah, baby"\
"Whoa, yeah"\
"Kick start my heart, give it a start"\
"Whoa, yeah"\
"Okay boys, let's rock the house"\
"That's all"\
"Kickstart my heart"

#Split text so each word in in a list
lyrics = text.split()

#Create counter object with our newly create list
counter = Counter(lyrics)

#See all frequency
frequency = counter.most_common()
print("Freqeuncy:", frequency)

#Three most common words
topThree = counter.most_common(3)
print("Most common words:", topThree)

#Least used words
bottomThree = counter.most_common(-3)
print("Least Common:", bottomThree)