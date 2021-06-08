#Import base image:Debian Linux dist, gcc compiler
FROM gcc:10.3 

#Copy files from local dir "." to filesystem within container 
COPY . /usr/src/client

#Set work directory within container
WORKDIR /usr/src/client

#Compile c++ programme into myclient binary file
RUN g++ -o myclient client.cpp

#Run binary file when container is run. 
CMD ["./myclient"]