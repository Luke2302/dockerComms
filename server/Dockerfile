#Import base image: Debian Linux dist, gcc compiler 
FROM gcc:10.3 

#Copy files from local dir "." to filesystem within container 
COPY . /usr/src/server

#Set container work directory
WORKDIR /usr/src/server

#Compile c++ programme within container 
RUN g++ -o myserver server.cpp

#Run c++ programme upon container start up
CMD ["./myserver"]

