#Python File I/O Access Modes
#r = read only, file pointer at top of file
#rb = read only binary file, file pointer at top of file
#r+ = read and write, file pointer at top of file
#rb+ readn and write for binary file, file pointer at top of file

#w = write only, create file if file does not exist, else it overwrites the existing file, file pointer at top of file
#wb = write only binary, create binary file if file does not exist, else it overwrites the existing file, file pointer at top of file
#w+ = open to read and write, create file if file does not exist, else it overwrites the existing file, file pointer at top of file
#wb+ = read and write for binary files, create file if file does not exist, else it overwrites the existing file, file pointer at top of file

#a = opens file for appending, creates new file if the file does not exist, file pointer at end of file
#ab = opens binary file for appending, creates new file if the file does not exist, file pointer at end of file
#a+ = opens file for both appending and reading, creates new file if the file does not exist, file pointer at end of file
#ab+ = opens binary file for both appending and reading, creates new file if the file does not exist, file pointer at end of file


#Create file in write mode, write to file
file_write = open("Sample.txt", "w")
file_write.write("Writting some stuff in my text file\n")
file_write.write("New line character above moved this to a new line\n")
file_write.close()

#Open Sample.txt in read mode, read all text to a variable, close file
file_read = open("Sample.txt", "r")
text = file_read.read()
file_read.close()
print(text)

#Open Sample.txt in append mode, append something to end of file
file_append_write = open("Sample.txt", "a")
file_append_write.write("Appending something to the file\n")
file_append_write.write("Appending another thing to the file\n")
file_append_write.close()

#Open Sample.txt in a+ mode, write and read from file
#Need to send the fle pointer back to the top of the file since
#Read only reads everything past the file pointer
file_append_read = open("Sample.txt", "a+")
file_append_read.write("One more thing to append to the file\n")
file_append_read.seek(0,0)
text2 = file_append_read.read()
file_append_read.close()
print(text2)