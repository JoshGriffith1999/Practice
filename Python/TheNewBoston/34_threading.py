#Usefull whenever we need to have multiple "jobs" work at the same time
#run(self) is a special class needed for threads, function called to get the threading started
#In for loops _ can be used if we just need to loop and don't care about the value
#start() method starts off a thread by finding the method called run

import threading

class Messanger(threading.Thread):
    def run(self):
        for _ in range(10):
            print(threading.current_thread().getName())

x = Messanger(name="Mailman")
y = Messanger(name="Recieves messanges")

x.start()
y.start()