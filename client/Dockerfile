#Import base image:Debian Linux dist, gcc compiler
FROM gcc:10.3 

#Copy files from local dir "." to filesystem within container 
COPY . /usr/src/client

#Set work directory within container
WORKDIR /usr/src/client

#Install wget
RUN apt-get update 

RUN apt-get install wget

#Build Boost From Source 
RUN cd /home && wget http://downloads.sourceforge.net/project/boost/boost/1.76.0/boost_1_76_0.tar.gz \
  && tar xfz boost_1_76_0.tar.gz \
  && rm boost_1_76_0.tar.gz \
  && cd boost_1_76_0 \
  && ./bootstrap.sh --prefix=/usr/local --without-libraries=python\
  && ./b2  \
  && ./b2 install 
  #&& cd /home \
  #&& rm -rf boost_1_76_0 \

#Compile c++ programme into myclient binary file
RUN g++ -o myclient client.cpp

#Run binary file when container is run. 
CMD ["./myclient"]