# Basic Unix/Linux commands

## (a)	File management
#### Listing files: (ls)
- ls shows the files/directories in the current directory.
- ls -R shows all the files in directories as well as subdirectories.
- ls -al gives the detailed information of all the files.
- ls -a shows the hidden files.
- ls -l shows all the files

#### Creating and viewing files: (cat)
- cat > filename creates a new file (ctrl + d to exit the file)
- cat filename is used to view a file
- cat >> filename is used to append the file
- cat file1 file2 > newfilename is used to combine the 2 files
- file * shows the type of content in each file

#### Deleting files:
- rm removes the files

#### Moving and Renaming the files:
- mv filename newlocation moves the file to a new location
- mv oldfilename newfilename is used to rename the file
#####
- more filename shows the content of the file
- head filename shows the first 10 lines of the file
- tail filename shows the last 10 lines of the file
- touch filename creates or updates the files

## (b)	Directory management
#### Directory Management: 
- mkdir directoryname is used to create directories
- rmdir directoryname removes directories
- mv olddirectoryname newdirectoryname is used to rename directories
- cd changes to home directory
- cd filename changes to that particular directory
- pwd shows the present working directory

## (c)	File permissions
- chmod filename allows to change the file permissions
#### Understanding file permissions:
- r means read permission
- w means write permission
- x means execute permission
- (negative sign) means no permissions
#####
- u: stands for user
- g: stands for group
- o: stands for others
- a: stands for all
#####
-	Negative sign removes the permission
- Plus sign grants the permission
- Equal to sets the permission

## (d)	Process management
- ps displays the current working processes
- top displays all running processes
- fg brings the file to the foreground
- echo $PATH shows the executable path
- df gives the free hard disk on the system
- free gives free RAM on the system
- nice starts a process with a given priority
- bg sends a process to the background
- fg brings a process to the foreground
- uname shows the information about the system

## (e)	Miscellaneous commands
#### Other Important Commands:
- man is used to view the manual
- history is used to view all the commands that were used in the current terminal session
- clear command clears the terminal
- vi filename opens the Vi text editor 

#### Date command: (date)
- date shows the date and time as a string
- date +%a shows the day (short form)
- date +%A shows the day (full form)
- date +%b shows the month (short form)
- date +%B shows the month (full form)
- date +%F shows date, month and year (dd/mm/yyyy)
- date +%T shows time in hours, minutes and seconds
- date +%Y shows the year

#### Calendar: (cal)
- cal shows the current month calendar
- cal -3 shows the current, previous and next month calendar
- cal -j shows the Julian calendar 
- cal -y shows the calendar of the whole year
#####
- w displays who is online
- whoami shows who are you logged in as
- uptime shows how long the current command window has been used
#####
- df shows the disk usage
- du shows directory space usage
- free shows memory and swap usage
