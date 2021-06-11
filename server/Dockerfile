#Import base image: Debian Linux dist, gcc compiler 
FROM gcc:10.3 

#Copy files from local dir "." to filesystem within container 
COPY . /usr/src/server

#Set container work directory
WORKDIR /usr/src/server

RUN apt-get update

RUN apt-get install wget 

RUN apt-get install vim -y

#Build Boost From Source 
RUN cd /home && wget http://downloads.sourceforge.net/project/boost/boost/1.76.0/boost_1_76_0.tar.gz \
  && tar xfz boost_1_76_0.tar.gz \
  && rm boost_1_76_0.tar.gz \
  && cd boost_1_76_0 \
  && ./bootstrap.sh --prefix=/usr/local --without-libraries=python\
  && ./b2  \
  && ./b2 install \
  && cd /home \
  && rm -rf boost_1_76_0 

#Compile c++ programme within container 
RUN g++ -o myserver server.cpp

#Run c++ programme upon container start up
CMD ["./myserver"]

